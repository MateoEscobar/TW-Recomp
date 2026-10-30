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

// Function: sub_004ECF88
// Address: 0x4ecf88 - 0x4ed068
void sub_004ECF88_0x4ecf88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECF88_0x4ecf88");
#endif

    switch (ctx->pc) {
        case 0x4ecfa0u: goto label_4ecfa0;
        case 0x4ecfa8u: goto label_4ecfa8;
        case 0x4ed018u: goto label_4ed018;
        default: break;
    }

    ctx->pc = 0x4ecf88u;

    // 0x4ecf88: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x4ecf88u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
    // 0x4ecf8c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4ecf8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ecf90: 0x1a0702d  daddu       $t6, $t5, $zero
    ctx->pc = 0x4ecf90u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ecf94: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x4ecf94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ecf98: 0x240c0084  addiu       $t4, $zero, 0x84
    ctx->pc = 0x4ecf98u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x4ecf9c: 0x0  nop
    ctx->pc = 0x4ecf9cu;
    // NOP
label_4ecfa0:
    // 0x4ecfa0: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x4ecfa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x4ecfa4: 0x8cca0000  lw          $t2, 0x0($a2)
    ctx->pc = 0x4ecfa4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4ecfa8:
    // 0x4ecfa8: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4ecfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ecfac: 0x14c2818  mult        $a1, $t2, $t4
    ctx->pc = 0x4ecfacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4ecfb0: 0x8da3489c  lw          $v1, 0x489C($t5)
    ctx->pc = 0x4ecfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 18588)));
    // 0x4ecfb4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4ecfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ecfb8: 0x246314d4  addiu       $v1, $v1, 0x14D4
    ctx->pc = 0x4ecfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5332));
    // 0x4ecfbc: 0x4c1018  mult        $v0, $v0, $t4
    ctx->pc = 0x4ecfbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4ecfc0: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x4ecfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4ecfc4: 0x9085000c  lbu         $a1, 0xC($a0)
    ctx->pc = 0x4ecfc4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4ecfc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ecfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ecfcc: 0x9062000c  lbu         $v0, 0xC($v1)
    ctx->pc = 0x4ecfccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4ecfd0: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x4ecfd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4ecfd4: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x4ECFD4u;
    {
        const bool branch_taken_0x4ecfd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ecfd4) {
            ctx->pc = 0x4ECFD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ECFD4u;
            // 0x4ecfd8: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ECFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ecfa8;
        }
    }
    ctx->pc = 0x4ECFDCu;
    // 0x4ecfdc: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4ecfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ecfe0: 0x240b0084  addiu       $t3, $zero, 0x84
    ctx->pc = 0x4ecfe0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x4ecfe4: 0x8dc2489c  lw          $v0, 0x489C($t6)
    ctx->pc = 0x4ecfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 18588)));
    // 0x4ecfe8: 0x14b1818  mult        $v1, $t2, $t3
    ctx->pc = 0x4ecfe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4ecfec: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4ecfecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ecff0: 0x244914d4  addiu       $t1, $v0, 0x14D4
    ctx->pc = 0x4ecff0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 5332));
    // 0x4ecff4: 0x8b1018  mult        $v0, $a0, $t3
    ctx->pc = 0x4ecff4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4ecff8: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x4ecff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x4ecffc: 0x906a000c  lbu         $t2, 0xC($v1)
    ctx->pc = 0x4ecffcu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4ed000: 0x492021  addu        $a0, $v0, $t1
    ctx->pc = 0x4ed000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x4ed004: 0x9082000c  lbu         $v0, 0xC($a0)
    ctx->pc = 0x4ed004u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4ed008: 0x142102b  sltu        $v0, $t2, $v0
    ctx->pc = 0x4ed008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4ed00c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4ED00Cu;
    {
        const bool branch_taken_0x4ed00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ED010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED00Cu;
        // 0x4ed010: 0x107102b  sltu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed00c) {
            ctx->pc = 0x4ED040u;
            goto label_4ed040;
        }
    }
    ctx->pc = 0x4ED014u;
    // 0x4ed014: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x4ed014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_4ed018:
    // 0x4ed018: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4ed018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ed01c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4ed01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ed020: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4ed020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed024: 0x6b1018  mult        $v0, $v1, $t3
    ctx->pc = 0x4ed024u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4ed028: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x4ed028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x4ed02c: 0x9062000c  lbu         $v0, 0xC($v1)
    ctx->pc = 0x4ed02cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4ed030: 0x142102b  sltu        $v0, $t2, $v0
    ctx->pc = 0x4ed030u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4ed034: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4ED034u;
    {
        const bool branch_taken_0x4ed034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ed034) {
            ctx->pc = 0x4ED038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ED034u;
            // 0x4ed038: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ED018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ed018;
        }
    }
    ctx->pc = 0x4ED03Cu;
    // 0x4ed03c: 0x107102b  sltu        $v0, $t0, $a3
    ctx->pc = 0x4ed03cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_4ed040:
    // 0x4ed040: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4ED040u;
    {
        const bool branch_taken_0x4ed040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ed040) {
            ctx->pc = 0x4ED05Cu;
            goto label_4ed05c;
        }
    }
    ctx->pc = 0x4ED048u;
    // 0x4ed048: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4ed048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ed04c: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4ed04cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4ed050: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4ed050u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4ed054: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x4ED054u;
    {
        const bool branch_taken_0x4ed054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ED058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED054u;
        // 0x4ed058: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed054) {
            ctx->pc = 0x4ECFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ecfa0;
        }
    }
    ctx->pc = 0x4ED05Cu;
label_4ed05c:
    // 0x4ed05c: 0x3e00008  jr          $ra
    ctx->pc = 0x4ED05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED05Cu;
        // 0x4ed060: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ED05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ED064u;
    // 0x4ed064: 0x0  nop
    ctx->pc = 0x4ed064u;
    // NOP
    ctx->pc = 0x4ed068u;
}
