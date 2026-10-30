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

// Function: sub_0011C638
// Address: 0x11c638 - 0x11c6b8
void sub_0011C638_0x11c638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C638_0x11c638");
#endif

    switch (ctx->pc) {
        case 0x11c678u: goto label_11c678;
        case 0x11c68cu: goto label_11c68c;
        case 0x11c6a4u: goto label_11c6a4;
        default: break;
    }

    ctx->pc = 0x11c638u;

    // 0x11c638: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11c638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11c63c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x11c63cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c640: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11c640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x11c644: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11c644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c648: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11c648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11c64c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11c64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c650: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11c650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11c654: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x11c654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11c658: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x11c658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11c65c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x11c65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11c660: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x11c660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11c664: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x11c664u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11c668: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x11c668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x11c66c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x11c66cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11c670: 0xc047e78  jal         func_11F9E0
    ctx->pc = 0x11C670u;
    SET_GPR_U32(ctx, 31, 0x11C678u);
    ctx->pc = 0x11C674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C670u;
    // 0x11c674: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x11C670u, 0x11C678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C678u;
label_11c678:
    // 0x11c678: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11c678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c67c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11C67Cu;
    {
        const bool branch_taken_0x11c67c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C67Cu;
        // 0x11c680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c67c) {
            ctx->pc = 0x11C6A4u;
            goto label_11c6a4;
        }
    }
    ctx->pc = 0x11C684u;
    // 0x11c684: 0xc049f52  jal         func_127D48
    ctx->pc = 0x11C684u;
    SET_GPR_U32(ctx, 31, 0x11C68Cu);
    ctx->pc = 0x11C688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C684u;
    // 0x11c688: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D48u, 0x11C684u, 0x11C68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C68Cu;
label_11c68c:
    // 0x11c68c: 0x7a020180  lq          $v0, 0x180($s0)
    ctx->pc = 0x11c68cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x11c690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c694: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11c694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c698: 0x7e020240  sq          $v0, 0x240($s0)
    ctx->pc = 0x11c698u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 576), GPR_VEC(ctx, 2));
    // 0x11c69c: 0xc049714  jal         func_125C50
    ctx->pc = 0x11C69Cu;
    SET_GPR_U32(ctx, 31, 0x11C6A4u);
    ctx->pc = 0x11C6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C69Cu;
    // 0x11c6a0: 0x7e020270  sq          $v0, 0x270($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 624), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125C50u, 0x11C69Cu, 0x11C6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C6A4u;
label_11c6a4:
    // 0x11c6a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x11c6a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c6a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11c6a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x11C6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6ACu;
        // 0x11c6b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C6B4u;
    // 0x11c6b4: 0x0  nop
    ctx->pc = 0x11c6b4u;
    // NOP
    ctx->pc = 0x11c6b8u;
}
