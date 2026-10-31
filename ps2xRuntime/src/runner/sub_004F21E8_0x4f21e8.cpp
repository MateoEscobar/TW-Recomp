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

// Function: sub_004F21E8
// Address: 0x4f21e8 - 0x4f22e8
void sub_004F21E8_0x4f21e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F21E8_0x4f21e8");
#endif

    switch (ctx->pc) {
        case 0x4f21e8u: goto label_4f21e8;
        case 0x4f21ecu: goto label_4f21ec;
        case 0x4f21f0u: goto label_4f21f0;
        case 0x4f21f4u: goto label_4f21f4;
        case 0x4f21f8u: goto label_4f21f8;
        case 0x4f21fcu: goto label_4f21fc;
        case 0x4f2200u: goto label_4f2200;
        case 0x4f2204u: goto label_4f2204;
        case 0x4f2208u: goto label_4f2208;
        case 0x4f220cu: goto label_4f220c;
        case 0x4f2210u: goto label_4f2210;
        case 0x4f2214u: goto label_4f2214;
        case 0x4f2218u: goto label_4f2218;
        case 0x4f221cu: goto label_4f221c;
        case 0x4f2220u: goto label_4f2220;
        case 0x4f2224u: goto label_4f2224;
        case 0x4f2228u: goto label_4f2228;
        case 0x4f222cu: goto label_4f222c;
        case 0x4f2230u: goto label_4f2230;
        case 0x4f2234u: goto label_4f2234;
        case 0x4f2238u: goto label_4f2238;
        case 0x4f223cu: goto label_4f223c;
        case 0x4f2240u: goto label_4f2240;
        case 0x4f2244u: goto label_4f2244;
        case 0x4f2248u: goto label_4f2248;
        case 0x4f224cu: goto label_4f224c;
        case 0x4f2250u: goto label_4f2250;
        case 0x4f2254u: goto label_4f2254;
        case 0x4f2258u: goto label_4f2258;
        case 0x4f225cu: goto label_4f225c;
        case 0x4f2260u: goto label_4f2260;
        case 0x4f2264u: goto label_4f2264;
        case 0x4f2268u: goto label_4f2268;
        case 0x4f226cu: goto label_4f226c;
        case 0x4f2270u: goto label_4f2270;
        case 0x4f2274u: goto label_4f2274;
        case 0x4f2278u: goto label_4f2278;
        case 0x4f227cu: goto label_4f227c;
        case 0x4f2280u: goto label_4f2280;
        case 0x4f2284u: goto label_4f2284;
        case 0x4f2288u: goto label_4f2288;
        case 0x4f228cu: goto label_4f228c;
        case 0x4f2290u: goto label_4f2290;
        case 0x4f2294u: goto label_4f2294;
        case 0x4f2298u: goto label_4f2298;
        case 0x4f229cu: goto label_4f229c;
        case 0x4f22a0u: goto label_4f22a0;
        case 0x4f22a4u: goto label_4f22a4;
        case 0x4f22a8u: goto label_4f22a8;
        case 0x4f22acu: goto label_4f22ac;
        case 0x4f22b0u: goto label_4f22b0;
        case 0x4f22b4u: goto label_4f22b4;
        case 0x4f22b8u: goto label_4f22b8;
        case 0x4f22bcu: goto label_4f22bc;
        case 0x4f22c0u: goto label_4f22c0;
        case 0x4f22c4u: goto label_4f22c4;
        case 0x4f22c8u: goto label_4f22c8;
        case 0x4f22ccu: goto label_4f22cc;
        case 0x4f22d0u: goto label_4f22d0;
        case 0x4f22d4u: goto label_4f22d4;
        case 0x4f22d8u: goto label_4f22d8;
        case 0x4f22dcu: goto label_4f22dc;
        case 0x4f22e0u: goto label_4f22e0;
        case 0x4f22e4u: goto label_4f22e4;
        default: break;
    }

    ctx->pc = 0x4f21e8u;

label_4f21e8:
    // 0x4f21e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4f21e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4f21ec:
    // 0x4f21ec: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x4f21ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_4f21f0:
    // 0x4f21f0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x4f21f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_4f21f4:
    // 0x4f21f4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x4f21f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f21f8:
    // 0x4f21f8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x4f21f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_4f21fc:
    // 0x4f21fc: 0x26c50004  addiu       $a1, $s6, 0x4
    ctx->pc = 0x4f21fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_4f2200:
    // 0x4f2200: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4f2200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_4f2204:
    // 0x4f2204: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4f2204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4f2208:
    // 0x4f2208: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x4f2208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_4f220c:
    // 0x4f220c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x4f220cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_4f2210:
    // 0x4f2210: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f2210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f2214:
    // 0x4f2214: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4f2214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4f2218:
    // 0x4f2218: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4f2218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4f221c:
    // 0x4f221c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4f221cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4f2220:
    // 0x4f2220: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4f2220u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4f2224:
    // 0x4f2224: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_4f2228:
    if (ctx->pc == 0x4F2228u) {
        ctx->pc = 0x4F2228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2224u;
        // 0x4f2228: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F222Cu;
        goto label_4f222c;
    }
    ctx->pc = 0x4F2224u;
    {
        const bool branch_taken_0x4f2224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2224u;
        // 0x4f2228: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2224) {
            ctx->pc = 0x4F22B8u;
            goto label_4f22b8;
        }
    }
    ctx->pc = 0x4F222Cu;
label_4f222c:
    // 0x4f222c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4f222cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f2230:
    // 0x4f2230: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4f2230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4f2234:
    // 0x4f2234: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4f2234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4f2238:
    // 0x4f2238: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x4f2238u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4f223c:
    // 0x4f223c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f223cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4f2240:
    // 0x4f2240: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4f2240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f2244:
    // 0x4f2244: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
label_4f2248:
    if (ctx->pc == 0x4F2248u) {
        ctx->pc = 0x4F2248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2244u;
        // 0x4f2248: 0x24920001  addiu       $s2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F224Cu;
        goto label_4f224c;
    }
    ctx->pc = 0x4F2244u;
    {
        const bool branch_taken_0x4f2244 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2244u;
        // 0x4f2248: 0x24920001  addiu       $s2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2244) {
            ctx->pc = 0x4F228Cu;
            goto label_4f228c;
        }
    }
    ctx->pc = 0x4F224Cu;
label_4f224c:
    // 0x4f224c: 0x3c15006f  lui         $s5, 0x6F
    ctx->pc = 0x4f224cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)111 << 16));
label_4f2250:
    // 0x4f2250: 0x3c130058  lui         $s3, 0x58
    ctx->pc = 0x4f2250u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
label_4f2254:
    // 0x4f2254: 0x0  nop
    ctx->pc = 0x4f2254u;
    // NOP
label_4f2258:
    // 0x4f2258: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_4f225c:
    if (ctx->pc == 0x4F225Cu) {
        ctx->pc = 0x4F225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2258u;
        // 0x4f225c: 0x8cb00000  lw          $s0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2260u;
        goto label_4f2260;
    }
    ctx->pc = 0x4F2258u;
    {
        const bool branch_taken_0x4f2258 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2258u;
        // 0x4f225c: 0x8cb00000  lw          $s0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2258) {
            ctx->pc = 0x4F2280u;
            goto label_4f2280;
        }
    }
    ctx->pc = 0x4F2260u;
label_4f2260:
    // 0x4f2260: 0x8ea8b9c0  lw          $t0, -0x4640($s5)
    ctx->pc = 0x4f2260u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949312)));
label_4f2264:
    // 0x4f2264: 0x2666df58  addiu       $a2, $s3, -0x20A8
    ctx->pc = 0x4f2264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958936));
label_4f2268:
    // 0x4f2268: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4f2268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4f226c:
    // 0x4f226c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f226cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f2270:
    // 0x4f2270: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f2270u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f2274:
    // 0x4f2274: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f2274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f2278:
    // 0x4f2278: 0x60f809  jalr        $v1
label_4f227c:
    if (ctx->pc == 0x4F227Cu) {
        ctx->pc = 0x4F227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2278u;
        // 0x4f227c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2280u;
        goto label_4f2280;
    }
    ctx->pc = 0x4F2278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F2280u);
        ctx->pc = 0x4F227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2278u;
        // 0x4f227c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2278u, 0x4F2280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F2280u;
label_4f2280:
    // 0x4f2280: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f2280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f2284:
    // 0x4f2284: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
label_4f2288:
    if (ctx->pc == 0x4F2288u) {
        ctx->pc = 0x4F228Cu;
        goto label_4f228c;
    }
    ctx->pc = 0x4F2284u;
    {
        const bool branch_taken_0x4f2284 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f2284) {
            ctx->pc = 0x4F2258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f2258;
        }
    }
    ctx->pc = 0x4F228Cu;
label_4f228c:
    // 0x4f228c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4f228cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4f2290:
    // 0x4f2290: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f2290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f2294:
    // 0x4f2294: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x4f2294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_4f2298:
    // 0x4f2298: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4f2298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4f229c:
    // 0x4f229c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4f229cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4f22a0:
    // 0x4f22a0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4f22a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4f22a4:
    // 0x4f22a4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4f22a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4f22a8:
    // 0x4f22a8: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x4f22a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_4f22ac:
    // 0x4f22ac: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x4f22acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4f22b0:
    // 0x4f22b0: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
label_4f22b4:
    if (ctx->pc == 0x4F22B4u) {
        ctx->pc = 0x4F22B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F22B0u;
        // 0x4f22b4: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F22B8u;
        goto label_4f22b8;
    }
    ctx->pc = 0x4F22B0u;
    {
        const bool branch_taken_0x4f22b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F22B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F22B0u;
        // 0x4f22b4: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f22b0) {
            ctx->pc = 0x4F2238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f2238;
        }
    }
    ctx->pc = 0x4F22B8u;
label_4f22b8:
    // 0x4f22b8: 0xaec00014  sw          $zero, 0x14($s6)
    ctx->pc = 0x4f22b8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 20), GPR_U32(ctx, 0));
label_4f22bc:
    // 0x4f22bc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4f22bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4f22c0:
    // 0x4f22c0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4f22c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4f22c4:
    // 0x4f22c4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4f22c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4f22c8:
    // 0x4f22c8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4f22c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f22cc:
    // 0x4f22cc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x4f22ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f22d0:
    // 0x4f22d0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x4f22d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f22d4:
    // 0x4f22d4: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x4f22d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f22d8:
    // 0x4f22d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f22d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f22dc:
    // 0x4f22dc: 0x3e00008  jr          $ra
label_4f22e0:
    if (ctx->pc == 0x4F22E0u) {
        ctx->pc = 0x4F22E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F22DCu;
        // 0x4f22e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F22E4u;
        goto label_4f22e4;
    }
    ctx->pc = 0x4F22DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F22E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F22DCu;
        // 0x4f22e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F22DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F22E4u;
label_4f22e4:
    // 0x4f22e4: 0x0  nop
    ctx->pc = 0x4f22e4u;
    // NOP
    ctx->pc = 0x4f22e8u;
}
