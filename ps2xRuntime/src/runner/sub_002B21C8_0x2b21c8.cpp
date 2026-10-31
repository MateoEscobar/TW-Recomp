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

// Function: sub_002B21C8
// Address: 0x2b21c8 - 0x2b22b8
void sub_002B21C8_0x2b21c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B21C8_0x2b21c8");
#endif

    switch (ctx->pc) {
        case 0x2b21c8u: goto label_2b21c8;
        case 0x2b21ccu: goto label_2b21cc;
        case 0x2b21d0u: goto label_2b21d0;
        case 0x2b21d4u: goto label_2b21d4;
        case 0x2b21d8u: goto label_2b21d8;
        case 0x2b21dcu: goto label_2b21dc;
        case 0x2b21e0u: goto label_2b21e0;
        case 0x2b21e4u: goto label_2b21e4;
        case 0x2b21e8u: goto label_2b21e8;
        case 0x2b21ecu: goto label_2b21ec;
        case 0x2b21f0u: goto label_2b21f0;
        case 0x2b21f4u: goto label_2b21f4;
        case 0x2b21f8u: goto label_2b21f8;
        case 0x2b21fcu: goto label_2b21fc;
        case 0x2b2200u: goto label_2b2200;
        case 0x2b2204u: goto label_2b2204;
        case 0x2b2208u: goto label_2b2208;
        case 0x2b220cu: goto label_2b220c;
        case 0x2b2210u: goto label_2b2210;
        case 0x2b2214u: goto label_2b2214;
        case 0x2b2218u: goto label_2b2218;
        case 0x2b221cu: goto label_2b221c;
        case 0x2b2220u: goto label_2b2220;
        case 0x2b2224u: goto label_2b2224;
        case 0x2b2228u: goto label_2b2228;
        case 0x2b222cu: goto label_2b222c;
        case 0x2b2230u: goto label_2b2230;
        case 0x2b2234u: goto label_2b2234;
        case 0x2b2238u: goto label_2b2238;
        case 0x2b223cu: goto label_2b223c;
        case 0x2b2240u: goto label_2b2240;
        case 0x2b2244u: goto label_2b2244;
        case 0x2b2248u: goto label_2b2248;
        case 0x2b224cu: goto label_2b224c;
        case 0x2b2250u: goto label_2b2250;
        case 0x2b2254u: goto label_2b2254;
        case 0x2b2258u: goto label_2b2258;
        case 0x2b225cu: goto label_2b225c;
        case 0x2b2260u: goto label_2b2260;
        case 0x2b2264u: goto label_2b2264;
        case 0x2b2268u: goto label_2b2268;
        case 0x2b226cu: goto label_2b226c;
        case 0x2b2270u: goto label_2b2270;
        case 0x2b2274u: goto label_2b2274;
        case 0x2b2278u: goto label_2b2278;
        case 0x2b227cu: goto label_2b227c;
        case 0x2b2280u: goto label_2b2280;
        case 0x2b2284u: goto label_2b2284;
        case 0x2b2288u: goto label_2b2288;
        case 0x2b228cu: goto label_2b228c;
        case 0x2b2290u: goto label_2b2290;
        case 0x2b2294u: goto label_2b2294;
        case 0x2b2298u: goto label_2b2298;
        case 0x2b229cu: goto label_2b229c;
        case 0x2b22a0u: goto label_2b22a0;
        case 0x2b22a4u: goto label_2b22a4;
        case 0x2b22a8u: goto label_2b22a8;
        case 0x2b22acu: goto label_2b22ac;
        case 0x2b22b0u: goto label_2b22b0;
        case 0x2b22b4u: goto label_2b22b4;
        default: break;
    }

    ctx->pc = 0x2b21c8u;

label_2b21c8:
    // 0x2b21c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b21c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2b21cc:
    // 0x2b21cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b21ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2b21d0:
    // 0x2b21d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b21d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2b21d4:
    // 0x2b21d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b21d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b21d8:
    // 0x2b21d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2b21d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2b21dc:
    // 0x2b21dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b21dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b21e0:
    // 0x2b21e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b21e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b21e4:
    // 0x2b21e4: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2b21e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b21e8:
    // 0x2b21e8: 0xc460012c  lwc1        $f0, 0x12C($v1)
    ctx->pc = 0x2b21e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b21ec:
    // 0x2b21ec: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x2b21ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_2b21f0:
    // 0x2b21f0: 0x90620265  lbu         $v0, 0x265($v1)
    ctx->pc = 0x2b21f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 613)));
label_2b21f4:
    // 0x2b21f4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2b21f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b21f8:
    // 0x2b21f8: 0xa2020024  sb          $v0, 0x24($s0)
    ctx->pc = 0x2b21f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 2));
label_2b21fc:
    // 0x2b21fc: 0xe461012c  swc1        $f1, 0x12C($v1)
    ctx->pc = 0x2b21fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
label_2b2200:
    // 0x2b2200: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b2200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b2204:
    // 0x2b2204: 0xa0400265  sb          $zero, 0x265($v0)
    ctx->pc = 0x2b2204u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 0));
label_2b2208:
    // 0x2b2208: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b2208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b220c:
    // 0x2b220c: 0x8c64020c  lw          $a0, 0x20C($v1)
    ctx->pc = 0x2b220cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
label_2b2210:
    // 0x2b2210: 0xc05959e  jal         func_165678
label_2b2214:
    if (ctx->pc == 0x2B2214u) {
        ctx->pc = 0x2B2214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2210u;
        // 0x2b2214: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2218u;
        goto label_2b2218;
    }
    ctx->pc = 0x2B2210u;
    SET_GPR_U32(ctx, 31, 0x2B2218u);
    ctx->pc = 0x2B2214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2210u;
    // 0x2b2214: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2B2210u, 0x2B2218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2218u;
label_2b2218:
    // 0x2b2218: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b2218u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b221c:
    // 0x2b221c: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
label_2b2220:
    if (ctx->pc == 0x2B2220u) {
        ctx->pc = 0x2B2224u;
        goto label_2b2224;
    }
    ctx->pc = 0x2B221Cu;
    {
        const bool branch_taken_0x2b221c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b221c) {
            ctx->pc = 0x2B2280u;
            goto label_2b2280;
        }
    }
    ctx->pc = 0x2B2224u;
label_2b2224:
    // 0x2b2224: 0xc0a3678  jal         func_28D9E0
label_2b2228:
    if (ctx->pc == 0x2B2228u) {
        ctx->pc = 0x2B2228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2224u;
        // 0x2b2228: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B222Cu;
        goto label_2b222c;
    }
    ctx->pc = 0x2B2224u;
    SET_GPR_U32(ctx, 31, 0x2B222Cu);
    ctx->pc = 0x2B2228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2224u;
    // 0x2b2228: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9E0u, 0x2B2224u, 0x2B222Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B222Cu;
label_2b222c:
    // 0x2b222c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2b2230:
    if (ctx->pc == 0x2B2230u) {
        ctx->pc = 0x2B2234u;
        goto label_2b2234;
    }
    ctx->pc = 0x2B222Cu;
    {
        const bool branch_taken_0x2b222c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b222c) {
            ctx->pc = 0x2B2280u;
            goto label_2b2280;
        }
    }
    ctx->pc = 0x2B2234u;
label_2b2234:
    // 0x2b2234: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b2234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b2238:
    // 0x2b2238: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2b2238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2b223c:
    // 0x2b223c: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x2b223cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2b2240:
    // 0x2b2240: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
label_2b2244:
    if (ctx->pc == 0x2B2244u) {
        ctx->pc = 0x2B2248u;
        goto label_2b2248;
    }
    ctx->pc = 0x2B2240u;
    {
        const bool branch_taken_0x2b2240 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2240) {
            ctx->pc = 0x2B2280u;
            goto label_2b2280;
        }
    }
    ctx->pc = 0x2B2248u;
label_2b2248:
    // 0x2b2248: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x2b2248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_2b224c:
    // 0x2b224c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2b224cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2b2250:
    // 0x2b2250: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2b2250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2b2254:
    // 0x2b2254: 0x40f809  jalr        $v0
label_2b2258:
    if (ctx->pc == 0x2B2258u) {
        ctx->pc = 0x2B2258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2254u;
        // 0x2b2258: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B225Cu;
        goto label_2b225c;
    }
    ctx->pc = 0x2B2254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B225Cu);
        ctx->pc = 0x2B2258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2254u;
        // 0x2b2258: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2254u, 0x2B225Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B225Cu;
label_2b225c:
    // 0x2b225c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2b225cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b2260:
    // 0x2b2260: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_2b2264:
    if (ctx->pc == 0x2B2264u) {
        ctx->pc = 0x2B2268u;
        goto label_2b2268;
    }
    ctx->pc = 0x2B2260u;
    {
        const bool branch_taken_0x2b2260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b2260) {
            ctx->pc = 0x2B2280u;
            goto label_2b2280;
        }
    }
    ctx->pc = 0x2B2268u;
label_2b2268:
    // 0x2b2268: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b2268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b226c:
    // 0x2b226c: 0xc08750a  jal         func_21D428
label_2b2270:
    if (ctx->pc == 0x2B2270u) {
        ctx->pc = 0x2B2270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B226Cu;
        // 0x2b2270: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2274u;
        goto label_2b2274;
    }
    ctx->pc = 0x2B226Cu;
    SET_GPR_U32(ctx, 31, 0x2B2274u);
    ctx->pc = 0x2B2270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B226Cu;
    // 0x2b2270: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x2B226Cu, 0x2B2274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2274u;
label_2b2274:
    // 0x2b2274: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b2274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b2278:
    // 0x2b2278: 0xc0a57ca  jal         func_295F28
label_2b227c:
    if (ctx->pc == 0x2B227Cu) {
        ctx->pc = 0x2B227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2278u;
        // 0x2b227c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2280u;
        goto label_2b2280;
    }
    ctx->pc = 0x2B2278u;
    SET_GPR_U32(ctx, 31, 0x2B2280u);
    ctx->pc = 0x2B227Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2278u;
    // 0x2b227c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x2B2278u, 0x2B2280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2280u;
label_2b2280:
    // 0x2b2280: 0xc08bfbc  jal         func_22FEF0
label_2b2284:
    if (ctx->pc == 0x2B2284u) {
        ctx->pc = 0x2B2284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2280u;
        // 0x2b2284: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2288u;
        goto label_2b2288;
    }
    ctx->pc = 0x2B2280u;
    SET_GPR_U32(ctx, 31, 0x2B2288u);
    ctx->pc = 0x2B2284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2280u;
    // 0x2b2284: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2B2280u, 0x2B2288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2288u;
label_2b2288:
    // 0x2b2288: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2b2288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2b228c:
    // 0x2b228c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x2b228cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2b2290:
    // 0x2b2290: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x2b2290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2b2294:
    // 0x2b2294: 0x60f809  jalr        $v1
label_2b2298:
    if (ctx->pc == 0x2B2298u) {
        ctx->pc = 0x2B2298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2294u;
        // 0x2b2298: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B229Cu;
        goto label_2b229c;
    }
    ctx->pc = 0x2B2294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B229Cu);
        ctx->pc = 0x2B2298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2294u;
        // 0x2b2298: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2294u, 0x2B229Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B229Cu;
label_2b229c:
    // 0x2b229c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b229cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b22a0:
    // 0x2b22a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b22a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b22a4:
    // 0x2b22a4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2b22a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b22a8:
    // 0x2b22a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b22a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b22ac:
    // 0x2b22ac: 0x3e00008  jr          $ra
label_2b22b0:
    if (ctx->pc == 0x2B22B0u) {
        ctx->pc = 0x2B22B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B22ACu;
        // 0x2b22b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B22B4u;
        goto label_2b22b4;
    }
    ctx->pc = 0x2B22ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B22B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B22ACu;
        // 0x2b22b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B22ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B22B4u;
label_2b22b4:
    // 0x2b22b4: 0x0  nop
    ctx->pc = 0x2b22b4u;
    // NOP
    ctx->pc = 0x2b22b8u;
}
