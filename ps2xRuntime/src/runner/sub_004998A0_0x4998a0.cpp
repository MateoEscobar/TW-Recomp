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

// Function: sub_004998A0
// Address: 0x4998a0 - 0x499a88
void sub_004998A0_0x4998a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004998A0_0x4998a0");
#endif

    ctx->pc = 0x4998a0u;

    // 0x4998a0: 0x3c0b0071  lui         $t3, 0x71
    ctx->pc = 0x4998a0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)113 << 16));
    // 0x4998a4: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x4998a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4998a8: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x4998a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4998ac: 0x256a04f0  addiu       $t2, $t3, 0x4F0
    ctx->pc = 0x4998acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 1264));
    // 0x4998b0: 0x8d6304f0  lw          $v1, 0x4F0($t3)
    ctx->pc = 0x4998b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7104F0u));
    // 0x4998b4: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x4998b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x4998b8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x4998b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4998bc: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x4998BCu;
    {
        const bool branch_taken_0x4998bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4998C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4998BCu;
        // 0x4998c0: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4998bc) {
            ctx->pc = 0x499A78u;
            goto label_499a78;
        }
    }
    ctx->pc = 0x4998C4u;
    // 0x4998c4: 0x8ca90004  lw          $t1, 0x4($a1)
    ctx->pc = 0x4998c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4998c8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x4998c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4998cc: 0x8d440004  lw          $a0, 0x4($t2)
    ctx->pc = 0x4998ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x4998d0: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x4998d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4998d4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x4998d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4998d8: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x4998D8u;
    {
        const bool branch_taken_0x4998d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4998DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4998D8u;
        // 0x4998dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4998d8) {
            ctx->pc = 0x499A7Cu;
            goto label_499a7c;
        }
    }
    ctx->pc = 0x4998E0u;
    // 0x4998e0: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x4998e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x4998e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4998e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4998e8: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x4998e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4998ec: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x4998ECu;
    {
        const bool branch_taken_0x4998ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4998F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4998ECu;
        // 0x4998f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4998ec) {
            ctx->pc = 0x499A7Cu;
            goto label_499a7c;
        }
    }
    ctx->pc = 0x4998F4u;
    // 0x4998f4: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x4998f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x4998f8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4998f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4998fc: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x4998fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x499900: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x499900u;
    {
        const bool branch_taken_0x499900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x499904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499900u;
        // 0x499904: 0x103102a  slt         $v0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x499900) {
            ctx->pc = 0x499A78u;
            goto label_499a78;
        }
    }
    ctx->pc = 0x499908u;
    // 0x499908: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x499908u;
    {
        const bool branch_taken_0x499908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499908u;
        // 0x49990c: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499908) {
            ctx->pc = 0x499950u;
            goto label_499950;
        }
    }
    ctx->pc = 0x499910u;
    // 0x499910: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x499910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x499914: 0xc32023  subu        $a0, $a2, $v1
    ctx->pc = 0x499914u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x499918: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x499918u;
    {
        const bool branch_taken_0x499918 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x499918) {
            ctx->pc = 0x49991Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x499918u;
            // 0x49991c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x499920u;
            goto label_499920;
        }
    }
    ctx->pc = 0x499920u;
label_499920:
    // 0x499920: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x499920u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x499924: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x499924u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x499928: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x499928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x49992c: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x49992cu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x499930: 0x1812  mflo        $v1
    ctx->pc = 0x499930u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x499934: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x499934u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x499938: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x499938u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x49993c: 0x8d6404f0  lw          $a0, 0x4F0($t3)
    ctx->pc = 0x49993cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1264)));
    // 0x499940: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x499940u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x499944: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x499944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x499948: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x499948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49994c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x49994cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_499950:
    // 0x499950: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x499950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x499954: 0x8d6404f0  lw          $a0, 0x4F0($t3)
    ctx->pc = 0x499954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1264)));
    // 0x499958: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x499958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x49995c: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x49995cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x499960: 0x464021  addu        $t0, $v0, $a2
    ctx->pc = 0x499960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x499964: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x499964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x499968: 0x88102a  slt         $v0, $a0, $t0
    ctx->pc = 0x499968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x49996c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x49996Cu;
    {
        const bool branch_taken_0x49996c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x499970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49996Cu;
        // 0x499970: 0x1041023  subu        $v0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49996c) {
            ctx->pc = 0x4999A0u;
            goto label_4999a0;
        }
    }
    ctx->pc = 0x499974u;
    // 0x499974: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x499974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x499978: 0xc22023  subu        $a0, $a2, $v0
    ctx->pc = 0x499978u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x49997c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x49997Cu;
    {
        const bool branch_taken_0x49997c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x49997c) {
            ctx->pc = 0x499980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49997Cu;
            // 0x499980: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x499984u;
            goto label_499984;
        }
    }
    ctx->pc = 0x499984u;
label_499984:
    // 0x499984: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x499984u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x499988: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x499988u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x49998c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x49998cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x499990: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x499990u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x499994: 0x1012  mflo        $v0
    ctx->pc = 0x499994u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x499998: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x499998u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x49999c: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x49999cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_4999a0:
    // 0x4999a0: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x4999a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4999a4: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x4999a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x4999a8: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x4999a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4999ac: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4999ACu;
    {
        const bool branch_taken_0x4999ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4999B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4999ACu;
        // 0x4999b0: 0x661023  subu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4999ac) {
            ctx->pc = 0x4999F8u;
            goto label_4999f8;
        }
    }
    ctx->pc = 0x4999B4u;
    // 0x4999b4: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x4999b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4999b8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x4999b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4999bc: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4999bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4999c0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4999C0u;
    {
        const bool branch_taken_0x4999c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4999c0) {
            ctx->pc = 0x4999C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4999C0u;
            // 0x4999c4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4999C8u;
            goto label_4999c8;
        }
    }
    ctx->pc = 0x4999C8u;
label_4999c8:
    // 0x4999c8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x4999c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4999cc: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x4999ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x4999d0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x4999d0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x4999d4: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x4999d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4999d8: 0x2012  mflo        $a0
    ctx->pc = 0x4999d8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x4999dc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4999dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4999e0: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x4999e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
    // 0x4999e4: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x4999e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x4999e8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x4999e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x4999ec: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x4999ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4999f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4999f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4999f4: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x4999f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_4999f8:
    // 0x4999f8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4999f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4999fc: 0x8d44000c  lw          $a0, 0xC($t2)
    ctx->pc = 0x4999fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x499a00: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x499a00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x499a04: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x499a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x499a08: 0x464021  addu        $t0, $v0, $a2
    ctx->pc = 0x499a08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x499a0c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x499a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x499a10: 0x88102a  slt         $v0, $a0, $t0
    ctx->pc = 0x499a10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x499a14: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x499A14u;
    {
        const bool branch_taken_0x499a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x499A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499A14u;
        // 0x499a18: 0x1041023  subu        $v0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499a14) {
            ctx->pc = 0x499A48u;
            goto label_499a48;
        }
    }
    ctx->pc = 0x499A1Cu;
    // 0x499a1c: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x499a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x499a20: 0xc22023  subu        $a0, $a2, $v0
    ctx->pc = 0x499a20u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x499a24: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x499A24u;
    {
        const bool branch_taken_0x499a24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x499a24) {
            ctx->pc = 0x499A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x499A24u;
            // 0x499a28: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x499A2Cu;
            goto label_499a2c;
        }
    }
    ctx->pc = 0x499A2Cu;
label_499a2c:
    // 0x499a2c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x499a2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x499a30: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x499a30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x499a34: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x499a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x499a38: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x499a38u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x499a3c: 0x1012  mflo        $v0
    ctx->pc = 0x499a3cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x499a40: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x499a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x499a44: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x499a44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
label_499a48:
    // 0x499a48: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x499a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x499a4c: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x499A4Cu;
    {
        const bool branch_taken_0x499a4c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x499A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499A4Cu;
        // 0x499a50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499a4c) {
            ctx->pc = 0x499A7Cu;
            goto label_499a7c;
        }
    }
    ctx->pc = 0x499A54u;
    // 0x499a54: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x499a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x499a58: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x499A58u;
    {
        const bool branch_taken_0x499a58 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x499A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499A58u;
        // 0x499a5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499a58) {
            ctx->pc = 0x499A7Cu;
            goto label_499a7c;
        }
    }
    ctx->pc = 0x499A60u;
    // 0x499a60: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x499a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x499a64: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x499A64u;
    {
        const bool branch_taken_0x499a64 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x499A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499A64u;
        // 0x499a68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499a64) {
            ctx->pc = 0x499A7Cu;
            goto label_499a7c;
        }
    }
    ctx->pc = 0x499A6Cu;
    // 0x499a6c: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x499a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x499a70: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x499A70u;
    {
        const bool branch_taken_0x499a70 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x499A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499A70u;
        // 0x499a74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499a70) {
            ctx->pc = 0x499A7Cu;
            goto label_499a7c;
        }
    }
    ctx->pc = 0x499A78u;
label_499a78:
    // 0x499a78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x499a78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_499a7c:
    // 0x499a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x499A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x499A84u;
    // 0x499a84: 0x0  nop
    ctx->pc = 0x499a84u;
    // NOP
    ctx->pc = 0x499a88u;
}
