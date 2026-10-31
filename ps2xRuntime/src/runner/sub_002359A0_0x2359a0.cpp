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

// Function: sub_002359A0
// Address: 0x2359a0 - 0x235a28
void sub_002359A0_0x2359a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002359A0_0x2359a0");
#endif

    switch (ctx->pc) {
        case 0x2359c4u: goto label_2359c4;
        case 0x2359ccu: goto label_2359cc;
        default: break;
    }

    ctx->pc = 0x2359a0u;

    // 0x2359a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2359a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2359a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2359a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2359a8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2359a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2359ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2359acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2359b0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2359b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2359b4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2359b4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2359b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2359b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2359bc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2359BCu;
    SET_GPR_U32(ctx, 31, 0x2359C4u);
    ctx->pc = 0x2359C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2359BCu;
    // 0x2359c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2359BCu, 0x2359C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2359C4u;
label_2359c4:
    // 0x2359c4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2359C4u;
    SET_GPR_U32(ctx, 31, 0x2359CCu);
    ctx->pc = 0x2359C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2359C4u;
    // 0x2359c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2359C4u, 0x2359CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2359CCu;
label_2359cc:
    // 0x2359cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2359ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2359d0: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2359D0u;
    {
        const bool branch_taken_0x2359d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2359D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2359D0u;
        // 0x2359d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2359d0) {
            ctx->pc = 0x235A14u;
            goto label_235a14;
        }
    }
    ctx->pc = 0x2359D8u;
    // 0x2359d8: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2359D8u;
    {
        const bool branch_taken_0x2359d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2359DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2359D8u;
        // 0x2359dc: 0xdca200e0  ld          $v0, 0xE0($a1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2359d8) {
            ctx->pc = 0x2359FCu;
            goto label_2359fc;
        }
    }
    ctx->pc = 0x2359E0u;
    // 0x2359e0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2359e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2359e4: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x2359e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x2359e8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2359e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x2359ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2359ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2359f0: 0xfca200e0  sd          $v0, 0xE0($a1)
    ctx->pc = 0x2359f0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 224), GPR_U64(ctx, 2));
    // 0x2359f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2359F4u;
    {
        const bool branch_taken_0x2359f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2359F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2359F4u;
        // 0x2359f8: 0xe494024c  swc1        $f20, 0x24C($a0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2359f4) {
            ctx->pc = 0x235A14u;
            goto label_235a14;
        }
    }
    ctx->pc = 0x2359FCu;
label_2359fc:
    // 0x2359fc: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x2359fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x235a00: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x235a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x235a04: 0x31af8  dsll        $v1, $v1, 11
    ctx->pc = 0x235a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 11);
    // 0x235a08: 0x346307ff  ori         $v1, $v1, 0x7FF
    ctx->pc = 0x235a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2047);
    // 0x235a0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x235a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x235a10: 0xfca200e0  sd          $v0, 0xE0($a1)
    ctx->pc = 0x235a10u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 224), GPR_U64(ctx, 2));
label_235a14:
    // 0x235a14: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x235a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235a18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235a1c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x235a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x235a20: 0x3e00008  jr          $ra
    ctx->pc = 0x235A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A20u;
        // 0x235a24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235A28u;
}
