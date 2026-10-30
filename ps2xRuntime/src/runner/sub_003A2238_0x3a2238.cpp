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

// Function: sub_003A2238
// Address: 0x3a2238 - 0x3a2310
void sub_003A2238_0x3a2238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2238_0x3a2238");
#endif

    switch (ctx->pc) {
        case 0x3a2238u: goto label_3a2238;
        case 0x3a223cu: goto label_3a223c;
        case 0x3a2240u: goto label_3a2240;
        case 0x3a2244u: goto label_3a2244;
        case 0x3a2248u: goto label_3a2248;
        case 0x3a224cu: goto label_3a224c;
        case 0x3a2250u: goto label_3a2250;
        case 0x3a2254u: goto label_3a2254;
        case 0x3a2258u: goto label_3a2258;
        case 0x3a225cu: goto label_3a225c;
        case 0x3a2260u: goto label_3a2260;
        case 0x3a2264u: goto label_3a2264;
        case 0x3a2268u: goto label_3a2268;
        case 0x3a226cu: goto label_3a226c;
        case 0x3a2270u: goto label_3a2270;
        case 0x3a2274u: goto label_3a2274;
        case 0x3a2278u: goto label_3a2278;
        case 0x3a227cu: goto label_3a227c;
        case 0x3a2280u: goto label_3a2280;
        case 0x3a2284u: goto label_3a2284;
        case 0x3a2288u: goto label_3a2288;
        case 0x3a228cu: goto label_3a228c;
        case 0x3a2290u: goto label_3a2290;
        case 0x3a2294u: goto label_3a2294;
        case 0x3a2298u: goto label_3a2298;
        case 0x3a229cu: goto label_3a229c;
        case 0x3a22a0u: goto label_3a22a0;
        case 0x3a22a4u: goto label_3a22a4;
        case 0x3a22a8u: goto label_3a22a8;
        case 0x3a22acu: goto label_3a22ac;
        case 0x3a22b0u: goto label_3a22b0;
        case 0x3a22b4u: goto label_3a22b4;
        case 0x3a22b8u: goto label_3a22b8;
        case 0x3a22bcu: goto label_3a22bc;
        case 0x3a22c0u: goto label_3a22c0;
        case 0x3a22c4u: goto label_3a22c4;
        case 0x3a22c8u: goto label_3a22c8;
        case 0x3a22ccu: goto label_3a22cc;
        case 0x3a22d0u: goto label_3a22d0;
        case 0x3a22d4u: goto label_3a22d4;
        case 0x3a22d8u: goto label_3a22d8;
        case 0x3a22dcu: goto label_3a22dc;
        case 0x3a22e0u: goto label_3a22e0;
        case 0x3a22e4u: goto label_3a22e4;
        case 0x3a22e8u: goto label_3a22e8;
        case 0x3a22ecu: goto label_3a22ec;
        case 0x3a22f0u: goto label_3a22f0;
        case 0x3a22f4u: goto label_3a22f4;
        case 0x3a22f8u: goto label_3a22f8;
        case 0x3a22fcu: goto label_3a22fc;
        case 0x3a2300u: goto label_3a2300;
        case 0x3a2304u: goto label_3a2304;
        case 0x3a2308u: goto label_3a2308;
        case 0x3a230cu: goto label_3a230c;
        default: break;
    }

    ctx->pc = 0x3a2238u;

label_3a2238:
    // 0x3a2238: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a2238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3a223c:
    // 0x3a223c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3a223cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3a2240:
    // 0x3a2240: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a2240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3a2244:
    // 0x3a2244: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a2244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a2248:
    // 0x3a2248: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3a2248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3a224c:
    // 0x3a224c: 0x443002d  bgezl       $v0, . + 4 + (0x2D << 2)
label_3a2250:
    if (ctx->pc == 0x3A2250u) {
        ctx->pc = 0x3A2250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A224Cu;
        // 0x3a2250: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2254u;
        goto label_3a2254;
    }
    ctx->pc = 0x3A224Cu;
    {
        const bool branch_taken_0x3a224c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3a224c) {
            ctx->pc = 0x3A2250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A224Cu;
            // 0x3a2250: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2304u;
            goto label_3a2304;
        }
    }
    ctx->pc = 0x3A2254u;
label_3a2254:
    // 0x3a2254: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3a2254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_3a2258:
    // 0x3a2258: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_3a225c:
    if (ctx->pc == 0x3A225Cu) {
        ctx->pc = 0x3A225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2258u;
        // 0x3a225c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2260u;
        goto label_3a2260;
    }
    ctx->pc = 0x3A2258u;
    {
        const bool branch_taken_0x3a2258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2258u;
        // 0x3a225c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2258) {
            ctx->pc = 0x3A22E0u;
            goto label_3a22e0;
        }
    }
    ctx->pc = 0x3A2260u;
label_3a2260:
    // 0x3a2260: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a2260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a2264:
    // 0x3a2264: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x3a2264u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_3a2268:
    // 0x3a2268: 0x8c4600a4  lw          $a2, 0xA4($v0)
    ctx->pc = 0x3a2268u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_3a226c:
    // 0x3a226c: 0xc0f809  jalr        $a2
label_3a2270:
    if (ctx->pc == 0x3A2270u) {
        ctx->pc = 0x3A2270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A226Cu;
        // 0x3a2270: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2274u;
        goto label_3a2274;
    }
    ctx->pc = 0x3A226Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3A2274u);
        ctx->pc = 0x3A2270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A226Cu;
        // 0x3a2270: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A226Cu, 0x3A2274u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A2274u;
label_3a2274:
    // 0x3a2274: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3a2274u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a2278:
    // 0x3a2278: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x3a2278u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a227c:
    // 0x3a227c: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3a227cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3a2280:
    // 0x3a2280: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3a2280u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3a2284:
    // 0x3a2284: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3a2284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_3a2288:
    // 0x3a2288: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3a228c:
    if (ctx->pc == 0x3A228Cu) {
        ctx->pc = 0x3A228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2288u;
        // 0x3a228c: 0x7e040020  sq          $a0, 0x20($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2290u;
        goto label_3a2290;
    }
    ctx->pc = 0x3A2288u;
    {
        const bool branch_taken_0x3a2288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2288u;
        // 0x3a228c: 0x7e040020  sq          $a0, 0x20($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2288) {
            ctx->pc = 0x3A22ACu;
            goto label_3a22ac;
        }
    }
    ctx->pc = 0x3A2290u;
label_3a2290:
    // 0x3a2290: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a2290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3a2294:
    // 0x3a2294: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a2294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a2298:
    // 0x3a2298: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x3a2298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_3a229c:
    // 0x3a229c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x3a229cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_3a22a0:
    // 0x3a22a0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x3a22a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_3a22a4:
    // 0x3a22a4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3a22a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_3a22a8:
    // 0x3a22a8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3a22a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_3a22ac:
    // 0x3a22ac: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3a22acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3a22b0:
    // 0x3a22b0: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x3a22b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_3a22b4:
    // 0x3a22b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3a22b8:
    if (ctx->pc == 0x3A22B8u) {
        ctx->pc = 0x3A22B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A22B4u;
        // 0x3a22b8: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A22BCu;
        goto label_3a22bc;
    }
    ctx->pc = 0x3A22B4u;
    {
        const bool branch_taken_0x3a22b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A22B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A22B4u;
        // 0x3a22b8: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a22b4) {
            ctx->pc = 0x3A22C8u;
            goto label_3a22c8;
        }
    }
    ctx->pc = 0x3A22BCu;
label_3a22bc:
    // 0x3a22bc: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x3a22bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_3a22c0:
    // 0x3a22c0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3a22c4:
    if (ctx->pc == 0x3A22C4u) {
        ctx->pc = 0x3A22C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A22C0u;
        // 0x3a22c4: 0x7e020040  sq          $v0, 0x40($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A22C8u;
        goto label_3a22c8;
    }
    ctx->pc = 0x3A22C0u;
    {
        const bool branch_taken_0x3a22c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A22C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A22C0u;
        // 0x3a22c4: 0x7e020040  sq          $v0, 0x40($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a22c0) {
            ctx->pc = 0x3A22E0u;
            goto label_3a22e0;
        }
    }
    ctx->pc = 0x3A22C8u;
label_3a22c8:
    // 0x3a22c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a22c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3a22cc:
    // 0x3a22cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a22ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a22d0:
    // 0x3a22d0: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x3a22d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_3a22d4:
    // 0x3a22d4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x3a22d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_3a22d8:
    // 0x3a22d8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3a22d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_3a22dc:
    // 0x3a22dc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3a22dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_3a22e0:
    // 0x3a22e0: 0xc0e8568  jal         func_3A15A0
label_3a22e4:
    if (ctx->pc == 0x3A22E4u) {
        ctx->pc = 0x3A22E8u;
        goto label_3a22e8;
    }
    ctx->pc = 0x3A22E0u;
    SET_GPR_U32(ctx, 31, 0x3A22E8u);
    ctx->pc = 0x3A15A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A15A0u, 0x3A22E0u, 0x3A22E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A22E8u;
label_3a22e8:
    // 0x3a22e8: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3a22e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3a22ec:
    // 0x3a22ec: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3a22ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_3a22f0:
    // 0x3a22f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a22f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3a22f4:
    // 0x3a22f4: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x3a22f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_3a22f8:
    // 0x3a22f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3a22f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3a22fc:
    // 0x3a22fc: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3a22fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3a2300:
    // 0x3a2300: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3a2300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a2304:
    // 0x3a2304: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a2304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3a2308:
    // 0x3a2308: 0x3e00008  jr          $ra
label_3a230c:
    if (ctx->pc == 0x3A230Cu) {
        ctx->pc = 0x3A230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2308u;
        // 0x3a230c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2310u;
        goto label_fallthrough_0x3a2308;
    }
    ctx->pc = 0x3A2308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2308u;
        // 0x3a230c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a2308:
    ctx->pc = 0x3A2310u;
}
