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

// Function: sub_001B2200
// Address: 0x1b2200 - 0x1b22f0
void sub_001B2200_0x1b2200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2200_0x1b2200");
#endif

    switch (ctx->pc) {
        case 0x1b2200u: goto label_1b2200;
        case 0x1b2204u: goto label_1b2204;
        case 0x1b2208u: goto label_1b2208;
        case 0x1b220cu: goto label_1b220c;
        case 0x1b2210u: goto label_1b2210;
        case 0x1b2214u: goto label_1b2214;
        case 0x1b2218u: goto label_1b2218;
        case 0x1b221cu: goto label_1b221c;
        case 0x1b2220u: goto label_1b2220;
        case 0x1b2224u: goto label_1b2224;
        case 0x1b2228u: goto label_1b2228;
        case 0x1b222cu: goto label_1b222c;
        case 0x1b2230u: goto label_1b2230;
        case 0x1b2234u: goto label_1b2234;
        case 0x1b2238u: goto label_1b2238;
        case 0x1b223cu: goto label_1b223c;
        case 0x1b2240u: goto label_1b2240;
        case 0x1b2244u: goto label_1b2244;
        case 0x1b2248u: goto label_1b2248;
        case 0x1b224cu: goto label_1b224c;
        case 0x1b2250u: goto label_1b2250;
        case 0x1b2254u: goto label_1b2254;
        case 0x1b2258u: goto label_1b2258;
        case 0x1b225cu: goto label_1b225c;
        case 0x1b2260u: goto label_1b2260;
        case 0x1b2264u: goto label_1b2264;
        case 0x1b2268u: goto label_1b2268;
        case 0x1b226cu: goto label_1b226c;
        case 0x1b2270u: goto label_1b2270;
        case 0x1b2274u: goto label_1b2274;
        case 0x1b2278u: goto label_1b2278;
        case 0x1b227cu: goto label_1b227c;
        case 0x1b2280u: goto label_1b2280;
        case 0x1b2284u: goto label_1b2284;
        case 0x1b2288u: goto label_1b2288;
        case 0x1b228cu: goto label_1b228c;
        case 0x1b2290u: goto label_1b2290;
        case 0x1b2294u: goto label_1b2294;
        case 0x1b2298u: goto label_1b2298;
        case 0x1b229cu: goto label_1b229c;
        case 0x1b22a0u: goto label_1b22a0;
        case 0x1b22a4u: goto label_1b22a4;
        case 0x1b22a8u: goto label_1b22a8;
        case 0x1b22acu: goto label_1b22ac;
        case 0x1b22b0u: goto label_1b22b0;
        case 0x1b22b4u: goto label_1b22b4;
        case 0x1b22b8u: goto label_1b22b8;
        case 0x1b22bcu: goto label_1b22bc;
        case 0x1b22c0u: goto label_1b22c0;
        case 0x1b22c4u: goto label_1b22c4;
        case 0x1b22c8u: goto label_1b22c8;
        case 0x1b22ccu: goto label_1b22cc;
        case 0x1b22d0u: goto label_1b22d0;
        case 0x1b22d4u: goto label_1b22d4;
        case 0x1b22d8u: goto label_1b22d8;
        case 0x1b22dcu: goto label_1b22dc;
        case 0x1b22e0u: goto label_1b22e0;
        case 0x1b22e4u: goto label_1b22e4;
        case 0x1b22e8u: goto label_1b22e8;
        case 0x1b22ecu: goto label_1b22ec;
        default: break;
    }

    ctx->pc = 0x1b2200u;

label_1b2200:
    // 0x1b2200: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b2200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1b2204:
    // 0x1b2204: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b2204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1b2208:
    // 0x1b2208: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b2208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b220c:
    // 0x1b220c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b220cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b2210:
    // 0x1b2210: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b2210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1b2214:
    // 0x1b2214: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b2214u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b2218:
    // 0x1b2218: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b2218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1b221c:
    // 0x1b221c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b221cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b2220:
    // 0x1b2220: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1b2220u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1b2224:
    // 0x1b2224: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1b2228:
    if (ctx->pc == 0x1B2228u) {
        ctx->pc = 0x1B2228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2224u;
        // 0x1b2228: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B222Cu;
        goto label_1b222c;
    }
    ctx->pc = 0x1B2224u;
    {
        const bool branch_taken_0x1b2224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2224u;
        // 0x1b2228: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2224) {
            ctx->pc = 0x1B2248u;
            goto label_1b2248;
        }
    }
    ctx->pc = 0x1B222Cu;
label_1b222c:
    // 0x1b222c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1b222cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1b2230:
    // 0x1b2230: 0x26430008  addiu       $v1, $s2, 0x8
    ctx->pc = 0x1b2230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_1b2234:
    // 0x1b2234: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1b2234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b2238:
    // 0x1b2238: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1b2238u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b223c:
    // 0x1b223c: 0x8cc240f8  lw          $v0, 0x40F8($a2)
    ctx->pc = 0x1b223cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16632)));
label_1b2240:
    // 0x1b2240: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_1b2244:
    if (ctx->pc == 0x1B2244u) {
        ctx->pc = 0x1B2244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2240u;
        // 0x1b2244: 0x8cc24100  lw          $v0, 0x4100($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16640)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2248u;
        goto label_1b2248;
    }
    ctx->pc = 0x1B2240u;
    {
        const bool branch_taken_0x1b2240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2240) {
            ctx->pc = 0x1B2244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2240u;
            // 0x1b2244: 0x8cc24100  lw          $v0, 0x4100($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16640)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2250u;
            goto label_1b2250;
        }
    }
    ctx->pc = 0x1B2248u;
label_1b2248:
    // 0x1b2248: 0x10000021  b           . + 4 + (0x21 << 2)
label_1b224c:
    if (ctx->pc == 0x1B224Cu) {
        ctx->pc = 0x1B224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2248u;
        // 0x1b224c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2250u;
        goto label_1b2250;
    }
    ctx->pc = 0x1B2248u;
    {
        const bool branch_taken_0x1b2248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2248u;
        // 0x1b224c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2248) {
            ctx->pc = 0x1B22D0u;
            goto label_1b22d0;
        }
    }
    ctx->pc = 0x1B2250u;
label_1b2250:
    // 0x1b2250: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_1b2254:
    if (ctx->pc == 0x1B2254u) {
        ctx->pc = 0x1B2254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2250u;
        // 0x1b2254: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2258u;
        goto label_1b2258;
    }
    ctx->pc = 0x1B2250u;
    {
        const bool branch_taken_0x1b2250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2250) {
            ctx->pc = 0x1B2254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2250u;
            // 0x1b2254: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2274u;
            goto label_1b2274;
        }
    }
    ctx->pc = 0x1B2258u;
label_1b2258:
    // 0x1b2258: 0x8cc24120  lw          $v0, 0x4120($a2)
    ctx->pc = 0x1b2258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16672)));
label_1b225c:
    // 0x1b225c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b225cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b2260:
    // 0x1b2260: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1b2260u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_1b2264:
    // 0x1b2264: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1b2264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1b2268:
    // 0x1b2268: 0x60f809  jalr        $v1
label_1b226c:
    if (ctx->pc == 0x1B226Cu) {
        ctx->pc = 0x1B226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2268u;
        // 0x1b226c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2270u;
        goto label_1b2270;
    }
    ctx->pc = 0x1B2268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B2270u);
        ctx->pc = 0x1B226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2268u;
        // 0x1b226c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2268u, 0x1B2270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B2270u;
label_1b2270:
    // 0x1b2270: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1b2270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b2274:
    // 0x1b2274: 0x8ca24120  lw          $v0, 0x4120($a1)
    ctx->pc = 0x1b2274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16672)));
label_1b2278:
    // 0x1b2278: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1b2278u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1b227c:
    // 0x1b227c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1b227cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1b2280:
    // 0x1b2280: 0x60f809  jalr        $v1
label_1b2284:
    if (ctx->pc == 0x1B2284u) {
        ctx->pc = 0x1B2284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2280u;
        // 0x1b2284: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2288u;
        goto label_1b2288;
    }
    ctx->pc = 0x1B2280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B2288u);
        ctx->pc = 0x1B2284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2280u;
        // 0x1b2284: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2280u, 0x1B2288u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B2288u;
label_1b2288:
    // 0x1b2288: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1b2288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b228c:
    // 0x1b228c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b228cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b2290:
    // 0x1b2290: 0x8cc24120  lw          $v0, 0x4120($a2)
    ctx->pc = 0x1b2290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16672)));
label_1b2294:
    // 0x1b2294: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1b2294u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1b2298:
    // 0x1b2298: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1b2298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1b229c:
    // 0x1b229c: 0x60f809  jalr        $v1
label_1b22a0:
    if (ctx->pc == 0x1B22A0u) {
        ctx->pc = 0x1B22A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B229Cu;
        // 0x1b22a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B22A4u;
        goto label_1b22a4;
    }
    ctx->pc = 0x1B229Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B22A4u);
        ctx->pc = 0x1B22A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B229Cu;
        // 0x1b22a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B229Cu, 0x1B22A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B22A4u;
label_1b22a4:
    // 0x1b22a4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b22a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b22a8:
    // 0x1b22a8: 0xc0837f6  jal         func_20DFD8
label_1b22ac:
    if (ctx->pc == 0x1B22ACu) {
        ctx->pc = 0x1B22ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B22A8u;
        // 0x1b22ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B22B0u;
        goto label_1b22b0;
    }
    ctx->pc = 0x1B22A8u;
    SET_GPR_U32(ctx, 31, 0x1B22B0u);
    ctx->pc = 0x1B22ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B22A8u;
    // 0x1b22ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DFD8u, 0x1B22A8u, 0x1B22B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B22B0u;
label_1b22b0:
    // 0x1b22b0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b22b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1b22b4:
    // 0x1b22b4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1b22b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1b22b8:
    // 0x1b22b8: 0x8c4377a0  lw          $v1, 0x77A0($v0)
    ctx->pc = 0x1b22b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30624)));
label_1b22bc:
    // 0x1b22bc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1b22c0:
    if (ctx->pc == 0x1B22C0u) {
        ctx->pc = 0x1B22C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B22BCu;
        // 0x1b22c0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B22C4u;
        goto label_1b22c4;
    }
    ctx->pc = 0x1B22BCu;
    {
        const bool branch_taken_0x1b22bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B22C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B22BCu;
        // 0x1b22c0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b22bc) {
            ctx->pc = 0x1B22D0u;
            goto label_1b22d0;
        }
    }
    ctx->pc = 0x1B22C4u;
label_1b22c4:
    // 0x1b22c4: 0xc0837fa  jal         func_20DFE8
label_1b22c8:
    if (ctx->pc == 0x1B22C8u) {
        ctx->pc = 0x1B22C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B22C4u;
        // 0x1b22c8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B22CCu;
        goto label_1b22cc;
    }
    ctx->pc = 0x1B22C4u;
    SET_GPR_U32(ctx, 31, 0x1B22CCu);
    ctx->pc = 0x1B22C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B22C4u;
    // 0x1b22c8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DFE8u, 0x1B22C4u, 0x1B22CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B22CCu;
label_1b22cc:
    // 0x1b22cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b22ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b22d0:
    // 0x1b22d0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b22d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b22d4:
    // 0x1b22d4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b22d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b22d8:
    // 0x1b22d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b22d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b22dc:
    // 0x1b22dc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1b22dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b22e0:
    // 0x1b22e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b22e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b22e4:
    // 0x1b22e4: 0x3e00008  jr          $ra
label_1b22e8:
    if (ctx->pc == 0x1B22E8u) {
        ctx->pc = 0x1B22E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B22E4u;
        // 0x1b22e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B22ECu;
        goto label_1b22ec;
    }
    ctx->pc = 0x1B22E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B22E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B22E4u;
        // 0x1b22e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B22E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B22ECu;
label_1b22ec:
    // 0x1b22ec: 0x0  nop
    ctx->pc = 0x1b22ecu;
    // NOP
    ctx->pc = 0x1b22f0u;
}
