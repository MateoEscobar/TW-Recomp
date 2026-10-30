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

// Function: sub_003982A0
// Address: 0x3982a0 - 0x398348
void sub_003982A0_0x3982a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003982A0_0x3982a0");
#endif

    switch (ctx->pc) {
        case 0x3982e0u: goto label_3982e0;
        case 0x39831cu: goto label_39831c;
        default: break;
    }

    ctx->pc = 0x3982a0u;

    // 0x3982a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3982a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3982a4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3982a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3982a8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x3982a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x3982ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3982acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3982b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3982b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3982b4: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x3982b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x3982b8: 0x94e30018  lhu         $v1, 0x18($a3)
    ctx->pc = 0x3982b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x3982bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3982bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3982c0: 0x8cc40020  lw          $a0, 0x20($a2)
    ctx->pc = 0x3982c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x3982c4: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3982C4u;
    {
        const bool branch_taken_0x3982c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3982C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3982C4u;
        // 0x3982c8: 0x25403  sra         $t2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3982c4) {
            ctx->pc = 0x398334u;
            goto label_398334;
        }
    }
    ctx->pc = 0x3982CCu;
    // 0x3982cc: 0x46080  sll         $t4, $a0, 2
    ctx->pc = 0x3982ccu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3982d0: 0x240b0068  addiu       $t3, $zero, 0x68
    ctx->pc = 0x3982d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x3982d4: 0x24e90050  addiu       $t1, $a3, 0x50
    ctx->pc = 0x3982d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x3982d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3982d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3982dc: 0x0  nop
    ctx->pc = 0x3982dcu;
    // NOP
label_3982e0:
    // 0x3982e0: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x3982e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x3982e4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3982e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3982e8: 0x94430024  lhu         $v1, 0x24($v0)
    ctx->pc = 0x3982e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x3982ec: 0x546a000d  bnel        $v1, $t2, . + 4 + (0xD << 2)
    ctx->pc = 0x3982ECu;
    {
        const bool branch_taken_0x3982ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        if (branch_taken_0x3982ec) {
            ctx->pc = 0x3982F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3982ECu;
            // 0x3982f0: 0x94e20018  lhu         $v0, 0x18($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398324u;
            goto label_398324;
        }
    }
    ctx->pc = 0x3982F4u;
    // 0x3982f4: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x3982f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3982f8: 0x21582  srl         $v0, $v0, 22
    ctx->pc = 0x3982f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 22));
    // 0x3982fc: 0x4b1818  mult        $v1, $v0, $t3
    ctx->pc = 0x3982fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x398300: 0x6c1021  addu        $v0, $v1, $t4
    ctx->pc = 0x398300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x398304: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x398304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x398308: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x398308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39830c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x39830Cu;
    {
        const bool branch_taken_0x39830c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39830c) {
            ctx->pc = 0x398310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39830Cu;
            // 0x398310: 0x94e20018  lhu         $v0, 0x18($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398324u;
            goto label_398324;
        }
    }
    ctx->pc = 0x398314u;
    // 0x398314: 0xc0e1338  jal         func_384CE0
    ctx->pc = 0x398314u;
    SET_GPR_U32(ctx, 31, 0x39831Cu);
    ctx->pc = 0x398318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398314u;
    // 0x398318: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384CE0u, 0x398314u, 0x39831Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39831Cu;
label_39831c:
    // 0x39831c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x39831Cu;
    {
        const bool branch_taken_0x39831c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39831Cu;
        // 0x398320: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39831c) {
            ctx->pc = 0x39833Cu;
            goto label_39833c;
        }
    }
    ctx->pc = 0x398324u;
label_398324:
    // 0x398324: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x398324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x398328: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x398328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x39832c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x39832Cu;
    {
        const bool branch_taken_0x39832c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x398330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39832Cu;
        // 0x398330: 0x25080028  addiu       $t0, $t0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39832c) {
            ctx->pc = 0x3982E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3982e0;
        }
    }
    ctx->pc = 0x398334u;
label_398334:
    // 0x398334: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x398334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398338: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x398338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39833c:
    // 0x39833c: 0x3e00008  jr          $ra
    ctx->pc = 0x39833Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39833Cu;
        // 0x398340: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39833Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398344u;
    // 0x398344: 0x0  nop
    ctx->pc = 0x398344u;
    // NOP
    ctx->pc = 0x398348u;
}
