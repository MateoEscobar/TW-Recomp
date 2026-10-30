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

// Function: sub_00471958
// Address: 0x471958 - 0x471a38
void sub_00471958_0x471958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00471958_0x471958");
#endif

    switch (ctx->pc) {
        case 0x471990u: goto label_471990;
        case 0x4719b8u: goto label_4719b8;
        case 0x4719d0u: goto label_4719d0;
        default: break;
    }

    ctx->pc = 0x471958u;

    // 0x471958: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x471958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x47195c: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x47195cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x471960: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x471960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x471964: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x471964u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471968: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x471968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x47196c: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x47196cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x471970: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x471970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x471974: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x471974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x471978: 0x8e50001c  lw          $s0, 0x1C($s2)
    ctx->pc = 0x471978u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x47197c: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x47197Cu;
    {
        const bool branch_taken_0x47197c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x471980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47197Cu;
        // 0x471980: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47197c) {
            ctx->pc = 0x4719DCu;
            goto label_4719dc;
        }
    }
    ctx->pc = 0x471984u;
    // 0x471984: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x471984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471988: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x471988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x47198c: 0x0  nop
    ctx->pc = 0x47198cu;
    // NOP
label_471990:
    // 0x471990: 0x4410018  bgez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x471990u;
    {
        const bool branch_taken_0x471990 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x471994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471990u;
        // 0x471994: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471990) {
            ctx->pc = 0x4719F4u;
            goto label_4719f4;
        }
    }
    ctx->pc = 0x471998u;
    // 0x471998: 0x96020080  lhu         $v0, 0x80($s0)
    ctx->pc = 0x471998u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x47199c: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x47199cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4719a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4719a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4719a4: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x4719a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x4719a8: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4719A8u;
    {
        const bool branch_taken_0x4719a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4719ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4719A8u;
        // 0x4719ac: 0x829821  addu        $s3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4719a8) {
            ctx->pc = 0x4719E4u;
            goto label_4719e4;
        }
    }
    ctx->pc = 0x4719B0u;
    // 0x4719b0: 0xc11b72a  jal         func_46DCA8
    ctx->pc = 0x4719B0u;
    SET_GPR_U32(ctx, 31, 0x4719B8u);
    ctx->pc = 0x4719B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4719B0u;
    // 0x4719b4: 0x96040084  lhu         $a0, 0x84($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46DCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46DCA8u, 0x4719B0u, 0x4719B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4719B8u;
label_4719b8:
    // 0x4719b8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4719B8u;
    {
        const bool branch_taken_0x4719b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4719BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4719B8u;
        // 0x4719bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4719b8) {
            ctx->pc = 0x4719DCu;
            goto label_4719dc;
        }
    }
    ctx->pc = 0x4719C0u;
    // 0x4719c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4719c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4719c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4719c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4719c8: 0xc11c258  jal         func_470960
    ctx->pc = 0x4719C8u;
    SET_GPR_U32(ctx, 31, 0x4719D0u);
    ctx->pc = 0x4719CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4719C8u;
    // 0x4719cc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x470960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470960u, 0x4719C8u, 0x4719D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4719D0u;
label_4719d0:
    // 0x4719d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4719d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4719d4: 0x56400004  bnel        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4719D4u;
    {
        const bool branch_taken_0x4719d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x4719d4) {
            ctx->pc = 0x4719D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4719D4u;
            // 0x4719d8: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4719E8u;
            goto label_4719e8;
        }
    }
    ctx->pc = 0x4719DCu;
label_4719dc:
    // 0x4719dc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4719DCu;
    {
        const bool branch_taken_0x4719dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4719E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4719DCu;
        // 0x4719e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4719dc) {
            ctx->pc = 0x471A14u;
            goto label_471a14;
        }
    }
    ctx->pc = 0x4719E4u;
label_4719e4:
    // 0x4719e4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x4719e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4719e8:
    // 0x4719e8: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x4719e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x4719ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4719ECu;
    {
        const bool branch_taken_0x4719ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4719F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4719ECu;
        // 0x4719f0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4719ec) {
            ctx->pc = 0x471A08u;
            goto label_471a08;
        }
    }
    ctx->pc = 0x4719F4u;
label_4719f4:
    // 0x4719f4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x4719f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x4719f8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4719f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4719fc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4719fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x471a00: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x471a00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x471a04: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x471a04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_471a08:
    // 0x471a08: 0x683ffe1  bgezl       $s4, . + 4 + (-0x1F << 2)
    ctx->pc = 0x471A08u;
    {
        const bool branch_taken_0x471a08 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x471a08) {
            ctx->pc = 0x471A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x471A08u;
            // 0x471a0c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x471990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_471990;
        }
    }
    ctx->pc = 0x471A10u;
    // 0x471a10: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x471a10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_471a14:
    // 0x471a14: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x471a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x471a18: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x471a18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x471a1c: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x471a1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x471a20: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x471a20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x471a24: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x471a24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x471a28: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x471a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x471a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x471A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x471A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471A2Cu;
        // 0x471a30: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x471A34u;
    // 0x471a34: 0x0  nop
    ctx->pc = 0x471a34u;
    // NOP
    ctx->pc = 0x471a38u;
}
