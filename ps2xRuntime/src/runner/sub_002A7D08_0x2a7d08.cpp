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

// Function: sub_002A7D08
// Address: 0x2a7d08 - 0x2a7d58
void sub_002A7D08_0x2a7d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7D08_0x2a7d08");
#endif

    switch (ctx->pc) {
        case 0x2a7d4cu: goto label_2a7d4c;
        default: break;
    }

    ctx->pc = 0x2a7d08u;

    // 0x2a7d08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a7d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a7d0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a7d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a7d10: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2a7d10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2a7d14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a7d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a7d18: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2a7d18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2a7d1c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2a7d1cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2a7d20: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x2a7d20u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2a7d24: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x2a7d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7d28: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x2a7d28u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x2a7d2c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2a7d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7d30: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2a7d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7d34: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2a7d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a7d38: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2a7d38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7d3c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2a7d3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a7d40: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2a7d40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2a7d44: 0xc0a9f56  jal         func_2A7D58
    ctx->pc = 0x2A7D44u;
    SET_GPR_U32(ctx, 31, 0x2A7D4Cu);
    ctx->pc = 0x2A7D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7D44u;
    // 0x2a7d48: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7D58u, 0x2A7D44u, 0x2A7D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7D4Cu;
label_2a7d4c:
    // 0x2a7d4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a7d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7d50: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7D50u;
        // 0x2a7d54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7D58u;
}
