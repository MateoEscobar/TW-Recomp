#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00252C28
// Address: 0x252c28 - 0x252c90
void sub_00252C28_0x252c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252C28_0x252c28");
#endif

    switch (ctx->pc) {
        case 0x252c5cu: goto label_252c5c;
        default: break;
    }

    ctx->pc = 0x252c28u;

    // 0x252c28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x252c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x252c2c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x252c2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c30: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x252c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x252c34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x252c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x252c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x252c3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x252c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c40: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x252c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x252c44: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x252c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252c48: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x252c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252c4c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x252c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x252c50: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x252c50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x252c54: 0xc094040  jal         func_250100
    ctx->pc = 0x252C54u;
    SET_GPR_U32(ctx, 31, 0x252C5Cu);
    ctx->pc = 0x252C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252C54u;
    // 0x252c58: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x250100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250100u, 0x252C54u, 0x252C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252C5Cu;
label_252c5c:
    // 0x252c5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x252c5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c60: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x252C60u;
    {
        const bool branch_taken_0x252c60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x252c60) {
            ctx->pc = 0x252C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252C60u;
            // 0x252c64: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252C84u;
            goto label_252c84;
        }
    }
    ctx->pc = 0x252C68u;
    // 0x252c68: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x252C68u;
    {
        const bool branch_taken_0x252c68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x252C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C68u;
        // 0x252c6c: 0x94620048  lhu         $v0, 0x48($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252c68) {
            ctx->pc = 0x252C78u;
            goto label_252c78;
        }
    }
    ctx->pc = 0x252C70u;
    // 0x252c70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x252C70u;
    {
        const bool branch_taken_0x252c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C70u;
        // 0x252c74: 0x3042fff7  andi        $v0, $v0, 0xFFF7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
        ctx->in_delay_slot = false;
        if (branch_taken_0x252c70) {
            ctx->pc = 0x252C7Cu;
            goto label_252c7c;
        }
    }
    ctx->pc = 0x252C78u;
label_252c78:
    // 0x252c78: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x252c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_252c7c:
    // 0x252c7c: 0xa4620048  sh          $v0, 0x48($v1)
    ctx->pc = 0x252c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 72), (uint16_t)GPR_U32(ctx, 2));
    // 0x252c80: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x252c80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_252c84:
    // 0x252c84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x252c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252c88: 0x3e00008  jr          $ra
    ctx->pc = 0x252C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C88u;
        // 0x252c8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252C90u;
}
