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

// Function: sub_001E4988
// Address: 0x1e4988 - 0x1e4a20
void sub_001E4988_0x1e4988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4988_0x1e4988");
#endif

    switch (ctx->pc) {
        case 0x1e4988u: goto label_1e4988;
        case 0x1e498cu: goto label_1e498c;
        case 0x1e4990u: goto label_1e4990;
        case 0x1e4994u: goto label_1e4994;
        case 0x1e4998u: goto label_1e4998;
        case 0x1e499cu: goto label_1e499c;
        case 0x1e49a0u: goto label_1e49a0;
        case 0x1e49a4u: goto label_1e49a4;
        case 0x1e49a8u: goto label_1e49a8;
        case 0x1e49acu: goto label_1e49ac;
        case 0x1e49b0u: goto label_1e49b0;
        case 0x1e49b4u: goto label_1e49b4;
        case 0x1e49b8u: goto label_1e49b8;
        case 0x1e49bcu: goto label_1e49bc;
        case 0x1e49c0u: goto label_1e49c0;
        case 0x1e49c4u: goto label_1e49c4;
        case 0x1e49c8u: goto label_1e49c8;
        case 0x1e49ccu: goto label_1e49cc;
        case 0x1e49d0u: goto label_1e49d0;
        case 0x1e49d4u: goto label_1e49d4;
        case 0x1e49d8u: goto label_1e49d8;
        case 0x1e49dcu: goto label_1e49dc;
        case 0x1e49e0u: goto label_1e49e0;
        case 0x1e49e4u: goto label_1e49e4;
        case 0x1e49e8u: goto label_1e49e8;
        case 0x1e49ecu: goto label_1e49ec;
        case 0x1e49f0u: goto label_1e49f0;
        case 0x1e49f4u: goto label_1e49f4;
        case 0x1e49f8u: goto label_1e49f8;
        case 0x1e49fcu: goto label_1e49fc;
        case 0x1e4a00u: goto label_1e4a00;
        case 0x1e4a04u: goto label_1e4a04;
        case 0x1e4a08u: goto label_1e4a08;
        case 0x1e4a0cu: goto label_1e4a0c;
        case 0x1e4a10u: goto label_1e4a10;
        case 0x1e4a14u: goto label_1e4a14;
        case 0x1e4a18u: goto label_1e4a18;
        case 0x1e4a1cu: goto label_1e4a1c;
        default: break;
    }

    ctx->pc = 0x1e4988u;

label_1e4988:
    // 0x1e4988: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e4988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e498c:
    // 0x1e498c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1e498cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1e4990:
    // 0x1e4990: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e4990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1e4994:
    // 0x1e4994: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1e4994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1e4998:
    // 0x1e4998: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1e4998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1e499c:
    // 0x1e499c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e499cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e49a0:
    // 0x1e49a0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e49a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1e49a4:
    // 0x1e49a4: 0x2442c3a8  addiu       $v0, $v0, -0x3C58
    ctx->pc = 0x1e49a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951848));
label_1e49a8:
    // 0x1e49a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e49a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e49ac:
    // 0x1e49ac: 0x2463c3d0  addiu       $v1, $v1, -0x3C30
    ctx->pc = 0x1e49acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951888));
label_1e49b0:
    // 0x1e49b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e49b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e49b4:
    // 0x1e49b4: 0x262407a0  addiu       $a0, $s1, 0x7A0
    ctx->pc = 0x1e49b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1952));
label_1e49b8:
    // 0x1e49b8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1e49b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e49bc:
    // 0x1e49bc: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x1e49bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
label_1e49c0:
    // 0x1e49c0: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_1e49c4:
    if (ctx->pc == 0x1E49C4u) {
        ctx->pc = 0x1E49C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E49C0u;
        // 0x1e49c4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E49C8u;
        goto label_1e49c8;
    }
    ctx->pc = 0x1E49C0u;
    {
        const bool branch_taken_0x1e49c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E49C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E49C0u;
        // 0x1e49c4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e49c0) {
            ctx->pc = 0x1E49F8u;
            goto label_1e49f8;
        }
    }
    ctx->pc = 0x1E49C8u;
label_1e49c8:
    // 0x1e49c8: 0x26300940  addiu       $s0, $s1, 0x940
    ctx->pc = 0x1e49c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2368));
label_1e49cc:
    // 0x1e49cc: 0x1090000a  beq         $a0, $s0, . + 4 + (0xA << 2)
label_1e49d0:
    if (ctx->pc == 0x1E49D0u) {
        ctx->pc = 0x1E49D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E49CCu;
        // 0x1e49d0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E49D4u;
        goto label_1e49d4;
    }
    ctx->pc = 0x1E49CCu;
    {
        const bool branch_taken_0x1e49cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x1E49D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E49CCu;
        // 0x1e49d0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e49cc) {
            ctx->pc = 0x1E49F8u;
            goto label_1e49f8;
        }
    }
    ctx->pc = 0x1E49D4u;
label_1e49d4:
    // 0x1e49d4: 0x2610ff30  addiu       $s0, $s0, -0xD0
    ctx->pc = 0x1e49d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967088));
label_1e49d8:
    // 0x1e49d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e49d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e49dc:
    // 0x1e49dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e49dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e49e0:
    // 0x1e49e0: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1e49e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_1e49e4:
    // 0x1e49e4: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x1e49e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_1e49e8:
    // 0x1e49e8: 0x60f809  jalr        $v1
label_1e49ec:
    if (ctx->pc == 0x1E49ECu) {
        ctx->pc = 0x1E49ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E49E8u;
        // 0x1e49ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E49F0u;
        goto label_1e49f0;
    }
    ctx->pc = 0x1E49E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E49F0u);
        ctx->pc = 0x1E49ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E49E8u;
        // 0x1e49ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E49E8u, 0x1E49F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E49F0u;
label_1e49f0:
    // 0x1e49f0: 0x1650fff9  bne         $s2, $s0, . + 4 + (-0x7 << 2)
label_1e49f4:
    if (ctx->pc == 0x1E49F4u) {
        ctx->pc = 0x1E49F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E49F0u;
        // 0x1e49f4: 0x2610ff30  addiu       $s0, $s0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E49F8u;
        goto label_1e49f8;
    }
    ctx->pc = 0x1E49F0u;
    {
        const bool branch_taken_0x1e49f0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x1E49F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E49F0u;
        // 0x1e49f4: 0x2610ff30  addiu       $s0, $s0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e49f0) {
            ctx->pc = 0x1E49D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e49d8;
        }
    }
    ctx->pc = 0x1E49F8u;
label_1e49f8:
    // 0x1e49f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e49f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e49fc:
    // 0x1e49fc: 0xc074636  jal         func_1D18D8
label_1e4a00:
    if (ctx->pc == 0x1E4A00u) {
        ctx->pc = 0x1E4A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E49FCu;
        // 0x1e4a00: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4A04u;
        goto label_1e4a04;
    }
    ctx->pc = 0x1E49FCu;
    SET_GPR_U32(ctx, 31, 0x1E4A04u);
    ctx->pc = 0x1E4A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E49FCu;
    // 0x1e4a00: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18D8u, 0x1E49FCu, 0x1E4A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4A04u;
label_1e4a04:
    // 0x1e4a04: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e4a04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e4a08:
    // 0x1e4a08: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e4a08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e4a0c:
    // 0x1e4a0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e4a0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e4a10:
    // 0x1e4a10: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1e4a10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4a14:
    // 0x1e4a14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4a18:
    // 0x1e4a18: 0x3e00008  jr          $ra
label_1e4a1c:
    if (ctx->pc == 0x1E4A1Cu) {
        ctx->pc = 0x1E4A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A18u;
        // 0x1e4a1c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4A20u;
        goto label_fallthrough_0x1e4a18;
    }
    ctx->pc = 0x1E4A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A18u;
        // 0x1e4a1c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e4a18:
    ctx->pc = 0x1E4A20u;
}
