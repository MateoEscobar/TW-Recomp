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

// Function: sub_0044F0D0
// Address: 0x44f0d0 - 0x44f4f0
void sub_0044F0D0_0x44f0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044F0D0_0x44f0d0");
#endif

    switch (ctx->pc) {
        case 0x44f120u: goto label_44f120;
        case 0x44f1b8u: goto label_44f1b8;
        case 0x44f260u: goto label_44f260;
        case 0x44f280u: goto label_44f280;
        default: break;
    }

    ctx->pc = 0x44f0d0u;

    // 0x44f0d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x44f0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x44f0d4: 0x8f828418  lw          $v0, -0x7BE8($gp)
    ctx->pc = 0x44f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x44f0d8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x44f0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x44f0dc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x44f0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x44f0e0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x44f0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x44f0e4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x44f0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x44f0e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x44f0e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f0ec: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x44f0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x44f0f0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x44f0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x44f0f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44f0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44f0f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x44f0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x44f0fc: 0x24660050  addiu       $a2, $v1, 0x50
    ctx->pc = 0x44f0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x44f100: 0x8cd1004c  lw          $s1, 0x4C($a2)
    ctx->pc = 0x44f100u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x44f104: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x44f104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x44f108: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x44F108u;
    {
        const bool branch_taken_0x44f108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F108u;
        // 0x44f10c: 0x8cc70058  lw          $a3, 0x58($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f108) {
            ctx->pc = 0x44F2A4u;
            goto label_44f2a4;
        }
    }
    ctx->pc = 0x44F110u;
    // 0x44f110: 0x24740054  addiu       $s4, $v1, 0x54
    ctx->pc = 0x44f110u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x44f114: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x44f114u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f118: 0x26330140  addiu       $s3, $s1, 0x140
    ctx->pc = 0x44f118u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    // 0x44f11c: 0xc2140  sll         $a0, $t4, 5
    ctx->pc = 0x44f11cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
label_44f120:
    // 0x44f120: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x44f120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x44f124: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x44f124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x44f128: 0x3c030300  lui         $v1, 0x300
    ctx->pc = 0x44f128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)768 << 16));
    // 0x44f12c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x44f12cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x44f130: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x44f130u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x44f134: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x44f134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x44f138: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x44f138u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f13c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x44f13cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x44f140: 0x25920001  addiu       $s2, $t4, 0x1
    ctx->pc = 0x44f140u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x44f144: 0x8e2200fc  lw          $v0, 0xFC($s1)
    ctx->pc = 0x44f144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x44f148: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x44f148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x44f14c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x44f14cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x44f150: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x44f150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x44f154: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x44f154u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x44f158: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x44f158u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x44f15c: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x44f15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x44f160: 0x8e230128  lw          $v1, 0x128($s1)
    ctx->pc = 0x44f160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x44f164: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x44f164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x44f168: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x44f168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x44f16c: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x44f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x44f170: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x44f170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x44f174: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x44f174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x44f178: 0x8e230128  lw          $v1, 0x128($s1)
    ctx->pc = 0x44f178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x44f17c: 0x8e250124  lw          $a1, 0x124($s1)
    ctx->pc = 0x44f17cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x44f180: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x44f180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x44f184: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x44f184u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x44f188: 0x8e2600fc  lw          $a2, 0xFC($s1)
    ctx->pc = 0x44f188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x44f18c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x44f18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x44f190: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x44f190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x44f194: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x44F194u;
    {
        const bool branch_taken_0x44f194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F194u;
        // 0x44f198: 0x458021  addu        $s0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f194) {
            ctx->pc = 0x44F254u;
            goto label_44f254;
        }
    }
    ctx->pc = 0x44F19Cu;
    // 0x44f19c: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x44f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x44f1a0: 0x260702d  daddu       $t6, $s3, $zero
    ctx->pc = 0x44f1a0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f1a4: 0x1826818  mult        $t5, $t4, $v0
    ctx->pc = 0x44f1a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x44f1a8: 0x262b0100  addiu       $t3, $s1, 0x100
    ctx->pc = 0x44f1a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x44f1ac: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x44f1acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f1b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x44f1b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f1b4: 0x0  nop
    ctx->pc = 0x44f1b4u;
    // NOP
label_44f1b8:
    // 0x44f1b8: 0xc91021  addu        $v0, $a2, $t1
    ctx->pc = 0x44f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x44f1bc: 0x8c470024  lw          $a3, 0x24($v0)
    ctx->pc = 0x44f1bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x44f1c0: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x44f1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x44f1c4: 0x6d1021  addu        $v0, $v1, $t5
    ctx->pc = 0x44f1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x44f1c8: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x44f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x44f1cc: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x44f1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x44f1d0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x44f1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x44f1d4: 0xad500044  sw          $s0, 0x44($t2)
    ctx->pc = 0x44f1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 68), GPR_U32(ctx, 16));
    // 0x44f1d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x44f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x44f1dc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x44F1DCu;
    {
        const bool branch_taken_0x44f1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44f1dc) {
            ctx->pc = 0x44F1E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44F1DCu;
            // 0x44f1e0: 0x8e2300fc  lw          $v1, 0xFC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44F200u;
            goto label_44f200;
        }
    }
    ctx->pc = 0x44F1E4u;
    // 0x44f1e4: 0x8e2200fc  lw          $v0, 0xFC($s1)
    ctx->pc = 0x44f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x44f1e8: 0x492021  addu        $a0, $v0, $t1
    ctx->pc = 0x44f1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x44f1ec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x44f1ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f1f0: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x44f1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x44f1f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x44f1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x44f1f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x44F1F8u;
    {
        const bool branch_taken_0x44f1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F1F8u;
        // 0x44f1fc: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f1f8) {
            ctx->pc = 0x44F21Cu;
            goto label_44f21c;
        }
    }
    ctx->pc = 0x44F200u;
label_44f200:
    // 0x44f200: 0x8e250124  lw          $a1, 0x124($s1)
    ctx->pc = 0x44f200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x44f204: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x44f204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x44f208: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x44f208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f20c: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x44f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x44f210: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x44f210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x44f214: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x44f214u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x44f218: 0x708021  addu        $s0, $v1, $s0
    ctx->pc = 0x44f218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_44f21c:
    // 0x44f21c: 0x24e2fffd  addiu       $v0, $a3, -0x3
    ctx->pc = 0x44f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967293));
    // 0x44f220: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x44f220u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x44f224: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x44F224u;
    {
        const bool branch_taken_0x44f224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F224u;
        // 0x44f228: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f224) {
            ctx->pc = 0x44F23Cu;
            goto label_44f23c;
        }
    }
    ctx->pc = 0x44F22Cu;
    // 0x44f22c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x44f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x44f230: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x44f230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x44f234: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x44f234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44f238: 0x83800a  movz        $s0, $a0, $v1
    ctx->pc = 0x44f238u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_44f23c:
    // 0x44f23c: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x44f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x44f240: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x44f240u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x44f244: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x44f244u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x44f248: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x44f248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x44f24c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x44F24Cu;
    {
        const bool branch_taken_0x44f24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44F250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F24Cu;
        // 0x44f250: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f24c) {
            ctx->pc = 0x44F1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44f1b8;
        }
    }
    ctx->pc = 0x44F254u;
label_44f254:
    // 0x44f254: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x44f254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f258: 0xc113bac  jal         func_44EEB0
    ctx->pc = 0x44F258u;
    SET_GPR_U32(ctx, 31, 0x44F260u);
    ctx->pc = 0x44F25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44F258u;
    // 0x44f25c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44EEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44EEB0u, 0x44F258u, 0x44F260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F260u;
label_44f260:
    // 0x44f260: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x44f260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x44f264: 0x240602d  daddu       $t4, $s2, $zero
    ctx->pc = 0x44f264u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f268: 0x4c102b  sltu        $v0, $v0, $t4
    ctx->pc = 0x44f268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x44f26c: 0x5040ffac  beql        $v0, $zero, . + 4 + (-0x54 << 2)
    ctx->pc = 0x44F26Cu;
    {
        const bool branch_taken_0x44f26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44f26c) {
            ctx->pc = 0x44F270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44F26Cu;
            // 0x44f270: 0xc2140  sll         $a0, $t4, 5 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44F120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44f120;
        }
    }
    ctx->pc = 0x44F274u;
    // 0x44f274: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x44f274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f278: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x44f278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f27c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x44f27cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44f280:
    // 0x44f280: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x44f280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44f284: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x44f284u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x44f288: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x44f288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x44f28c: 0x2d020009  sltiu       $v0, $t0, 0x9
    ctx->pc = 0x44f28cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x44f290: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x44f290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x44f294: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x44F294u;
    {
        const bool branch_taken_0x44f294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44F298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F294u;
        // 0x44f298: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f294) {
            ctx->pc = 0x44F280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44f280;
        }
    }
    ctx->pc = 0x44F29Cu;
    // 0x44f29c: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x44F29Cu;
    {
        const bool branch_taken_0x44f29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F29Cu;
        // 0x44f2a0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f29c) {
            ctx->pc = 0x44F4D4u;
            goto label_44f4d4;
        }
    }
    ctx->pc = 0x44F2A4u;
label_44f2a4:
    // 0x44f2a4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x44f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x44f2a8: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x44f2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x44f2ac: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x44F2ACu;
    {
        const bool branch_taken_0x44f2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F2ACu;
        // 0x44f2b0: 0x30e20001  andi        $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f2ac) {
            ctx->pc = 0x44F36Cu;
            goto label_44f36c;
        }
    }
    ctx->pc = 0x44F2B4u;
    // 0x44f2b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x44F2B4u;
    {
        const bool branch_taken_0x44f2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F2B4u;
        // 0x44f2b8: 0x30e20008  andi        $v0, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f2b4) {
            ctx->pc = 0x44F2C4u;
            goto label_44f2c4;
        }
    }
    ctx->pc = 0x44F2BCu;
    // 0x44f2bc: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x44f2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x44f2c0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x44f2c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_44f2c4:
    // 0x44f2c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x44F2C4u;
    {
        const bool branch_taken_0x44f2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F2C4u;
        // 0x44f2c8: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f2c4) {
            ctx->pc = 0x44F2D8u;
            goto label_44f2d8;
        }
    }
    ctx->pc = 0x44F2CCu;
    // 0x44f2cc: 0xacd0000c  sw          $s0, 0xC($a2)
    ctx->pc = 0x44f2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 16));
    // 0x44f2d0: 0x8c62e78c  lw          $v0, -0x1874($v1)
    ctx->pc = 0x44f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961036)));
    // 0x44f2d4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x44f2d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_44f2d8:
    // 0x44f2d8: 0x30e20010  andi        $v0, $a3, 0x10
    ctx->pc = 0x44f2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x44f2dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x44F2DCu;
    {
        const bool branch_taken_0x44f2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F2DCu;
        // 0x44f2e0: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f2dc) {
            ctx->pc = 0x44F2F0u;
            goto label_44f2f0;
        }
    }
    ctx->pc = 0x44F2E4u;
    // 0x44f2e4: 0xacd00014  sw          $s0, 0x14($a2)
    ctx->pc = 0x44f2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 16));
    // 0x44f2e8: 0x8c62e790  lw          $v0, -0x1870($v1)
    ctx->pc = 0x44f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961040)));
    // 0x44f2ec: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x44f2ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_44f2f0:
    // 0x44f2f0: 0x30e20004  andi        $v0, $a3, 0x4
    ctx->pc = 0x44f2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x44f2f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x44F2F4u;
    {
        const bool branch_taken_0x44f2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F2F4u;
        // 0x44f2f8: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f2f4) {
            ctx->pc = 0x44F308u;
            goto label_44f308;
        }
    }
    ctx->pc = 0x44F2FCu;
    // 0x44f2fc: 0xacd0001c  sw          $s0, 0x1C($a2)
    ctx->pc = 0x44f2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 16));
    // 0x44f300: 0x8c62e794  lw          $v0, -0x186C($v1)
    ctx->pc = 0x44f300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961044)));
    // 0x44f304: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x44f304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_44f308:
    // 0x44f308: 0x30e20002  andi        $v0, $a3, 0x2
    ctx->pc = 0x44f308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
    // 0x44f30c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x44F30Cu;
    {
        const bool branch_taken_0x44f30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F30Cu;
        // 0x44f310: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f30c) {
            ctx->pc = 0x44F320u;
            goto label_44f320;
        }
    }
    ctx->pc = 0x44F314u;
    // 0x44f314: 0xacd00024  sw          $s0, 0x24($a2)
    ctx->pc = 0x44f314u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 16));
    // 0x44f318: 0x8c62e798  lw          $v0, -0x1868($v1)
    ctx->pc = 0x44f318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961048)));
    // 0x44f31c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x44f31cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_44f320:
    // 0x44f320: 0x30e20040  andi        $v0, $a3, 0x40
    ctx->pc = 0x44f320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
    // 0x44f324: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x44F324u;
    {
        const bool branch_taken_0x44f324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F324u;
        // 0x44f328: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f324) {
            ctx->pc = 0x44F338u;
            goto label_44f338;
        }
    }
    ctx->pc = 0x44F32Cu;
    // 0x44f32c: 0xacd0002c  sw          $s0, 0x2C($a2)
    ctx->pc = 0x44f32cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 16));
    // 0x44f330: 0x8c62e79c  lw          $v0, -0x1864($v1)
    ctx->pc = 0x44f330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961052)));
    // 0x44f334: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x44f334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_44f338:
    // 0x44f338: 0x30e20020  andi        $v0, $a3, 0x20
    ctx->pc = 0x44f338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x44f33c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x44F33Cu;
    {
        const bool branch_taken_0x44f33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F33Cu;
        // 0x44f340: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f33c) {
            ctx->pc = 0x44F350u;
            goto label_44f350;
        }
    }
    ctx->pc = 0x44F344u;
    // 0x44f344: 0xacd00034  sw          $s0, 0x34($a2)
    ctx->pc = 0x44f344u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 16));
    // 0x44f348: 0x8c62e7a0  lw          $v0, -0x1860($v1)
    ctx->pc = 0x44f348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961056)));
    // 0x44f34c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x44f34cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_44f350:
    // 0x44f350: 0x30e20080  andi        $v0, $a3, 0x80
    ctx->pc = 0x44f350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
    // 0x44f354: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x44F354u;
    {
        const bool branch_taken_0x44f354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F354u;
        // 0x44f358: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f354) {
            ctx->pc = 0x44F4C4u;
            goto label_44f4c4;
        }
    }
    ctx->pc = 0x44F35Cu;
    // 0x44f35c: 0xacd0003c  sw          $s0, 0x3C($a2)
    ctx->pc = 0x44f35cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 16));
    // 0x44f360: 0x8c62e7a4  lw          $v0, -0x185C($v1)
    ctx->pc = 0x44f360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961060)));
    // 0x44f364: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x44F364u;
    {
        const bool branch_taken_0x44f364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F364u;
        // 0x44f368: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f364) {
            ctx->pc = 0x44F4C4u;
            goto label_44f4c4;
        }
    }
    ctx->pc = 0x44F36Cu;
label_44f36c:
    // 0x44f36c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x44F36Cu;
    {
        const bool branch_taken_0x44f36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F36Cu;
        // 0x44f370: 0x8c680000  lw          $t0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f36c) {
            ctx->pc = 0x44F390u;
            goto label_44f390;
        }
    }
    ctx->pc = 0x44F374u;
    // 0x44f374: 0x2604000f  addiu       $a0, $s0, 0xF
    ctx->pc = 0x44f374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x44f378: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x44f378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x44f37c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x44f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x44f380: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x44f380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x44f384: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x44f384u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x44f388: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x44f388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x44f38c: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x44f38cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_44f390:
    // 0x44f390: 0x30e20008  andi        $v0, $a3, 0x8
    ctx->pc = 0x44f390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x44f394: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x44F394u;
    {
        const bool branch_taken_0x44f394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F394u;
        // 0x44f398: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f394) {
            ctx->pc = 0x44F3BCu;
            goto label_44f3bc;
        }
    }
    ctx->pc = 0x44F39Cu;
    // 0x44f39c: 0x2605000f  addiu       $a1, $s0, 0xF
    ctx->pc = 0x44f39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x44f3a0: 0x8c82e78c  lw          $v0, -0x1874($a0)
    ctx->pc = 0x44f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961036)));
    // 0x44f3a4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x44f3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x44f3a8: 0xacd0000c  sw          $s0, 0xC($a2)
    ctx->pc = 0x44f3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 16));
    // 0x44f3ac: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x44f3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x44f3b0: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x44f3b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x44f3b4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x44f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x44f3b8: 0x438024  and         $s0, $v0, $v1
    ctx->pc = 0x44f3b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_44f3bc:
    // 0x44f3bc: 0x30e20010  andi        $v0, $a3, 0x10
    ctx->pc = 0x44f3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x44f3c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x44F3C0u;
    {
        const bool branch_taken_0x44f3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F3C0u;
        // 0x44f3c4: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f3c0) {
            ctx->pc = 0x44F3E8u;
            goto label_44f3e8;
        }
    }
    ctx->pc = 0x44F3C8u;
    // 0x44f3c8: 0x2605000f  addiu       $a1, $s0, 0xF
    ctx->pc = 0x44f3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x44f3cc: 0x8c82e790  lw          $v0, -0x1870($a0)
    ctx->pc = 0x44f3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961040)));
    // 0x44f3d0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x44f3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x44f3d4: 0xacd00014  sw          $s0, 0x14($a2)
    ctx->pc = 0x44f3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 16));
    // 0x44f3d8: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x44f3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x44f3dc: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x44f3dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x44f3e0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x44f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x44f3e4: 0x438024  and         $s0, $v0, $v1
    ctx->pc = 0x44f3e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_44f3e8:
    // 0x44f3e8: 0x30e20004  andi        $v0, $a3, 0x4
    ctx->pc = 0x44f3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x44f3ec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x44F3ECu;
    {
        const bool branch_taken_0x44f3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F3ECu;
        // 0x44f3f0: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f3ec) {
            ctx->pc = 0x44F414u;
            goto label_44f414;
        }
    }
    ctx->pc = 0x44F3F4u;
    // 0x44f3f4: 0x2605004f  addiu       $a1, $s0, 0x4F
    ctx->pc = 0x44f3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 79));
    // 0x44f3f8: 0x8c82e794  lw          $v0, -0x186C($a0)
    ctx->pc = 0x44f3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961044)));
    // 0x44f3fc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x44f3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x44f400: 0xacd0001c  sw          $s0, 0x1C($a2)
    ctx->pc = 0x44f400u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 16));
    // 0x44f404: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x44f404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x44f408: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x44f408u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x44f40c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x44f40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x44f410: 0x438024  and         $s0, $v0, $v1
    ctx->pc = 0x44f410u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_44f414:
    // 0x44f414: 0x30e20002  andi        $v0, $a3, 0x2
    ctx->pc = 0x44f414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
    // 0x44f418: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x44F418u;
    {
        const bool branch_taken_0x44f418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F418u;
        // 0x44f41c: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f418) {
            ctx->pc = 0x44F440u;
            goto label_44f440;
        }
    }
    ctx->pc = 0x44F420u;
    // 0x44f420: 0x2605004f  addiu       $a1, $s0, 0x4F
    ctx->pc = 0x44f420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 79));
    // 0x44f424: 0x8c82e798  lw          $v0, -0x1868($a0)
    ctx->pc = 0x44f424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961048)));
    // 0x44f428: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x44f428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x44f42c: 0xacd00024  sw          $s0, 0x24($a2)
    ctx->pc = 0x44f42cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 16));
    // 0x44f430: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x44f430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x44f434: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x44f434u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x44f438: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x44f438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x44f43c: 0x438024  and         $s0, $v0, $v1
    ctx->pc = 0x44f43cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_44f440:
    // 0x44f440: 0x30e20040  andi        $v0, $a3, 0x40
    ctx->pc = 0x44f440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
    // 0x44f444: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x44F444u;
    {
        const bool branch_taken_0x44f444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F444u;
        // 0x44f448: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f444) {
            ctx->pc = 0x44F46Cu;
            goto label_44f46c;
        }
    }
    ctx->pc = 0x44F44Cu;
    // 0x44f44c: 0x2605000f  addiu       $a1, $s0, 0xF
    ctx->pc = 0x44f44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x44f450: 0x8c82e79c  lw          $v0, -0x1864($a0)
    ctx->pc = 0x44f450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961052)));
    // 0x44f454: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x44f454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x44f458: 0xacd0002c  sw          $s0, 0x2C($a2)
    ctx->pc = 0x44f458u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 16));
    // 0x44f45c: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x44f45cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x44f460: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x44f460u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x44f464: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x44f464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x44f468: 0x438024  and         $s0, $v0, $v1
    ctx->pc = 0x44f468u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_44f46c:
    // 0x44f46c: 0x30e20020  andi        $v0, $a3, 0x20
    ctx->pc = 0x44f46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x44f470: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x44F470u;
    {
        const bool branch_taken_0x44f470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F470u;
        // 0x44f474: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f470) {
            ctx->pc = 0x44F498u;
            goto label_44f498;
        }
    }
    ctx->pc = 0x44F478u;
    // 0x44f478: 0x2605000f  addiu       $a1, $s0, 0xF
    ctx->pc = 0x44f478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x44f47c: 0x8c82e7a0  lw          $v0, -0x1860($a0)
    ctx->pc = 0x44f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961056)));
    // 0x44f480: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x44f480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x44f484: 0xacd00034  sw          $s0, 0x34($a2)
    ctx->pc = 0x44f484u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 16));
    // 0x44f488: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x44f488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x44f48c: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x44f48cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x44f490: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x44f490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x44f494: 0x438024  and         $s0, $v0, $v1
    ctx->pc = 0x44f494u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_44f498:
    // 0x44f498: 0x30e20080  andi        $v0, $a3, 0x80
    ctx->pc = 0x44f498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
    // 0x44f49c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x44F49Cu;
    {
        const bool branch_taken_0x44f49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F49Cu;
        // 0x44f4a0: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f49c) {
            ctx->pc = 0x44F4C4u;
            goto label_44f4c4;
        }
    }
    ctx->pc = 0x44F4A4u;
    // 0x44f4a4: 0x2605000f  addiu       $a1, $s0, 0xF
    ctx->pc = 0x44f4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x44f4a8: 0x8c82e7a4  lw          $v0, -0x185C($a0)
    ctx->pc = 0x44f4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961060)));
    // 0x44f4ac: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x44f4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x44f4b0: 0xacd0003c  sw          $s0, 0x3C($a2)
    ctx->pc = 0x44f4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 16));
    // 0x44f4b4: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x44f4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x44f4b8: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x44f4b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x44f4bc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x44f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x44f4c0: 0x438024  and         $s0, $v0, $v1
    ctx->pc = 0x44f4c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_44f4c4:
    // 0x44f4c4: 0x30e20100  andi        $v0, $a3, 0x100
    ctx->pc = 0x44f4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
    // 0x44f4c8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x44F4C8u;
    {
        const bool branch_taken_0x44f4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44f4c8) {
            ctx->pc = 0x44F4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44F4C8u;
            // 0x44f4cc: 0xacd00044  sw          $s0, 0x44($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44F4D0u;
            goto label_44f4d0;
        }
    }
    ctx->pc = 0x44F4D0u;
label_44f4d0:
    // 0x44f4d0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x44f4d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_44f4d4:
    // 0x44f4d4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x44f4d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x44f4d8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x44f4d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44f4dc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x44f4dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44f4e0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x44f4e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f4e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44f4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44f4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x44F4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44F4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F4E8u;
        // 0x44f4ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44F4F0u;
}
