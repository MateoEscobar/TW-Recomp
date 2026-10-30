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

// Function: sub_004ED250
// Address: 0x4ed250 - 0x4ed338
void sub_004ED250_0x4ed250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED250_0x4ed250");
#endif

    switch (ctx->pc) {
        case 0x4ed290u: goto label_4ed290;
        case 0x4ed2e4u: goto label_4ed2e4;
        case 0x4ed300u: goto label_4ed300;
        default: break;
    }

    ctx->pc = 0x4ed250u;

    // 0x4ed250: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4ed250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4ed254: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4ed254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x4ed258: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4ed258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4ed25c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4ed25cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed260: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4ed260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x4ed264: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4ed264u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed268: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4ed268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x4ed26c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x4ed26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x4ed270: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x4ed270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x4ed274: 0x12530026  beq         $s2, $s3, . + 4 + (0x26 << 2)
    ctx->pc = 0x4ED274u;
    {
        const bool branch_taken_0x4ed274 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        ctx->pc = 0x4ED278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED274u;
        // 0x4ed278: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed274) {
            ctx->pc = 0x4ED310u;
            goto label_4ed310;
        }
    }
    ctx->pc = 0x4ED27Cu;
    // 0x4ed27c: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x4ed27cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4ed280: 0x12130023  beq         $s0, $s3, . + 4 + (0x23 << 2)
    ctx->pc = 0x4ED280u;
    {
        const bool branch_taken_0x4ed280 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x4ED284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED280u;
        // 0x4ed284: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed280) {
            ctx->pc = 0x4ED310u;
            goto label_4ed310;
        }
    }
    ctx->pc = 0x4ED288u;
    // 0x4ed288: 0x24140084  addiu       $s4, $zero, 0x84
    ctx->pc = 0x4ed288u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x4ed28c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4ed28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4ed290:
    // 0x4ed290: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x4ed290u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ed294: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4ed294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ed298: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4ed298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ed29c: 0xb41018  mult        $v0, $a1, $s4
    ctx->pc = 0x4ed29cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4ed2a0: 0x8ea4489c  lw          $a0, 0x489C($s5)
    ctx->pc = 0x4ed2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
    // 0x4ed2a4: 0x741818  mult        $v1, $v1, $s4
    ctx->pc = 0x4ed2a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4ed2a8: 0x248414d4  addiu       $a0, $a0, 0x14D4
    ctx->pc = 0x4ed2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5332));
    // 0x4ed2ac: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x4ed2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4ed2b0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4ed2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4ed2b4: 0x9082000c  lbu         $v0, 0xC($a0)
    ctx->pc = 0x4ed2b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4ed2b8: 0x90a3000c  lbu         $v1, 0xC($a1)
    ctx->pc = 0x4ed2b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4ed2bc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4ed2bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4ed2c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4ED2C0u;
    {
        const bool branch_taken_0x4ed2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ED2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED2C0u;
        // 0x4ed2c4: 0x2122023  subu        $a0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed2c0) {
            ctx->pc = 0x4ED2F0u;
            goto label_4ed2f0;
        }
    }
    ctx->pc = 0x4ED2C8u;
    // 0x4ed2c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4ed2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed2cc: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x4ed2ccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x4ed2d0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4ed2d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x4ed2d4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4ed2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4ed2d8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4ed2d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed2dc: 0xc10c1bb  jal         func_4306EC
    ctx->pc = 0x4ED2DCu;
    SET_GPR_U32(ctx, 31, 0x4ED2E4u);
    ctx->pc = 0x4ED2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED2DCu;
    // 0x4ed2e0: 0x2042023  subu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4ED2DCu, 0x4ED2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ED2E4u;
label_4ed2e4:
    // 0x4ed2e4: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x4ed2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x4ed2e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4ED2E8u;
    {
        const bool branch_taken_0x4ed2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ED2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED2E8u;
        // 0x4ed2ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed2e8) {
            ctx->pc = 0x4ED304u;
            goto label_4ed304;
        }
    }
    ctx->pc = 0x4ED2F0u;
label_4ed2f0:
    // 0x4ed2f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ed2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed2f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4ed2f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed2f8: 0xc13b47a  jal         func_4ED1E8
    ctx->pc = 0x4ED2F8u;
    SET_GPR_U32(ctx, 31, 0x4ED300u);
    ctx->pc = 0x4ED2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED2F8u;
    // 0x4ed2fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED1E8u, 0x4ED2F8u, 0x4ED300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ED300u;
label_4ed300:
    // 0x4ed300: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x4ed300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4ed304:
    // 0x4ed304: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ed304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed308: 0x5613ffe1  bnel        $s0, $s3, . + 4 + (-0x1F << 2)
    ctx->pc = 0x4ED308u;
    {
        const bool branch_taken_0x4ed308 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x4ed308) {
            ctx->pc = 0x4ED30Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ED308u;
            // 0x4ed30c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ED290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ed290;
        }
    }
    ctx->pc = 0x4ED310u;
label_4ed310:
    // 0x4ed310: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4ed310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4ed314: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4ed314u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4ed318: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4ed318u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ed31c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4ed31cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ed320: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x4ed320u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ed324: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x4ed324u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ed328: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ed328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ed32c: 0x3e00008  jr          $ra
    ctx->pc = 0x4ED32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED32Cu;
        // 0x4ed330: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ED32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ED334u;
    // 0x4ed334: 0x0  nop
    ctx->pc = 0x4ed334u;
    // NOP
    ctx->pc = 0x4ed338u;
}
