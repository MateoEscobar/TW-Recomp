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

// Function: sub_00459520
// Address: 0x459520 - 0x45a6e0
void sub_00459520_0x459520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00459520_0x459520");
#endif

    switch (ctx->pc) {
        case 0x4595acu: goto label_4595ac;
        case 0x4595d8u: goto label_4595d8;
        case 0x459628u: goto label_459628;
        case 0x459650u: goto label_459650;
        case 0x459720u: goto label_459720;
        case 0x45984cu: goto label_45984c;
        case 0x4598f8u: goto label_4598f8;
        case 0x459914u: goto label_459914;
        case 0x459958u: goto label_459958;
        case 0x459980u: goto label_459980;
        case 0x4599d8u: goto label_4599d8;
        case 0x459a00u: goto label_459a00;
        case 0x459a5cu: goto label_459a5c;
        case 0x459a80u: goto label_459a80;
        case 0x459ab8u: goto label_459ab8;
        case 0x459ae8u: goto label_459ae8;
        case 0x459c58u: goto label_459c58;
        case 0x459c94u: goto label_459c94;
        case 0x459cb8u: goto label_459cb8;
        case 0x459d60u: goto label_459d60;
        case 0x459dc0u: goto label_459dc0;
        case 0x459de8u: goto label_459de8;
        case 0x459e84u: goto label_459e84;
        case 0x459ea8u: goto label_459ea8;
        case 0x459f34u: goto label_459f34;
        case 0x459f58u: goto label_459f58;
        case 0x459f98u: goto label_459f98;
        case 0x459fc8u: goto label_459fc8;
        case 0x45a14cu: goto label_45a14c;
        case 0x45a194u: goto label_45a194;
        case 0x45a1b8u: goto label_45a1b8;
        case 0x45a260u: goto label_45a260;
        case 0x45a278u: goto label_45a278;
        case 0x45a3fcu: goto label_45a3fc;
        case 0x45a528u: goto label_45a528;
        case 0x45a598u: goto label_45a598;
        case 0x45a5a8u: goto label_45a5a8;
        default: break;
    }

    ctx->pc = 0x459520u;

    // 0x459520: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x459520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x459524: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x459524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x459528: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x459528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x45952c: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x45952cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x459530: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x459530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x459534: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x459534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x459538: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x459538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x45953c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x45953cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x459540: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x459540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x459544: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x459544u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x459548: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x459548u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x45954c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x45954cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x459550: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x459550u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x459554: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x459554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x459558: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x459558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x45955c: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x45955cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x459560: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x459560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x459564: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x459564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x459568: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x459568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x45956c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x45956cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x459570: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x459570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x459574: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x459574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x459578: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x459578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
    // 0x45957c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x45957cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x459580: 0xafa50068  sw          $a1, 0x68($sp)
    ctx->pc = 0x459580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
    // 0x459584: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x459584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x459588: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x459588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45958c: 0x46020502  mul.s       $f20, $f0, $f2
    ctx->pc = 0x45958cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x459590: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x459590u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x459594: 0x46020d42  mul.s       $f21, $f1, $f2
    ctx->pc = 0x459594u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x459598: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x459598u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x45959c: 0x14450378  bne         $v0, $a1, . + 4 + (0x378 << 2)
    ctx->pc = 0x45959Cu;
    {
        const bool branch_taken_0x45959c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x4595A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45959Cu;
        // 0x4595a0: 0x8c940000  lw          $s4, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45959c) {
            ctx->pc = 0x45A380u;
            goto label_45a380;
        }
    }
    ctx->pc = 0x4595A4u;
    // 0x4595a4: 0xc10f4c8  jal         func_43D320
    ctx->pc = 0x4595A4u;
    SET_GPR_U32(ctx, 31, 0x4595ACu);
    ctx->pc = 0x4595A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4595A4u;
    // 0x4595a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D320u, 0x4595A4u, 0x4595ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4595ACu;
label_4595ac:
    // 0x4595ac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4595acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4595b0: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x4595b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x4595b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4595b4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x4595b8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x4595b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x4595bc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4595BCu;
    {
        const bool branch_taken_0x4595bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4595C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4595BCu;
        // 0x4595c0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4595bc) {
            ctx->pc = 0x4595F8u;
            goto label_4595f8;
        }
    }
    ctx->pc = 0x4595C4u;
    // 0x4595c4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x4595c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4595c8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x4595c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x4595cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4595ccu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x4595d0: 0xf  sync
    ctx->pc = 0x4595d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4595d4: 0x40f  sync.p
    ctx->pc = 0x4595d4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4595d8:
    // 0x4595d8: 0x0  nop
    ctx->pc = 0x4595d8u;
    // NOP
    // 0x4595dc: 0x0  nop
    ctx->pc = 0x4595dcu;
    // NOP
    // 0x4595e0: 0x0  nop
    ctx->pc = 0x4595e0u;
    // NOP
    // 0x4595e4: 0x0  nop
    ctx->pc = 0x4595e4u;
    // NOP
    // 0x4595e8: 0x0  nop
    ctx->pc = 0x4595e8u;
    // NOP
    // 0x4595ec: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x4595ECu;
    {
        const bool branch_taken_0x4595ec = (false);
        if (branch_taken_0x4595ec) {
            ctx->pc = 0x4595D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4595d8;
        }
    }
    ctx->pc = 0x4595F4u;
    // 0x4595f4: 0x0  nop
    ctx->pc = 0x4595f4u;
    // NOP
label_4595f8:
    // 0x4595f8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4595f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4595fc: 0x2a4b00c0  slti        $t3, $s2, 0xC0
    ctx->pc = 0x4595fcu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)192) ? 1 : 0);
    // 0x459600: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x459600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x459604: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x459604u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x459608: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x459608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45960c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x45960Cu;
    {
        const bool branch_taken_0x45960c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x459610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45960Cu;
        // 0x459610: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45960c) {
            ctx->pc = 0x45966Cu;
            goto label_45966c;
        }
    }
    ctx->pc = 0x459614u;
    // 0x459614: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x459614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x459618: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x459618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45961c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45961cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x459620: 0xf  sync
    ctx->pc = 0x459620u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x459624: 0x40f  sync.p
    ctx->pc = 0x459624u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_459628:
    // 0x459628: 0x0  nop
    ctx->pc = 0x459628u;
    // NOP
    // 0x45962c: 0x0  nop
    ctx->pc = 0x45962cu;
    // NOP
    // 0x459630: 0x0  nop
    ctx->pc = 0x459630u;
    // NOP
    // 0x459634: 0x0  nop
    ctx->pc = 0x459634u;
    // NOP
    // 0x459638: 0x0  nop
    ctx->pc = 0x459638u;
    // NOP
    // 0x45963c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45963Cu;
    {
        const bool branch_taken_0x45963c = (false);
        if (branch_taken_0x45963c) {
            ctx->pc = 0x459628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_459628;
        }
    }
    ctx->pc = 0x459644u;
    // 0x459644: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x459644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x459648: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x459648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45964c: 0x0  nop
    ctx->pc = 0x45964cu;
    // NOP
label_459650:
    // 0x459650: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x459650u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x459654: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x459654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x459658: 0x0  nop
    ctx->pc = 0x459658u;
    // NOP
    // 0x45965c: 0x0  nop
    ctx->pc = 0x45965cu;
    // NOP
    // 0x459660: 0x0  nop
    ctx->pc = 0x459660u;
    // NOP
    // 0x459664: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x459664u;
    {
        const bool branch_taken_0x459664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x459664) {
            ctx->pc = 0x459650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_459650;
        }
    }
    ctx->pc = 0x45966Cu;
label_45966c:
    // 0x45966c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x45966cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x459670: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x459670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x459674: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x459674u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x459678: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x459678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45967c: 0x35083f70  ori         $t0, $t0, 0x3F70
    ctx->pc = 0x45967cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16240);
    // 0x459680: 0x461410c3  div.s       $f3, $f2, $f20
    ctx->pc = 0x459680u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[2], ctx->f[20]); }
    // 0x459684: 0x3c0a7000  lui         $t2, 0x7000
    ctx->pc = 0x459684u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28672 << 16));
    // 0x459688: 0x46151103  div.s       $f4, $f2, $f21
    ctx->pc = 0x459688u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[2], ctx->f[21]); }
    // 0x45968c: 0x354a3f00  ori         $t2, $t2, 0x3F00
    ctx->pc = 0x45968cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)16128);
    // 0x459690: 0x3c097000  lui         $t1, 0x7000
    ctx->pc = 0x459690u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
    // 0x459694: 0x3c167000  lui         $s6, 0x7000
    ctx->pc = 0x459694u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)28672 << 16));
    // 0x459698: 0x35293f10  ori         $t1, $t1, 0x3F10
    ctx->pc = 0x459698u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)16144);
    // 0x45969c: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x45969cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x4596a0: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x4596a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x4596a4: 0x34e73f30  ori         $a3, $a3, 0x3F30
    ctx->pc = 0x4596a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16176);
    // 0x4596a8: 0x34c63f40  ori         $a2, $a2, 0x3F40
    ctx->pc = 0x4596a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16192);
    // 0x4596ac: 0x36d63f20  ori         $s6, $s6, 0x3F20
    ctx->pc = 0x4596acu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)16160);
    // 0x4596b0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x4596b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x4596b4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4596b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x4596b8: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x4596b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F70u, bits); }
    // 0x4596bc: 0xc600006c  lwc1        $f0, 0x6C($s0)
    ctx->pc = 0x4596bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4596c0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x4596c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x4596c4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x4596c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x4596c8: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x4596c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F74u, bits); }
    // 0x4596cc: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x4596ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4596d0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x4596d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x4596d4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4596d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4596d8: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x4596d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F78u, bits); }
    // 0x4596dc: 0xc600006c  lwc1        $f0, 0x6C($s0)
    ctx->pc = 0x4596dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4596e0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x4596e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x4596e4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4596e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4596e8: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x4596e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F7Cu, bits); }
    // 0x4596ec: 0x6aa20007  ldl         $v0, 0x7($s5)
    ctx->pc = 0x4596ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4596f0: 0x6ea20000  ldr         $v0, 0x0($s5)
    ctx->pc = 0x4596f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4596f4: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x4596f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x4596f8: 0xb1420007  sdl         $v0, 0x7($t2)
    ctx->pc = 0x4596f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4596fc: 0xb5420000  sdr         $v0, 0x0($t2)
    ctx->pc = 0x4596fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x459700: 0xad430008  sw          $v1, 0x8($t2)
    ctx->pc = 0x459700u;
    runtime->Store32(rdram, ctx, 0x70003F08u, GPR_U32(ctx, 3));
    // 0x459704: 0x6ae20007  ldl         $v0, 0x7($s7)
    ctx->pc = 0x459704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x459708: 0x6ee20000  ldr         $v0, 0x0($s7)
    ctx->pc = 0x459708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x45970c: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x45970cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x459710: 0xb1220007  sdl         $v0, 0x7($t1)
    ctx->pc = 0x459710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x459714: 0xb5220000  sdr         $v0, 0x0($t1)
    ctx->pc = 0x459714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x459718: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x459718u;
    runtime->Store32(rdram, ctx, 0x70003F18u, GPR_U32(ctx, 3));
    // 0x45971c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x45971cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_459720:
    // 0x459720: 0x42000039  di
    ctx->pc = 0x459720u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x459724: 0x40f  sync.p
    ctx->pc = 0x459724u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x459728: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x459728u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x45972c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x45972cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x459730: 0x0  nop
    ctx->pc = 0x459730u;
    // NOP
    // 0x459734: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x459734u;
    {
        const bool branch_taken_0x459734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x459734) {
            ctx->pc = 0x459720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_459720;
        }
    }
    ctx->pc = 0x45973Cu;
    // 0x45973c: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x45973cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x459740: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x459740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x459744: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x459744u;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x459748: 0x4a0002ff  vnop
    ctx->pc = 0x459748u;
    // NOP operation, no action needed for VU0
    // 0x45974c: 0x4a0002ff  vnop
    ctx->pc = 0x45974cu;
    // NOP operation, no action needed for VU0
    // 0x459750: 0x4b0002a2  vaddi.x     $vf10, $vf0, $I
    ctx->pc = 0x459750u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x459754: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x459754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
    // 0x459758: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x459758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x45975c: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x45975cu;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x459760: 0x4a0002ff  vnop
    ctx->pc = 0x459760u;
    // NOP operation, no action needed for VU0
    // 0x459764: 0x4a0002ff  vnop
    ctx->pc = 0x459764u;
    // NOP operation, no action needed for VU0
    // 0x459768: 0x4a8002a2  vaddi.y     $vf10, $vf0, $I
    ctx->pc = 0x459768u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x45976c: 0x3c044009  lui         $a0, 0x4009
    ctx->pc = 0x45976cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16393 << 16));
    // 0x459770: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x459770u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x459774: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x459774u;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x459778: 0x4a0002ff  vnop
    ctx->pc = 0x459778u;
    // NOP operation, no action needed for VU0
    // 0x45977c: 0x4a0002ff  vnop
    ctx->pc = 0x45977cu;
    // NOP operation, no action needed for VU0
    // 0x459780: 0x4a4002a2  vaddi.z     $vf10, $vf0, $I
    ctx->pc = 0x459780u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x459784: 0x3c04c049  lui         $a0, 0xC049
    ctx->pc = 0x459784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49225 << 16));
    // 0x459788: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x459788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x45978c: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x45978cu;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x459790: 0x4a0002ff  vnop
    ctx->pc = 0x459790u;
    // NOP operation, no action needed for VU0
    // 0x459794: 0x4a0002ff  vnop
    ctx->pc = 0x459794u;
    // NOP operation, no action needed for VU0
    // 0x459798: 0x4b0002e2  vaddi.x     $vf11, $vf0, $I
    ctx->pc = 0x459798u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x45979c: 0x3c04c084  lui         $a0, 0xC084
    ctx->pc = 0x45979cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49284 << 16));
    // 0x4597a0: 0x348487ed  ori         $a0, $a0, 0x87ED
    ctx->pc = 0x4597a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34797);
    // 0x4597a4: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x4597a4u;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x4597a8: 0x4a0002ff  vnop
    ctx->pc = 0x4597a8u;
    // NOP operation, no action needed for VU0
    // 0x4597ac: 0x4a0002ff  vnop
    ctx->pc = 0x4597acu;
    // NOP operation, no action needed for VU0
    // 0x4597b0: 0x4a8002e2  vaddi.y     $vf11, $vf0, $I
    ctx->pc = 0x4597b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x4597b4: 0x3c04b94f  lui         $a0, 0xB94F
    ctx->pc = 0x4597b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47439 << 16));
    // 0x4597b8: 0x3484b21f  ori         $a0, $a0, 0xB21F
    ctx->pc = 0x4597b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45599);
    // 0x4597bc: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x4597bcu;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x4597c0: 0x4a0002ff  vnop
    ctx->pc = 0x4597c0u;
    // NOP operation, no action needed for VU0
    // 0x4597c4: 0x4a0002ff  vnop
    ctx->pc = 0x4597c4u;
    // NOP operation, no action needed for VU0
    // 0x4597c8: 0x4a4002e2  vaddi.z     $vf11, $vf0, $I
    ctx->pc = 0x4597c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x4597cc: 0x3c04be2a  lui         $a0, 0xBE2A
    ctx->pc = 0x4597ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48682 << 16));
    // 0x4597d0: 0x3484aaa4  ori         $a0, $a0, 0xAAA4
    ctx->pc = 0x4597d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43684);
    // 0x4597d4: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x4597d4u;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x4597d8: 0x4a0002ff  vnop
    ctx->pc = 0x4597d8u;
    // NOP operation, no action needed for VU0
    // 0x4597dc: 0x4a0002ff  vnop
    ctx->pc = 0x4597dcu;
    // NOP operation, no action needed for VU0
    // 0x4597e0: 0x4b000322  vaddi.x     $vf12, $vf0, $I
    ctx->pc = 0x4597e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x4597e4: 0x3c043c08  lui         $a0, 0x3C08
    ctx->pc = 0x4597e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15368 << 16));
    // 0x4597e8: 0x3484873e  ori         $a0, $a0, 0x873E
    ctx->pc = 0x4597e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34622);
    // 0x4597ec: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x4597ecu;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x4597f0: 0x4a0002ff  vnop
    ctx->pc = 0x4597f0u;
    // NOP operation, no action needed for VU0
    // 0x4597f4: 0x4a0002ff  vnop
    ctx->pc = 0x4597f4u;
    // NOP operation, no action needed for VU0
    // 0x4597f8: 0x4a800322  vaddi.y     $vf12, $vf0, $I
    ctx->pc = 0x4597f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x4597fc: 0x3c04362e  lui         $a0, 0x362E
    ctx->pc = 0x4597fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)13870 << 16));
    // 0x459800: 0x34849c14  ori         $a0, $a0, 0x9C14
    ctx->pc = 0x459800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39956);
    // 0x459804: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x459804u;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x459808: 0x4a0002ff  vnop
    ctx->pc = 0x459808u;
    // NOP operation, no action needed for VU0
    // 0x45980c: 0x4a0002ff  vnop
    ctx->pc = 0x45980cu;
    // NOP operation, no action needed for VU0
    // 0x459810: 0x4a400322  vaddi.z     $vf12, $vf0, $I
    ctx->pc = 0x459810u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x459814: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x459814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x459818: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x459818u;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45981c: 0x4a0002ff  vnop
    ctx->pc = 0x45981cu;
    // NOP operation, no action needed for VU0
    // 0x459820: 0x4a0002ff  vnop
    ctx->pc = 0x459820u;
    // NOP operation, no action needed for VU0
    // 0x459824: 0x4b000362  vaddi.x     $vf13, $vf0, $I
    ctx->pc = 0x459824u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x459828: 0x42000038  ei
    ctx->pc = 0x459828u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x45982c: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x45982cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x459830: 0xe4f40000  swc1        $f20, 0x0($a3)
    ctx->pc = 0x459830u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x459834: 0xe4f40008  swc1        $f20, 0x8($a3)
    ctx->pc = 0x459834u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x459838: 0xe4f40004  swc1        $f20, 0x4($a3)
    ctx->pc = 0x459838u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x45983c: 0xe4d50000  swc1        $f21, 0x0($a2)
    ctx->pc = 0x45983cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x459840: 0xe4d5000c  swc1        $f21, 0xC($a2)
    ctx->pc = 0x459840u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x459844: 0xe4d50008  swc1        $f21, 0x8($a2)
    ctx->pc = 0x459844u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x459848: 0xe4d50004  swc1        $f21, 0x4($a2)
    ctx->pc = 0x459848u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_45984c:
    // 0x45984c: 0x42000039  di
    ctx->pc = 0x45984cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x459850: 0x40f  sync.p
    ctx->pc = 0x459850u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x459854: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x459854u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x459858: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x459858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x45985c: 0x0  nop
    ctx->pc = 0x45985cu;
    // NOP
    // 0x459860: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x459860u;
    {
        const bool branch_taken_0x459860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x459860) {
            ctx->pc = 0x45984Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45984c;
        }
    }
    ctx->pc = 0x459868u;
    // 0x459868: 0xd9420000  lqc2        $vf2, 0x0($t2)
    ctx->pc = 0x459868u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x45986c: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x45986cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x459870: 0xd9230000  lqc2        $vf3, 0x0($t1)
    ctx->pc = 0x459870u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x459874: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x459874u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x459878: 0xd90e0000  lqc2        $vf14, 0x0($t0)
    ctx->pc = 0x459878u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x45987c: 0x4be4122a  vmul.xyzw   $vf8, $vf2, $vf4
    ctx->pc = 0x45987cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x459880: 0x4be41c2a  vmul.xyzw   $vf16, $vf3, $vf4
    ctx->pc = 0x459880u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x459884: 0x4be5126a  vmul.xyzw   $vf9, $vf2, $vf5
    ctx->pc = 0x459884u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x459888: 0x4be51c6a  vmul.xyzw   $vf17, $vf3, $vf5
    ctx->pc = 0x459888u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x45988c: 0x42000038  ei
    ctx->pc = 0x45988cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x459890: 0x15600121  bnez        $t3, . + 4 + (0x121 << 2)
    ctx->pc = 0x459890u;
    {
        const bool branch_taken_0x459890 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x459894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x459890u;
        // 0x459894: 0x2a420004  slti        $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x459890) {
            ctx->pc = 0x459D18u;
            goto label_459d18;
        }
    }
    ctx->pc = 0x459898u;
    // 0x459898: 0x3c0f1000  lui         $t7, 0x1000
    ctx->pc = 0x459898u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4096 << 16));
    // 0x45989c: 0x3c0e1000  lui         $t6, 0x1000
    ctx->pc = 0x45989cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4096 << 16));
    // 0x4598a0: 0xafaf006c  sw          $t7, 0x6C($sp)
    ctx->pc = 0x4598a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 15));
    // 0x4598a4: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x4598a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x4598a8: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x4598a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x4598ac: 0x3c0d1000  lui         $t5, 0x1000
    ctx->pc = 0x4598acu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4096 << 16));
    // 0x4598b0: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x4598b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x4598b4: 0x3c181000  lui         $t8, 0x1000
    ctx->pc = 0x4598b4u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)4096 << 16));
    // 0x4598b8: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x4598b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x4598bc: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x4598bcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
    // 0x4598c0: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x4598c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x4598c4: 0x3c171000  lui         $s7, 0x1000
    ctx->pc = 0x4598c4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)4096 << 16));
    // 0x4598c8: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x4598c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
    // 0x4598cc: 0x35ced000  ori         $t6, $t6, 0xD000
    ctx->pc = 0x4598ccu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)53248);
    // 0x4598d0: 0x3529e020  ori         $t1, $t1, 0xE020
    ctx->pc = 0x4598d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)57376);
    // 0x4598d4: 0x240c0100  addiu       $t4, $zero, 0x100
    ctx->pc = 0x4598d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4598d8: 0x3508d400  ori         $t0, $t0, 0xD400
    ctx->pc = 0x4598d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)54272);
    // 0x4598dc: 0x240a0200  addiu       $t2, $zero, 0x200
    ctx->pc = 0x4598dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x4598e0: 0x35ade010  ori         $t5, $t5, 0xE010
    ctx->pc = 0x4598e0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)57360);
    // 0x4598e4: 0x3718d480  ori         $t8, $t8, 0xD480
    ctx->pc = 0x4598e4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)54400);
    // 0x4598e8: 0x3610d410  ori         $s0, $s0, 0xD410
    ctx->pc = 0x4598e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)54288);
    // 0x4598ec: 0x35efd420  ori         $t7, $t7, 0xD420
    ctx->pc = 0x4598ecu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)54304);
    // 0x4598f0: 0x37ded020  ori         $fp, $fp, 0xD020
    ctx->pc = 0x4598f0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)53280);
    // 0x4598f4: 0x36f7d010  ori         $s7, $s7, 0xD010
    ctx->pc = 0x4598f4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)53264);
label_4598f8:
    // 0x4598f8: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x4598f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4598fc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4598fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x459900: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x459900u;
    {
        const bool branch_taken_0x459900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x459900) {
            ctx->pc = 0x459930u;
            goto label_459930;
        }
    }
    ctx->pc = 0x459908u;
    // 0x459908: 0xad2c0000  sw          $t4, 0x0($t1)
    ctx->pc = 0x459908u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 12));
    // 0x45990c: 0xf  sync
    ctx->pc = 0x45990cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x459910: 0x40f  sync.p
    ctx->pc = 0x459910u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_459914:
    // 0x459914: 0x0  nop
    ctx->pc = 0x459914u;
    // NOP
    // 0x459918: 0x0  nop
    ctx->pc = 0x459918u;
    // NOP
    // 0x45991c: 0x0  nop
    ctx->pc = 0x45991cu;
    // NOP
    // 0x459920: 0x0  nop
    ctx->pc = 0x459920u;
    // NOP
    // 0x459924: 0x0  nop
    ctx->pc = 0x459924u;
    // NOP
    // 0x459928: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x459928u;
    {
        const bool branch_taken_0x459928 = (false);
        if (branch_taken_0x459928) {
            ctx->pc = 0x459914u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_459914;
        }
    }
    ctx->pc = 0x459930u;
label_459930:
    // 0x459930: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x459930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x459934: 0x2655ff40  addiu       $s5, $s2, -0xC0
    ctx->pc = 0x459934u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967104));
    // 0x459938: 0x26720c00  addiu       $s2, $s3, 0xC00
    ctx->pc = 0x459938u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 3072));
    // 0x45993c: 0x26833000  addiu       $v1, $s4, 0x3000
    ctx->pc = 0x45993cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 12288));
    // 0x459940: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x459940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x459944: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x459944u;
    {
        const bool branch_taken_0x459944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x459948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x459944u;
        // 0x459948: 0x26390300  addiu       $t9, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x459944) {
            ctx->pc = 0x45999Cu;
            goto label_45999c;
        }
    }
    ctx->pc = 0x45994Cu;
    // 0x45994c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x45994cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x459950: 0xf  sync
    ctx->pc = 0x459950u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x459954: 0x40f  sync.p
    ctx->pc = 0x459954u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_459958:
    // 0x459958: 0x0  nop
    ctx->pc = 0x459958u;
    // NOP
    // 0x45995c: 0x0  nop
    ctx->pc = 0x45995cu;
    // NOP
    // 0x459960: 0x0  nop
    ctx->pc = 0x459960u;
    // NOP
    // 0x459964: 0x0  nop
    ctx->pc = 0x459964u;
    // NOP
    // 0x459968: 0x0  nop
    ctx->pc = 0x459968u;
    // NOP
    // 0x45996c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45996Cu;
    {
        const bool branch_taken_0x45996c = (false);
        if (branch_taken_0x45996c) {
            ctx->pc = 0x459958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_459958;
        }
    }
    ctx->pc = 0x459974u;
    // 0x459974: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x459974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x459978: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x459978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x45997c: 0x0  nop
    ctx->pc = 0x45997cu;
    // NOP
label_459980:
    // 0x459980: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x459980u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x459984: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x459984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x459988: 0x0  nop
    ctx->pc = 0x459988u;
    // NOP
    // 0x45998c: 0x0  nop
    ctx->pc = 0x45998cu;
    // NOP
    // 0x459990: 0x0  nop
    ctx->pc = 0x459990u;
    // NOP
    // 0x459994: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x459994u;
    {
        const bool branch_taken_0x459994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x459994) {
            ctx->pc = 0x459980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_459980;
        }
    }
    ctx->pc = 0x45999Cu;
label_45999c:
    // 0x45999c: 0xadaa0000  sw          $t2, 0x0($t5)
    ctx->pc = 0x45999cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 10));
    // 0x4599a0: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x4599a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4599a4: 0xaf000000  sw          $zero, 0x0($t8)
    ctx->pc = 0x4599a4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 0));
    // 0x4599a8: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x4599a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x4599ac: 0xade40000  sw          $a0, 0x0($t7)
    ctx->pc = 0x4599acu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 4));
    // 0x4599b0: 0xad0c0000  sw          $t4, 0x0($t0)
    ctx->pc = 0x4599b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 12));
    // 0x4599b4: 0xf  sync
    ctx->pc = 0x4599b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4599b8: 0x40f  sync.p
    ctx->pc = 0x4599b8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4599bc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4599bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4599c0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4599c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4599c4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4599C4u;
    {
        const bool branch_taken_0x4599c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4599c4) {
            ctx->pc = 0x459A1Cu;
            goto label_459a1c;
        }
    }
    ctx->pc = 0x4599CCu;
    // 0x4599cc: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x4599ccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x4599d0: 0xf  sync
    ctx->pc = 0x4599d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4599d4: 0x40f  sync.p
    ctx->pc = 0x4599d4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4599d8:
    // 0x4599d8: 0x0  nop
    ctx->pc = 0x4599d8u;
    // NOP
    // 0x4599dc: 0x0  nop
    ctx->pc = 0x4599dcu;
    // NOP
    // 0x4599e0: 0x0  nop
    ctx->pc = 0x4599e0u;
    // NOP
    // 0x4599e4: 0x0  nop
    ctx->pc = 0x4599e4u;
    // NOP
    // 0x4599e8: 0x0  nop
    ctx->pc = 0x4599e8u;
    // NOP
    // 0x4599ec: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x4599ECu;
    {
        const bool branch_taken_0x4599ec = (false);
        if (branch_taken_0x4599ec) {
            ctx->pc = 0x4599D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4599d8;
        }
    }
    ctx->pc = 0x4599F4u;
    // 0x4599f4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x4599f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x4599f8: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x4599f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x4599fc: 0x0  nop
    ctx->pc = 0x4599fcu;
    // NOP
label_459a00:
    // 0x459a00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x459a00u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x459a04: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x459a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x459a08: 0x0  nop
    ctx->pc = 0x459a08u;
    // NOP
    // 0x459a0c: 0x0  nop
    ctx->pc = 0x459a0cu;
    // NOP
    // 0x459a10: 0x0  nop
    ctx->pc = 0x459a10u;
    // NOP
    // 0x459a14: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x459A14u;
    {
        const bool branch_taken_0x459a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x459a14) {
            ctx->pc = 0x459A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_459a00;
        }
    }
    ctx->pc = 0x459A1Cu;
label_459a1c:
    // 0x459a1c: 0xadaa0000  sw          $t2, 0x0($t5)
    ctx->pc = 0x459a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 10));
    // 0x459a20: 0x24050300  addiu       $a1, $zero, 0x300
    ctx->pc = 0x459a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x459a24: 0xaf050000  sw          $a1, 0x0($t8)
    ctx->pc = 0x459a24u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 5));
    // 0x459a28: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x459a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x459a2c: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x459a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    // 0x459a30: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x459a30u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x459a34: 0xad0c0000  sw          $t4, 0x0($t0)
    ctx->pc = 0x459a34u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 12));
    // 0x459a38: 0xf  sync
    ctx->pc = 0x459a38u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x459a3c: 0x40f  sync.p
    ctx->pc = 0x459a3cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x459a40: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x459a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x459a44: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x459a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x459a48: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x459A48u;
    {
        const bool branch_taken_0x459a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x459A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x459A48u;
        // 0x459a4c: 0x3c067000  lui         $a2, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x459a48) {
            ctx->pc = 0x459A9Cu;
            goto label_459a9c;
        }
    }
    ctx->pc = 0x459A50u;
    // 0x459a50: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x459a50u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x459a54: 0xf  sync
    ctx->pc = 0x459a54u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x459a58: 0x40f  sync.p
    ctx->pc = 0x459a58u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_459a5c:
    // 0x459a5c: 0x0  nop
    ctx->pc = 0x459a5cu;
    // NOP
    // 0x459a60: 0x0  nop
    ctx->pc = 0x459a60u;
    // NOP
    // 0x459a64: 0x0  nop
    ctx->pc = 0x459a64u;
    // NOP
    // 0x459a68: 0x0  nop
    ctx->pc = 0x459a68u;
    // NOP
    // 0x459a6c: 0x0  nop
    ctx->pc = 0x459a6cu;
    // NOP
    // 0x459a70: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x459A70u;
    {
        const bool branch_taken_0x459a70 = (false);
        if (branch_taken_0x459a70) {
            ctx->pc = 0x459A5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_459a5c;
        }
    }
    ctx->pc = 0x459A78u;
    // 0x459a78: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x459a78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x459a7c: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x459a7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
label_459a80:
    // 0x459a80: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x459a80u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x459a84: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x459a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x459a88: 0x0  nop
    ctx->pc = 0x459a88u;
    // NOP
    // 0x459a8c: 0x0  nop
    ctx->pc = 0x459a8cu;
    // NOP
    // 0x459a90: 0x0  nop
    ctx->pc = 0x459a90u;
    // NOP
    // 0x459a94: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x459A94u;
    {
        const bool branch_taken_0x459a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x459A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x459A94u;
        // 0x459a98: 0x3c067000  lui         $a2, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x459a94) {
            ctx->pc = 0x459A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_459a80;
        }
    }
    ctx->pc = 0x459A9Cu;
label_459a9c:
    // 0x459a9c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x459a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x459aa0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x459aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x459aa4: 0x34c60300  ori         $a2, $a2, 0x300
    ctx->pc = 0x459aa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)768);
    // 0x459aa8: 0x34840f00  ori         $a0, $a0, 0xF00
    ctx->pc = 0x459aa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3840);
    // 0x459aac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x459aacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x459ab0: 0x3c0b0001  lui         $t3, 0x1
    ctx->pc = 0x459ab0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)1 << 16));
    // 0x459ab4: 0x0  nop
    ctx->pc = 0x459ab4u;
    // NOP
label_459ab8:
    // 0x459ab8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x459ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x459abc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x459abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x459ac0: 0xe4203f20  swc1        $f0, 0x3F20($at)
    ctx->pc = 0x459ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F20u, bits); }
    // 0x459ac4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x459ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x459ac8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x459ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x459acc: 0xe4213f24  swc1        $f1, 0x3F24($at)
    ctx->pc = 0x459accu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F24u, bits); }
    // 0x459ad0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x459ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x459ad4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x459ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x459ad8: 0xe4203f28  swc1        $f0, 0x3F28($at)
    ctx->pc = 0x459ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F28u, bits); }
    // 0x459adc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x459adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x459ae0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x459ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x459ae4: 0xe4213f2c  swc1        $f1, 0x3F2C($at)
    ctx->pc = 0x459ae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F2Cu, bits); }
label_459ae8:
    // 0x459ae8: 0x42000039  di
    ctx->pc = 0x459ae8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x459aec: 0x40f  sync.p
    ctx->pc = 0x459aecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x459af0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x459af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x459af4: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x459af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x459af8: 0x0  nop
    ctx->pc = 0x459af8u;
    // NOP
    // 0x459afc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x459AFCu;
    {
        const bool branch_taken_0x459afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x459afc) {
            ctx->pc = 0x459AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_459ae8;
        }
    }
    ctx->pc = 0x459B04u;
    // 0x459b04: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x459b04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x459b08: 0xd8d40000  lqc2        $vf20, 0x0($a2)
    ctx->pc = 0x459b08u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x459b0c: 0xd8db0010  lqc2        $vf27, 0x10($a2)
    ctx->pc = 0x459b0cu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x459b10: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x459b10u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x459b14: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x459b14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x459b18: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x459b18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x459b1c: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x459b1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x459b20: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x459b20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x459b24: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x459b24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x459b28: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x459b28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x459b2c: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x459b2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x459b30: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x459b30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x459b34: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x459b34u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x459b38: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x459b38u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x459b3c: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x459b3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x459b40: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x459b40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x459b44: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x459b44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x459b48: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x459b48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x459b4c: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x459b4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x459b50: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x459b50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x459b54: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x459b54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x459b58: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x459b58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x459b5c: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x459b5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x459b60: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x459b60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x459b64: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x459b64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x459b68: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x459b68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x459b6c: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x459b6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x459b70: 0x4bc74098  vmulx.xyz   $vf2, $vf8, $vf7x
    ctx->pc = 0x459b70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x459b74: 0x4bc780da  vmulz.xyz   $vf3, $vf16, $vf7z
    ctx->pc = 0x459b74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x459b78: 0x4bc7491a  vmulz.xyz   $vf4, $vf9, $vf7z
    ctx->pc = 0x459b78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x459b7c: 0x4bc78958  vmulx.xyz   $vf5, $vf17, $vf7x
    ctx->pc = 0x459b7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x459b80: 0x4be314ac  vsub.xyzw   $vf18, $vf2, $vf3
    ctx->pc = 0x459b80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x459b84: 0x4bc74099  vmuly.xyz   $vf2, $vf8, $vf7y
    ctx->pc = 0x459b84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x459b88: 0x4bc780db  vmulw.xyz   $vf3, $vf16, $vf7w
    ctx->pc = 0x459b88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x459b8c: 0x4be524e8  vadd.xyzw   $vf19, $vf4, $vf5
    ctx->pc = 0x459b8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x459b90: 0x4bc7491b  vmulw.xyz   $vf4, $vf9, $vf7w
    ctx->pc = 0x459b90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x459b94: 0x4bc78959  vmuly.xyz   $vf5, $vf17, $vf7y
    ctx->pc = 0x459b94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x459b98: 0x4be3166c  vsub.xyzw   $vf25, $vf2, $vf3
    ctx->pc = 0x459b98u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = PS2_VBLEND(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x459b9c: 0x4bee99bd  vmulay.xyzw $ACC, $vf19, $vf14y
    ctx->pc = 0x459b9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x459ba0: 0x4bee90bc  vmaddax.xyzw $ACC, $vf18, $vf14x
    ctx->pc = 0x459ba0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x459ba4: 0x4be0a54b  vmaddw.xyzw $vf21, $vf20, $vf0w
    ctx->pc = 0x459ba4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x459ba8: 0x4be526a8  vadd.xyzw   $vf26, $vf4, $vf5
    ctx->pc = 0x459ba8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x459bac: 0x4bee99bd  vmulay.xyzw $ACC, $vf19, $vf14y
    ctx->pc = 0x459bacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x459bb0: 0x4bee90be  vmaddaz.xyzw $ACC, $vf18, $vf14z
    ctx->pc = 0x459bb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x459bb4: 0x4be0a58b  vmaddw.xyzw $vf22, $vf20, $vf0w
    ctx->pc = 0x459bb4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x459bb8: 0x4bee99bf  vmulaw.xyzw $ACC, $vf19, $vf14w
    ctx->pc = 0x459bb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x459bbc: 0x4bee90be  vmaddaz.xyzw $ACC, $vf18, $vf14z
    ctx->pc = 0x459bbcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x459bc0: 0x4be0a5cb  vmaddw.xyzw $vf23, $vf20, $vf0w
    ctx->pc = 0x459bc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x459bc4: 0x4bee99bf  vmulaw.xyzw $ACC, $vf19, $vf14w
    ctx->pc = 0x459bc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x459bc8: 0x4bee90bc  vmaddax.xyzw $ACC, $vf18, $vf14x
    ctx->pc = 0x459bc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x459bcc: 0x4be0a60b  vmaddw.xyzw $vf24, $vf20, $vf0w
    ctx->pc = 0x459bccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x459bd0: 0x4beed1bd  vmulay.xyzw $ACC, $vf26, $vf14y
    ctx->pc = 0x459bd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x459bd4: 0x4beec8bc  vmaddax.xyzw $ACC, $vf25, $vf14x
    ctx->pc = 0x459bd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x459bd8: 0x4be0df0b  vmaddw.xyzw $vf28, $vf27, $vf0w
    ctx->pc = 0x459bd8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x459bdc: 0x4beed1bd  vmulay.xyzw $ACC, $vf26, $vf14y
    ctx->pc = 0x459bdcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x459be0: 0x4beec8be  vmaddaz.xyzw $ACC, $vf25, $vf14z
    ctx->pc = 0x459be0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x459be4: 0x4be0df4b  vmaddw.xyzw $vf29, $vf27, $vf0w
    ctx->pc = 0x459be4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x459be8: 0x4beed1bf  vmulaw.xyzw $ACC, $vf26, $vf14w
    ctx->pc = 0x459be8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x459bec: 0x4beec8be  vmaddaz.xyzw $ACC, $vf25, $vf14z
    ctx->pc = 0x459becu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x459bf0: 0x4be0df8b  vmaddw.xyzw $vf30, $vf27, $vf0w
    ctx->pc = 0x459bf0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x459bf4: 0x4beed1bf  vmulaw.xyzw $ACC, $vf26, $vf14w
    ctx->pc = 0x459bf4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x459bf8: 0x4beec8bc  vmaddax.xyzw $ACC, $vf25, $vf14x
    ctx->pc = 0x459bf8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x459bfc: 0x4be0dfcb  vmaddw.xyzw $vf31, $vf27, $vf0w
    ctx->pc = 0x459bfcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x459c00: 0xf8950000  sqc2        $vf21, 0x0($a0)
    ctx->pc = 0x459c00u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x459c04: 0xf8960010  sqc2        $vf22, 0x10($a0)
    ctx->pc = 0x459c04u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x459c08: 0xf8970020  sqc2        $vf23, 0x20($a0)
    ctx->pc = 0x459c08u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x459c0c: 0xf8980030  sqc2        $vf24, 0x30($a0)
    ctx->pc = 0x459c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x459c10: 0xf89c0040  sqc2        $vf28, 0x40($a0)
    ctx->pc = 0x459c10u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x459c14: 0xf89d0050  sqc2        $vf29, 0x50($a0)
    ctx->pc = 0x459c14u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x459c18: 0xf89e0060  sqc2        $vf30, 0x60($a0)
    ctx->pc = 0x459c18u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x459c1c: 0xf89f0070  sqc2        $vf31, 0x70($a0)
    ctx->pc = 0x459c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x459c20: 0x42000038  ei
    ctx->pc = 0x459c20u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x459c24: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x459c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x459c28: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x459c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x459c2c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x459c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x459c30: 0x28e200c0  slti        $v0, $a3, 0xC0
    ctx->pc = 0x459c30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)192) ? 1 : 0);
    // 0x459c34: 0x1440ffa0  bnez        $v0, . + 4 + (-0x60 << 2)
    ctx->pc = 0x459C34u;
    {
        const bool branch_taken_0x459c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x459C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x459C34u;
        // 0x459c38: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x459c34) {
            ctx->pc = 0x459AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_459ab8;
        }
    }
    ctx->pc = 0x459C3Cu;
    // 0x459c3c: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x459c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x459c40: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x459c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x459c44: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x459C44u;
    {
        const bool branch_taken_0x459c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x459c44) {
            ctx->pc = 0x459C78u;
            goto label_459c78;
        }
    }
    ctx->pc = 0x459C4Cu;
    // 0x459c4c: 0xad2c0000  sw          $t4, 0x0($t1)
    ctx->pc = 0x459c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 12));
    // 0x459c50: 0xf  sync
    ctx->pc = 0x459c50u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x459c54: 0x40f  sync.p
    ctx->pc = 0x459c54u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_459c58:
    // 0x459c58: 0x0  nop
    ctx->pc = 0x459c58u;
    // NOP
    // 0x459c5c: 0x0  nop
    ctx->pc = 0x459c5cu;
    // NOP
    // 0x459c60: 0x0  nop
    ctx->pc = 0x459c60u;
    // NOP
    // 0x459c64: 0x0  nop
    ctx->pc = 0x459c64u;
    // NOP
    // 0x459c68: 0x0  nop
    ctx->pc = 0x459c68u;
    // NOP
    // 0x459c6c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x459C6Cu;
    {
        const bool branch_taken_0x459c6c = (false);
        if (branch_taken_0x459c6c) {
            ctx->pc = 0x459C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_459c58;
        }
    }
    ctx->pc = 0x459C74u;
    // 0x459c74: 0x0  nop
    ctx->pc = 0x459c74u;
    // NOP
label_459c78:
    // 0x459c78: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x459c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x459c7c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x459c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x459c80: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x459C80u;
    {
        const bool branch_taken_0x459c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x459c80) {
            ctx->pc = 0x459CD4u;
            goto label_459cd4;
        }
    }
    ctx->pc = 0x459C88u;
    // 0x459c88: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x459c88u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x459c8c: 0xf  sync
    ctx->pc = 0x459c8cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x459c90: 0x40f  sync.p
    ctx->pc = 0x459c90u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_459c94:
    // 0x459c94: 0x0  nop
    ctx->pc = 0x459c94u;
    // NOP
    // 0x459c98: 0x0  nop
    ctx->pc = 0x459c98u;
    // NOP
    // 0x459c9c: 0x0  nop
    ctx->pc = 0x459c9cu;
    // NOP
    // 0x459ca0: 0x0  nop
    ctx->pc = 0x459ca0u;
    // NOP
    // 0x459ca4: 0x0  nop
    ctx->pc = 0x459ca4u;
    // NOP
    // 0x459ca8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x459CA8u;
    {
        const bool branch_taken_0x459ca8 = (false);
        if (branch_taken_0x459ca8) {
            ctx->pc = 0x459C94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_459c94;
        }
    }
    ctx->pc = 0x459CB0u;
    // 0x459cb0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x459cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x459cb4: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x459cb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
label_459cb8:
    // 0x459cb8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x459cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x459cbc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x459cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x459cc0: 0x0  nop
    ctx->pc = 0x459cc0u;
    // NOP
    // 0x459cc4: 0x0  nop
    ctx->pc = 0x459cc4u;
    // NOP
    // 0x459cc8: 0x0  nop
    ctx->pc = 0x459cc8u;
    // NOP
    // 0x459ccc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x459CCCu;
    {
        const bool branch_taken_0x459ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x459ccc) {
            ctx->pc = 0x459CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_459cb8;
        }
    }
    ctx->pc = 0x459CD4u;
label_459cd4:
    // 0x459cd4: 0xadac0000  sw          $t4, 0x0($t5)
    ctx->pc = 0x459cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 12));
    // 0x459cd8: 0x24050f00  addiu       $a1, $zero, 0xF00
    ctx->pc = 0x459cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3840));
    // 0x459cdc: 0x24020300  addiu       $v0, $zero, 0x300
    ctx->pc = 0x459cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x459ce0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x459ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x459ce4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x459ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x459ce8: 0xaef40000  sw          $s4, 0x0($s7)
    ctx->pc = 0x459ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 20));
    // 0x459cec: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x459cecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x459cf0: 0xadcc0000  sw          $t4, 0x0($t6)
    ctx->pc = 0x459cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 12));
    // 0x459cf4: 0xf  sync
    ctx->pc = 0x459cf4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x459cf8: 0x40f  sync.p
    ctx->pc = 0x459cf8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x459cfc: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x459cfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x459d00: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x459d00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x459d04: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x459d04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x459d08: 0x2a4200c0  slti        $v0, $s2, 0xC0
    ctx->pc = 0x459d08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)192) ? 1 : 0);
    // 0x459d0c: 0x1040fefa  beqz        $v0, . + 4 + (-0x106 << 2)
    ctx->pc = 0x459D0Cu;
    {
        const bool branch_taken_0x459d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x459D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x459D0Cu;
        // 0x459d10: 0x320882d  daddu       $s1, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x459d0c) {
            ctx->pc = 0x4598F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4598f8;
        }
    }
    ctx->pc = 0x459D14u;
    // 0x459d14: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x459d14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_459d18:
    // 0x459d18: 0x1440014b  bnez        $v0, . + 4 + (0x14B << 2)
    ctx->pc = 0x459D18u;
    {
        const bool branch_taken_0x459d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x459D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x459D18u;
        // 0x459d1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x459d18) {
            ctx->pc = 0x45A248u;
            goto label_45a248;
        }
    }
    ctx->pc = 0x459D20u;
    // 0x459d20: 0x26430003  addiu       $v1, $s2, 0x3
    ctx->pc = 0x459d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x459d24: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x459d24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x459d28: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x459d28u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 18));
    // 0x459d2c: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x459d2cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
    // 0x459d30: 0x44080  sll         $t0, $a0, 2
    ctx->pc = 0x459d30u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x459d34: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x459d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x459d38: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x459d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x459d3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x459d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x459d40: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x459d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x459d44: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x459D44u;
    {
        const bool branch_taken_0x459d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x459D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x459D44u;
        // 0x459d48: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x459d44) {
            ctx->pc = 0x459D80u;
            goto label_459d80;
        }
    }
    ctx->pc = 0x459D4Cu;
    // 0x459d4c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x459d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x459d50: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x459d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x459d54: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x459d54u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x459d58: 0xf  sync
    ctx->pc = 0x459d58u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x459d5c: 0x40f  sync.p
    ctx->pc = 0x459d5cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_459d60:
    // 0x459d60: 0x0  nop
    ctx->pc = 0x459d60u;
    // NOP
    // 0x459d64: 0x0  nop
    ctx->pc = 0x459d64u;
    // NOP
    // 0x459d68: 0x0  nop
    ctx->pc = 0x459d68u;
    // NOP
    // 0x459d6c: 0x0  nop
    ctx->pc = 0x459d6cu;
    // NOP
    // 0x459d70: 0x0  nop
    ctx->pc = 0x459d70u;
    // NOP
    // 0x459d74: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x459D74u;
    {
        const bool branch_taken_0x459d74 = (false);
        if (branch_taken_0x459d74) {
            ctx->pc = 0x459D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_459d60;
        }
    }
    ctx->pc = 0x459D7Cu;
    // 0x459d7c: 0x0  nop
    ctx->pc = 0x459d7cu;
    // NOP
label_459d80:
    // 0x459d80: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x459d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x459d84: 0x46200  sll         $t4, $a0, 8
    ctx->pc = 0x459d84u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x459d88: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x459d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x459d8c: 0x2486823  subu        $t5, $s2, $t0
    ctx->pc = 0x459d8cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x459d90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x459d90u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x459d94: 0x25090003  addiu       $t1, $t0, 0x3
    ctx->pc = 0x459d94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x459d98: 0x45100  sll         $t2, $a0, 4
    ctx->pc = 0x459d98u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x459d9c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x459d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x459da0: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x459DA0u;
    {
        const bool branch_taken_0x459da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x459DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x459DA0u;
        // 0x459da4: 0x45980  sll         $t3, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x459da0) {
            ctx->pc = 0x459E04u;
            goto label_459e04;
        }
    }
    ctx->pc = 0x459DA8u;
    // 0x459da8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x459da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x459dac: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x459dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x459db0: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x459db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x459db4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x459db4u;
    runtime->Store32(rdram, ctx, 0x1000E020u, GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x459db8: 0xf  sync
    ctx->pc = 0x459db8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x459dbc: 0x40f  sync.p
    ctx->pc = 0x459dbcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_459dc0:
    // 0x459dc0: 0x0  nop
    ctx->pc = 0x459dc0u;
    // NOP
    // 0x459dc4: 0x0  nop
    ctx->pc = 0x459dc4u;
    // NOP
    // 0x459dc8: 0x0  nop
    ctx->pc = 0x459dc8u;
    // NOP
    // 0x459dcc: 0x0  nop
    ctx->pc = 0x459dccu;
    // NOP
    // 0x459dd0: 0x0  nop
    ctx->pc = 0x459dd0u;
    // NOP
    // 0x459dd4: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x459DD4u;
    {
        const bool branch_taken_0x459dd4 = (false);
        if (branch_taken_0x459dd4) {
            ctx->pc = 0x459DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_459dc0;
        }
    }
    ctx->pc = 0x459DDCu;
    // 0x459ddc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x459ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x459de0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x459de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x459de4: 0x0  nop
    ctx->pc = 0x459de4u;
    // NOP
label_459de8:
    // 0x459de8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x459de8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x459dec: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x459decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x459df0: 0x0  nop
    ctx->pc = 0x459df0u;
    // NOP
    // 0x459df4: 0x0  nop
    ctx->pc = 0x459df4u;
    // NOP
    // 0x459df8: 0x0  nop
    ctx->pc = 0x459df8u;
    // NOP
    // 0x459dfc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x459DFCu;
    {
        const bool branch_taken_0x459dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x459dfc) {
            ctx->pc = 0x459DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_459de8;
        }
    }
    ctx->pc = 0x459E04u;
label_459e04:
    // 0x459e04: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x459e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x459e08: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x459e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x459e0c: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x459e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x459e10: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x459e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x459e14: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x459e14u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 6)); // MMIO: 0x10000000
    // 0x459e18: 0x88202a  slt         $a0, $a0, $t0
    ctx->pc = 0x459e18u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x459e1c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x459e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x459e20: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x459e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x459e24: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x459e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x459e28: 0x104280b  movn        $a1, $t0, $a0
    ctx->pc = 0x459e28u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 8));
    // 0x459e2c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x459e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x459e30: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x459e30u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x459e34: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x459e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x459e38: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x459e38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x459e3c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x459e3cu;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 17)); // MMIO: 0x10000000
    // 0x459e40: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x459e40u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x459e44: 0x3484d420  ori         $a0, $a0, 0xD420
    ctx->pc = 0x459e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54304);
    // 0x459e48: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x459e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x459e4c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x459e4cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x459e50: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x459e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x459e54: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x459e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x459e58: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x459e58u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x459e5c: 0xf  sync
    ctx->pc = 0x459e5cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x459e60: 0x40f  sync.p
    ctx->pc = 0x459e60u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x459e64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x459e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x459e68: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x459e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x459e6c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x459E6Cu;
    {
        const bool branch_taken_0x459e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x459E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x459E6Cu;
        // 0x459e70: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x459e6c) {
            ctx->pc = 0x459EC4u;
            goto label_459ec4;
        }
    }
    ctx->pc = 0x459E74u;
    // 0x459e74: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x459e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x459e78: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x459e78u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6)); // MMIO: 0x10000000
    // 0x459e7c: 0xf  sync
    ctx->pc = 0x459e7cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x459e80: 0x40f  sync.p
    ctx->pc = 0x459e80u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_459e84:
    // 0x459e84: 0x0  nop
    ctx->pc = 0x459e84u;
    // NOP
    // 0x459e88: 0x0  nop
    ctx->pc = 0x459e88u;
    // NOP
    // 0x459e8c: 0x0  nop
    ctx->pc = 0x459e8cu;
    // NOP
    // 0x459e90: 0x0  nop
    ctx->pc = 0x459e90u;
    // NOP
    // 0x459e94: 0x0  nop
    ctx->pc = 0x459e94u;
    // NOP
    // 0x459e98: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x459E98u;
    {
        const bool branch_taken_0x459e98 = (false);
        if (branch_taken_0x459e98) {
            ctx->pc = 0x459E84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_459e84;
        }
    }
    ctx->pc = 0x459EA0u;
    // 0x459ea0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x459ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x459ea4: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x459ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_459ea8:
    // 0x459ea8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x459ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x459eac: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x459eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x459eb0: 0x0  nop
    ctx->pc = 0x459eb0u;
    // NOP
    // 0x459eb4: 0x0  nop
    ctx->pc = 0x459eb4u;
    // NOP
    // 0x459eb8: 0x0  nop
    ctx->pc = 0x459eb8u;
    // NOP
    // 0x459ebc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x459EBCu;
    {
        const bool branch_taken_0x459ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x459ebc) {
            ctx->pc = 0x459EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_459ea8;
        }
    }
    ctx->pc = 0x459EC4u;
label_459ec4:
    // 0x459ec4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x459ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x459ec8: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x459ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x459ecc: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x459eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x459ed0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x459ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x459ed4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x459ed4u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x459ed8: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x459ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x459edc: 0x24040300  addiu       $a0, $zero, 0x300
    ctx->pc = 0x459edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x459ee0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x459ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x459ee4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x459ee4u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x459ee8: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x459ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x459eec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x459eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x459ef0: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x459ef0u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 19)); // MMIO: 0x10000000
    // 0x459ef4: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x459ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x459ef8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x459ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x459efc: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x459efcu;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 8)); // MMIO: 0x10000000
    // 0x459f00: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x459f00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x459f04: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x459f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x459f08: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x459f08u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x459f0c: 0xf  sync
    ctx->pc = 0x459f0cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x459f10: 0x40f  sync.p
    ctx->pc = 0x459f10u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x459f14: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x459f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x459f18: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x459f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x459f1c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x459F1Cu;
    {
        const bool branch_taken_0x459f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x459F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x459F1Cu;
        // 0x459f20: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x459f1c) {
            ctx->pc = 0x459F74u;
            goto label_459f74;
        }
    }
    ctx->pc = 0x459F24u;
    // 0x459f24: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x459f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x459f28: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x459f28u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x459f2c: 0xf  sync
    ctx->pc = 0x459f2cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x459f30: 0x40f  sync.p
    ctx->pc = 0x459f30u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_459f34:
    // 0x459f34: 0x0  nop
    ctx->pc = 0x459f34u;
    // NOP
    // 0x459f38: 0x0  nop
    ctx->pc = 0x459f38u;
    // NOP
    // 0x459f3c: 0x0  nop
    ctx->pc = 0x459f3cu;
    // NOP
    // 0x459f40: 0x0  nop
    ctx->pc = 0x459f40u;
    // NOP
    // 0x459f44: 0x0  nop
    ctx->pc = 0x459f44u;
    // NOP
    // 0x459f48: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x459F48u;
    {
        const bool branch_taken_0x459f48 = (false);
        if (branch_taken_0x459f48) {
            ctx->pc = 0x459F34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_459f34;
        }
    }
    ctx->pc = 0x459F50u;
    // 0x459f50: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x459f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x459f54: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x459f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_459f58:
    // 0x459f58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x459f58u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x459f5c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x459f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x459f60: 0x0  nop
    ctx->pc = 0x459f60u;
    // NOP
    // 0x459f64: 0x0  nop
    ctx->pc = 0x459f64u;
    // NOP
    // 0x459f68: 0x0  nop
    ctx->pc = 0x459f68u;
    // NOP
    // 0x459f6c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x459F6Cu;
    {
        const bool branch_taken_0x459f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x459f6c) {
            ctx->pc = 0x459F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_459f58;
        }
    }
    ctx->pc = 0x459F74u;
label_459f74:
    // 0x459f74: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x459f74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x459f78: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x459f78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x459f7c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x459f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x459f80: 0x34c60300  ori         $a2, $a2, 0x300
    ctx->pc = 0x459f80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)768);
    // 0x459f84: 0x34840f00  ori         $a0, $a0, 0xF00
    ctx->pc = 0x459f84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3840);
    // 0x459f88: 0x19000065  blez        $t0, . + 4 + (0x65 << 2)
    ctx->pc = 0x459F88u;
    {
        const bool branch_taken_0x459f88 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x459F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x459F88u;
        // 0x459f8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x459f88) {
            ctx->pc = 0x45A120u;
            goto label_45a120;
        }
    }
    ctx->pc = 0x459F90u;
    // 0x459f90: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x459f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x459f94: 0x0  nop
    ctx->pc = 0x459f94u;
    // NOP
label_459f98:
    // 0x459f98: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x459f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x459f9c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x459f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x459fa0: 0xe4203f20  swc1        $f0, 0x3F20($at)
    ctx->pc = 0x459fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F20u, bits); }
    // 0x459fa4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x459fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x459fa8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x459fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x459fac: 0xe4213f24  swc1        $f1, 0x3F24($at)
    ctx->pc = 0x459facu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F24u, bits); }
    // 0x459fb0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x459fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x459fb4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x459fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x459fb8: 0xe4203f28  swc1        $f0, 0x3F28($at)
    ctx->pc = 0x459fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F28u, bits); }
    // 0x459fbc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x459fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x459fc0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x459fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x459fc4: 0xe4213f2c  swc1        $f1, 0x3F2C($at)
    ctx->pc = 0x459fc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F2Cu, bits); }
label_459fc8:
    // 0x459fc8: 0x42000039  di
    ctx->pc = 0x459fc8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x459fcc: 0x40f  sync.p
    ctx->pc = 0x459fccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x459fd0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x459fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x459fd4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x459fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x459fd8: 0x0  nop
    ctx->pc = 0x459fd8u;
    // NOP
    // 0x459fdc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x459FDCu;
    {
        const bool branch_taken_0x459fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x459fdc) {
            ctx->pc = 0x459FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_459fc8;
        }
    }
    ctx->pc = 0x459FE4u;
    // 0x459fe4: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x459fe4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x459fe8: 0xd8d40000  lqc2        $vf20, 0x0($a2)
    ctx->pc = 0x459fe8u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x459fec: 0xd8db0010  lqc2        $vf27, 0x10($a2)
    ctx->pc = 0x459fecu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x459ff0: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x459ff0u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x459ff4: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x459ff4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x459ff8: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x459ff8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x459ffc: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x459ffcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x45a000: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x45a000u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x45a004: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x45a004u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45a008: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x45a008u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x45a00c: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x45a00cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x45a010: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x45a010u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x45a014: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x45a014u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45a018: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x45a018u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45a01c: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x45a01cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45a020: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x45a020u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x45a024: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x45a024u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x45a028: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x45a028u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x45a02c: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x45a02cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x45a030: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x45a030u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x45a034: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x45a034u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a038: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x45a038u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x45a03c: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x45a03cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45a040: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x45a040u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a044: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x45a044u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a048: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x45a048u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a04c: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x45a04cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45a050: 0x4bc74098  vmulx.xyz   $vf2, $vf8, $vf7x
    ctx->pc = 0x45a050u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45a054: 0x4bc780da  vmulz.xyz   $vf3, $vf16, $vf7z
    ctx->pc = 0x45a054u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x45a058: 0x4bc7491a  vmulz.xyz   $vf4, $vf9, $vf7z
    ctx->pc = 0x45a058u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x45a05c: 0x4bc78958  vmulx.xyz   $vf5, $vf17, $vf7x
    ctx->pc = 0x45a05cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x45a060: 0x4be314ac  vsub.xyzw   $vf18, $vf2, $vf3
    ctx->pc = 0x45a060u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x45a064: 0x4bc74099  vmuly.xyz   $vf2, $vf8, $vf7y
    ctx->pc = 0x45a064u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45a068: 0x4bc780db  vmulw.xyz   $vf3, $vf16, $vf7w
    ctx->pc = 0x45a068u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x45a06c: 0x4be524e8  vadd.xyzw   $vf19, $vf4, $vf5
    ctx->pc = 0x45a06cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x45a070: 0x4bc7491b  vmulw.xyz   $vf4, $vf9, $vf7w
    ctx->pc = 0x45a070u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x45a074: 0x4bc78959  vmuly.xyz   $vf5, $vf17, $vf7y
    ctx->pc = 0x45a074u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x45a078: 0x4be3166c  vsub.xyzw   $vf25, $vf2, $vf3
    ctx->pc = 0x45a078u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = PS2_VBLEND(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x45a07c: 0x4bee99bd  vmulay.xyzw $ACC, $vf19, $vf14y
    ctx->pc = 0x45a07cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a080: 0x4bee90bc  vmaddax.xyzw $ACC, $vf18, $vf14x
    ctx->pc = 0x45a080u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a084: 0x4be0a54b  vmaddw.xyzw $vf21, $vf20, $vf0w
    ctx->pc = 0x45a084u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x45a088: 0x4be526a8  vadd.xyzw   $vf26, $vf4, $vf5
    ctx->pc = 0x45a088u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x45a08c: 0x4bee99bd  vmulay.xyzw $ACC, $vf19, $vf14y
    ctx->pc = 0x45a08cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a090: 0x4bee90be  vmaddaz.xyzw $ACC, $vf18, $vf14z
    ctx->pc = 0x45a090u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a094: 0x4be0a58b  vmaddw.xyzw $vf22, $vf20, $vf0w
    ctx->pc = 0x45a094u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x45a098: 0x4bee99bf  vmulaw.xyzw $ACC, $vf19, $vf14w
    ctx->pc = 0x45a098u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a09c: 0x4bee90be  vmaddaz.xyzw $ACC, $vf18, $vf14z
    ctx->pc = 0x45a09cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a0a0: 0x4be0a5cb  vmaddw.xyzw $vf23, $vf20, $vf0w
    ctx->pc = 0x45a0a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x45a0a4: 0x4bee99bf  vmulaw.xyzw $ACC, $vf19, $vf14w
    ctx->pc = 0x45a0a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a0a8: 0x4bee90bc  vmaddax.xyzw $ACC, $vf18, $vf14x
    ctx->pc = 0x45a0a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a0ac: 0x4be0a60b  vmaddw.xyzw $vf24, $vf20, $vf0w
    ctx->pc = 0x45a0acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x45a0b0: 0x4beed1bd  vmulay.xyzw $ACC, $vf26, $vf14y
    ctx->pc = 0x45a0b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a0b4: 0x4beec8bc  vmaddax.xyzw $ACC, $vf25, $vf14x
    ctx->pc = 0x45a0b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a0b8: 0x4be0df0b  vmaddw.xyzw $vf28, $vf27, $vf0w
    ctx->pc = 0x45a0b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x45a0bc: 0x4beed1bd  vmulay.xyzw $ACC, $vf26, $vf14y
    ctx->pc = 0x45a0bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a0c0: 0x4beec8be  vmaddaz.xyzw $ACC, $vf25, $vf14z
    ctx->pc = 0x45a0c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a0c4: 0x4be0df4b  vmaddw.xyzw $vf29, $vf27, $vf0w
    ctx->pc = 0x45a0c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x45a0c8: 0x4beed1bf  vmulaw.xyzw $ACC, $vf26, $vf14w
    ctx->pc = 0x45a0c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a0cc: 0x4beec8be  vmaddaz.xyzw $ACC, $vf25, $vf14z
    ctx->pc = 0x45a0ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a0d0: 0x4be0df8b  vmaddw.xyzw $vf30, $vf27, $vf0w
    ctx->pc = 0x45a0d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x45a0d4: 0x4beed1bf  vmulaw.xyzw $ACC, $vf26, $vf14w
    ctx->pc = 0x45a0d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a0d8: 0x4beec8bc  vmaddax.xyzw $ACC, $vf25, $vf14x
    ctx->pc = 0x45a0d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a0dc: 0x4be0dfcb  vmaddw.xyzw $vf31, $vf27, $vf0w
    ctx->pc = 0x45a0dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x45a0e0: 0xf8950000  sqc2        $vf21, 0x0($a0)
    ctx->pc = 0x45a0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x45a0e4: 0xf8960010  sqc2        $vf22, 0x10($a0)
    ctx->pc = 0x45a0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x45a0e8: 0xf8970020  sqc2        $vf23, 0x20($a0)
    ctx->pc = 0x45a0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x45a0ec: 0xf8980030  sqc2        $vf24, 0x30($a0)
    ctx->pc = 0x45a0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x45a0f0: 0xf89c0040  sqc2        $vf28, 0x40($a0)
    ctx->pc = 0x45a0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x45a0f4: 0xf89d0050  sqc2        $vf29, 0x50($a0)
    ctx->pc = 0x45a0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x45a0f8: 0xf89e0060  sqc2        $vf30, 0x60($a0)
    ctx->pc = 0x45a0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x45a0fc: 0xf89f0070  sqc2        $vf31, 0x70($a0)
    ctx->pc = 0x45a0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x45a100: 0x42000038  ei
    ctx->pc = 0x45a100u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x45a104: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x45a104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x45a108: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x45a108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x45a10c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x45a10cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x45a110: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x45a110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x45a114: 0x1440ffa0  bnez        $v0, . + 4 + (-0x60 << 2)
    ctx->pc = 0x45A114u;
    {
        const bool branch_taken_0x45a114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x45A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45A114u;
        // 0x45a118: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45a114) {
            ctx->pc = 0x459F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_459f98;
        }
    }
    ctx->pc = 0x45A11Cu;
    // 0x45a11c: 0x0  nop
    ctx->pc = 0x45a11cu;
    // NOP
label_45a120:
    // 0x45a120: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45a120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45a124: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x45a124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x45a128: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45a128u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x45a12c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45a12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x45a130: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x45A130u;
    {
        const bool branch_taken_0x45a130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45A130u;
        // 0x45a134: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45a130) {
            ctx->pc = 0x45A168u;
            goto label_45a168;
        }
    }
    ctx->pc = 0x45A138u;
    // 0x45a138: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x45a138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45a13c: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45a13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45a140: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45a140u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45a144: 0xf  sync
    ctx->pc = 0x45a144u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45a148: 0x40f  sync.p
    ctx->pc = 0x45a148u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45a14c:
    // 0x45a14c: 0x0  nop
    ctx->pc = 0x45a14cu;
    // NOP
    // 0x45a150: 0x0  nop
    ctx->pc = 0x45a150u;
    // NOP
    // 0x45a154: 0x0  nop
    ctx->pc = 0x45a154u;
    // NOP
    // 0x45a158: 0x0  nop
    ctx->pc = 0x45a158u;
    // NOP
    // 0x45a15c: 0x0  nop
    ctx->pc = 0x45a15cu;
    // NOP
    // 0x45a160: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45A160u;
    {
        const bool branch_taken_0x45a160 = (false);
        if (branch_taken_0x45a160) {
            ctx->pc = 0x45A14Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45a14c;
        }
    }
    ctx->pc = 0x45A168u;
label_45a168:
    // 0x45a168: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45a168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45a16c: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x45a16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x45a170: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45a170u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x10000000
    // 0x45a174: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45a174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x45a178: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x45A178u;
    {
        const bool branch_taken_0x45a178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45A178u;
        // 0x45a17c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45a178) {
            ctx->pc = 0x45A1D4u;
            goto label_45a1d4;
        }
    }
    ctx->pc = 0x45A180u;
    // 0x45a180: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x45a180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45a184: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45a184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45a188: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45a188u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45a18c: 0xf  sync
    ctx->pc = 0x45a18cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45a190: 0x40f  sync.p
    ctx->pc = 0x45a190u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45a194:
    // 0x45a194: 0x0  nop
    ctx->pc = 0x45a194u;
    // NOP
    // 0x45a198: 0x0  nop
    ctx->pc = 0x45a198u;
    // NOP
    // 0x45a19c: 0x0  nop
    ctx->pc = 0x45a19cu;
    // NOP
    // 0x45a1a0: 0x0  nop
    ctx->pc = 0x45a1a0u;
    // NOP
    // 0x45a1a4: 0x0  nop
    ctx->pc = 0x45a1a4u;
    // NOP
    // 0x45a1a8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45A1A8u;
    {
        const bool branch_taken_0x45a1a8 = (false);
        if (branch_taken_0x45a1a8) {
            ctx->pc = 0x45A194u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45a194;
        }
    }
    ctx->pc = 0x45A1B0u;
    // 0x45a1b0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45a1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45a1b4: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45a1b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_45a1b8:
    // 0x45a1b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x45a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45a1bc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45a1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45a1c0: 0x0  nop
    ctx->pc = 0x45a1c0u;
    // NOP
    // 0x45a1c4: 0x0  nop
    ctx->pc = 0x45a1c4u;
    // NOP
    // 0x45a1c8: 0x0  nop
    ctx->pc = 0x45a1c8u;
    // NOP
    // 0x45a1cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45A1CCu;
    {
        const bool branch_taken_0x45a1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45a1cc) {
            ctx->pc = 0x45A1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45a1b8;
        }
    }
    ctx->pc = 0x45A1D4u;
label_45a1d4:
    // 0x45a1d4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45a1d8: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x45a1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x45a1dc: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x45a1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x45a1e0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45a1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45a1e4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x45a1e4u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x45a1e8: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x45a1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x45a1ec: 0x24040f00  addiu       $a0, $zero, 0xF00
    ctx->pc = 0x45a1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3840));
    // 0x45a1f0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45a1f4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x45a1f4u;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x45a1f8: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x45a1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x45a1fc: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x45a1fcu;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 20)); // MMIO: 0x10000000
    // 0x45a200: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45a200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45a204: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x45a204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x45a208: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45a208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45a20c: 0xac6a0000  sw          $t2, 0x0($v1)
    ctx->pc = 0x45a20cu;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 10)); // MMIO: 0x10000000
    // 0x45a210: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x45a210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x45a214: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x45a214u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x45a218: 0xf  sync
    ctx->pc = 0x45a218u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45a21c: 0x40f  sync.p
    ctx->pc = 0x45a21cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45a220: 0x26b9821  addu        $s3, $s3, $t3
    ctx->pc = 0x45a220u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
    // 0x45a224: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x45a224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45a228: 0x28ca021  addu        $s4, $s4, $t4
    ctx->pc = 0x45a228u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 12)));
    // 0x45a22c: 0x68182a  slt         $v1, $v1, $t0
    ctx->pc = 0x45a22cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x45a230: 0x1a0902d  daddu       $s2, $t5, $zero
    ctx->pc = 0x45a230u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45a234: 0x103480b  movn        $t1, $t0, $v1
    ctx->pc = 0x45a234u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 8));
    // 0x45a238: 0x91083  sra         $v0, $t1, 2
    ctx->pc = 0x45a238u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 2));
    // 0x45a23c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x45a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x45a240: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x45a240u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x45a244: 0x0  nop
    ctx->pc = 0x45a244u;
    // NOP
label_45a248:
    // 0x45a248: 0x5a400117  blezl       $s2, . + 4 + (0x117 << 2)
    ctx->pc = 0x45A248u;
    {
        const bool branch_taken_0x45a248 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x45a248) {
            ctx->pc = 0x45A24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x45A248u;
            // 0x45a24c: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x45A6A8u;
            goto label_45a6a8;
        }
    }
    ctx->pc = 0x45A250u;
    // 0x45a250: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x45a250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x45a254: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x45a254u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45a258: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x45a258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x45a25c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x45a25cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_45a260:
    // 0x45a260: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x45a260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45a264: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x45a264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x45a268: 0xe4203f20  swc1        $f0, 0x3F20($at)
    ctx->pc = 0x45a268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F20u, bits); }
    // 0x45a26c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x45a26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45a270: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x45a270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x45a274: 0xe4213f28  swc1        $f1, 0x3F28($at)
    ctx->pc = 0x45a274u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F28u, bits); }
label_45a278:
    // 0x45a278: 0x42000039  di
    ctx->pc = 0x45a278u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x45a27c: 0x40f  sync.p
    ctx->pc = 0x45a27cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45a280: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x45a280u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x45a284: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x45a284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x45a288: 0x0  nop
    ctx->pc = 0x45a288u;
    // NOP
    // 0x45a28c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45A28Cu;
    {
        const bool branch_taken_0x45a28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45a28c) {
            ctx->pc = 0x45A278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45a278;
        }
    }
    ctx->pc = 0x45A294u;
    // 0x45a294: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x45a294u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x45a298: 0xda740000  lqc2        $vf20, 0x0($s3)
    ctx->pc = 0x45a298u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x45a29c: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x45a29cu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45a2a0: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x45a2a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a2a4: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x45a2a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45a2a8: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x45a2a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x45a2ac: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x45a2acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x45a2b0: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x45a2b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45a2b4: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x45a2b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x45a2b8: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x45a2b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x45a2bc: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x45a2bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x45a2c0: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x45a2c0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45a2c4: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x45a2c4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45a2c8: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x45a2c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45a2cc: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x45a2ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x45a2d0: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x45a2d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x45a2d4: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x45a2d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x45a2d8: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x45a2d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x45a2dc: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x45a2dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x45a2e0: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x45a2e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a2e4: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x45a2e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x45a2e8: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x45a2e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45a2ec: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x45a2ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a2f0: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x45a2f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a2f4: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x45a2f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a2f8: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x45a2f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45a2fc: 0x4bc74098  vmulx.xyz   $vf2, $vf8, $vf7x
    ctx->pc = 0x45a2fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45a300: 0x4bc780da  vmulz.xyz   $vf3, $vf16, $vf7z
    ctx->pc = 0x45a300u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x45a304: 0x4bc7491a  vmulz.xyz   $vf4, $vf9, $vf7z
    ctx->pc = 0x45a304u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x45a308: 0x4bc78958  vmulx.xyz   $vf5, $vf17, $vf7x
    ctx->pc = 0x45a308u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x45a30c: 0x4be314ac  vsub.xyzw   $vf18, $vf2, $vf3
    ctx->pc = 0x45a30cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x45a310: 0x4be524e8  vadd.xyzw   $vf19, $vf4, $vf5
    ctx->pc = 0x45a310u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x45a314: 0x4bee99bd  vmulay.xyzw $ACC, $vf19, $vf14y
    ctx->pc = 0x45a314u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a318: 0x4bee90bc  vmaddax.xyzw $ACC, $vf18, $vf14x
    ctx->pc = 0x45a318u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a31c: 0x4be0a54b  vmaddw.xyzw $vf21, $vf20, $vf0w
    ctx->pc = 0x45a31cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x45a320: 0x4bee99bd  vmulay.xyzw $ACC, $vf19, $vf14y
    ctx->pc = 0x45a320u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a324: 0x4bee90be  vmaddaz.xyzw $ACC, $vf18, $vf14z
    ctx->pc = 0x45a324u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a328: 0x4be0a58b  vmaddw.xyzw $vf22, $vf20, $vf0w
    ctx->pc = 0x45a328u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x45a32c: 0x4bee99bf  vmulaw.xyzw $ACC, $vf19, $vf14w
    ctx->pc = 0x45a32cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a330: 0x4bee90be  vmaddaz.xyzw $ACC, $vf18, $vf14z
    ctx->pc = 0x45a330u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a334: 0x4be0a5cb  vmaddw.xyzw $vf23, $vf20, $vf0w
    ctx->pc = 0x45a334u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x45a338: 0x4bee99bf  vmulaw.xyzw $ACC, $vf19, $vf14w
    ctx->pc = 0x45a338u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a33c: 0x4bee90bc  vmaddax.xyzw $ACC, $vf18, $vf14x
    ctx->pc = 0x45a33cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a340: 0x4be0a60b  vmaddw.xyzw $vf24, $vf20, $vf0w
    ctx->pc = 0x45a340u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x45a344: 0xfa950000  sqc2        $vf21, 0x0($s4)
    ctx->pc = 0x45a344u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x45a348: 0xfa960010  sqc2        $vf22, 0x10($s4)
    ctx->pc = 0x45a348u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x45a34c: 0xfa970020  sqc2        $vf23, 0x20($s4)
    ctx->pc = 0x45a34cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x45a350: 0xfa980030  sqc2        $vf24, 0x30($s4)
    ctx->pc = 0x45a350u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x45a354: 0x42000038  ei
    ctx->pc = 0x45a354u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x45a358: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x45a358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45a35c: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x45a35cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x45a360: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x45a360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x45a364: 0x2659821  addu        $s3, $s3, $a1
    ctx->pc = 0x45a364u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x45a368: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x45a368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x45a36c: 0x14e0ffbc  bnez        $a3, . + 4 + (-0x44 << 2)
    ctx->pc = 0x45A36Cu;
    {
        const bool branch_taken_0x45a36c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x45A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45A36Cu;
        // 0x45a370: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45a36c) {
            ctx->pc = 0x45A260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45a260;
        }
    }
    ctx->pc = 0x45A374u;
    // 0x45a374: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x45A374u;
    {
        const bool branch_taken_0x45a374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45A374u;
        // 0x45a378: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45a374) {
            ctx->pc = 0x45A6A8u;
            goto label_45a6a8;
        }
    }
    ctx->pc = 0x45A37Cu;
    // 0x45a37c: 0x0  nop
    ctx->pc = 0x45a37cu;
    // NOP
label_45a380:
    // 0x45a380: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x45a380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x45a384: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x45a384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x45a388: 0xc601006c  lwc1        $f1, 0x6C($s0)
    ctx->pc = 0x45a388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45a38c: 0x46141103  div.s       $f4, $f2, $f20
    ctx->pc = 0x45a38cu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[2], ctx->f[20]); }
    // 0x45a390: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x45a390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45a394: 0x461510c3  div.s       $f3, $f2, $f21
    ctx->pc = 0x45a394u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[2], ctx->f[21]); }
    // 0x45a398: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x45a398u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x45a39c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x45a39cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x45a3a0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x45a3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x45a3a4: 0x46020100  add.s       $f4, $f0, $f2
    ctx->pc = 0x45a3a4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x45a3a8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x45a3a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x45a3ac: 0x460208c0  add.s       $f3, $f1, $f2
    ctx->pc = 0x45a3acu;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x45a3b0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x45a3b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x45a3b4: 0x6aa30007  ldl         $v1, 0x7($s5)
    ctx->pc = 0x45a3b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x45a3b8: 0x6ea30000  ldr         $v1, 0x0($s5)
    ctx->pc = 0x45a3b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x45a3bc: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x45a3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x45a3c0: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x45a3c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x45a3c4: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x45a3c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x45a3c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x45a3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x45a3cc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x45a3ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x45a3d0: 0x6ae30007  ldl         $v1, 0x7($s7)
    ctx->pc = 0x45a3d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x45a3d4: 0x6ee30000  ldr         $v1, 0x0($s7)
    ctx->pc = 0x45a3d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x45a3d8: 0x8ee40008  lw          $a0, 0x8($s7)
    ctx->pc = 0x45a3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x45a3dc: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x45a3dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x45a3e0: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x45a3e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x45a3e4: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x45a3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x45a3e8: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x45a3e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x45a3ec: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x45a3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x45a3f0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x45a3f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x45a3f4: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x45a3f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x45a3f8: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x45a3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_45a3fc:
    // 0x45a3fc: 0x42000039  di
    ctx->pc = 0x45a3fcu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x45a400: 0x40f  sync.p
    ctx->pc = 0x45a400u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45a404: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x45a404u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x45a408: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x45a408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x45a40c: 0x0  nop
    ctx->pc = 0x45a40cu;
    // NOP
    // 0x45a410: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45A410u;
    {
        const bool branch_taken_0x45a410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45a410) {
            ctx->pc = 0x45A3FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45a3fc;
        }
    }
    ctx->pc = 0x45A418u;
    // 0x45a418: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x45a418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x45a41c: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x45a41cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x45a420: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x45a420u;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45a424: 0x4a0002ff  vnop
    ctx->pc = 0x45a424u;
    // NOP operation, no action needed for VU0
    // 0x45a428: 0x4a0002ff  vnop
    ctx->pc = 0x45a428u;
    // NOP operation, no action needed for VU0
    // 0x45a42c: 0x4b0002a2  vaddi.x     $vf10, $vf0, $I
    ctx->pc = 0x45a42cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x45a430: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x45a430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
    // 0x45a434: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x45a434u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x45a438: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x45a438u;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45a43c: 0x4a0002ff  vnop
    ctx->pc = 0x45a43cu;
    // NOP operation, no action needed for VU0
    // 0x45a440: 0x4a0002ff  vnop
    ctx->pc = 0x45a440u;
    // NOP operation, no action needed for VU0
    // 0x45a444: 0x4a8002a2  vaddi.y     $vf10, $vf0, $I
    ctx->pc = 0x45a444u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x45a448: 0x3c044009  lui         $a0, 0x4009
    ctx->pc = 0x45a448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16393 << 16));
    // 0x45a44c: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x45a44cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x45a450: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x45a450u;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45a454: 0x4a0002ff  vnop
    ctx->pc = 0x45a454u;
    // NOP operation, no action needed for VU0
    // 0x45a458: 0x4a0002ff  vnop
    ctx->pc = 0x45a458u;
    // NOP operation, no action needed for VU0
    // 0x45a45c: 0x4a4002a2  vaddi.z     $vf10, $vf0, $I
    ctx->pc = 0x45a45cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x45a460: 0x3c04c049  lui         $a0, 0xC049
    ctx->pc = 0x45a460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49225 << 16));
    // 0x45a464: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x45a464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x45a468: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x45a468u;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45a46c: 0x4a0002ff  vnop
    ctx->pc = 0x45a46cu;
    // NOP operation, no action needed for VU0
    // 0x45a470: 0x4a0002ff  vnop
    ctx->pc = 0x45a470u;
    // NOP operation, no action needed for VU0
    // 0x45a474: 0x4b0002e2  vaddi.x     $vf11, $vf0, $I
    ctx->pc = 0x45a474u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x45a478: 0x3c04c084  lui         $a0, 0xC084
    ctx->pc = 0x45a478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49284 << 16));
    // 0x45a47c: 0x348487ed  ori         $a0, $a0, 0x87ED
    ctx->pc = 0x45a47cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34797);
    // 0x45a480: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x45a480u;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45a484: 0x4a0002ff  vnop
    ctx->pc = 0x45a484u;
    // NOP operation, no action needed for VU0
    // 0x45a488: 0x4a0002ff  vnop
    ctx->pc = 0x45a488u;
    // NOP operation, no action needed for VU0
    // 0x45a48c: 0x4a8002e2  vaddi.y     $vf11, $vf0, $I
    ctx->pc = 0x45a48cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x45a490: 0x3c04b94f  lui         $a0, 0xB94F
    ctx->pc = 0x45a490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47439 << 16));
    // 0x45a494: 0x3484b21f  ori         $a0, $a0, 0xB21F
    ctx->pc = 0x45a494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45599);
    // 0x45a498: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x45a498u;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45a49c: 0x4a0002ff  vnop
    ctx->pc = 0x45a49cu;
    // NOP operation, no action needed for VU0
    // 0x45a4a0: 0x4a0002ff  vnop
    ctx->pc = 0x45a4a0u;
    // NOP operation, no action needed for VU0
    // 0x45a4a4: 0x4a4002e2  vaddi.z     $vf11, $vf0, $I
    ctx->pc = 0x45a4a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x45a4a8: 0x3c04be2a  lui         $a0, 0xBE2A
    ctx->pc = 0x45a4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48682 << 16));
    // 0x45a4ac: 0x3484aaa4  ori         $a0, $a0, 0xAAA4
    ctx->pc = 0x45a4acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43684);
    // 0x45a4b0: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x45a4b0u;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45a4b4: 0x4a0002ff  vnop
    ctx->pc = 0x45a4b4u;
    // NOP operation, no action needed for VU0
    // 0x45a4b8: 0x4a0002ff  vnop
    ctx->pc = 0x45a4b8u;
    // NOP operation, no action needed for VU0
    // 0x45a4bc: 0x4b000322  vaddi.x     $vf12, $vf0, $I
    ctx->pc = 0x45a4bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x45a4c0: 0x3c043c08  lui         $a0, 0x3C08
    ctx->pc = 0x45a4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15368 << 16));
    // 0x45a4c4: 0x3484873e  ori         $a0, $a0, 0x873E
    ctx->pc = 0x45a4c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34622);
    // 0x45a4c8: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x45a4c8u;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45a4cc: 0x4a0002ff  vnop
    ctx->pc = 0x45a4ccu;
    // NOP operation, no action needed for VU0
    // 0x45a4d0: 0x4a0002ff  vnop
    ctx->pc = 0x45a4d0u;
    // NOP operation, no action needed for VU0
    // 0x45a4d4: 0x4a800322  vaddi.y     $vf12, $vf0, $I
    ctx->pc = 0x45a4d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x45a4d8: 0x3c04362e  lui         $a0, 0x362E
    ctx->pc = 0x45a4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)13870 << 16));
    // 0x45a4dc: 0x34849c14  ori         $a0, $a0, 0x9C14
    ctx->pc = 0x45a4dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39956);
    // 0x45a4e0: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x45a4e0u;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45a4e4: 0x4a0002ff  vnop
    ctx->pc = 0x45a4e4u;
    // NOP operation, no action needed for VU0
    // 0x45a4e8: 0x4a0002ff  vnop
    ctx->pc = 0x45a4e8u;
    // NOP operation, no action needed for VU0
    // 0x45a4ec: 0x4a400322  vaddi.z     $vf12, $vf0, $I
    ctx->pc = 0x45a4ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x45a4f0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x45a4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x45a4f4: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x45a4f4u;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45a4f8: 0x4a0002ff  vnop
    ctx->pc = 0x45a4f8u;
    // NOP operation, no action needed for VU0
    // 0x45a4fc: 0x4a0002ff  vnop
    ctx->pc = 0x45a4fcu;
    // NOP operation, no action needed for VU0
    // 0x45a500: 0x4b000362  vaddi.x     $vf13, $vf0, $I
    ctx->pc = 0x45a500u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x45a504: 0x42000038  ei
    ctx->pc = 0x45a504u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x45a508: 0xe7b4003c  swc1        $f20, 0x3C($sp)
    ctx->pc = 0x45a508u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x45a50c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x45a50cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x45a510: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x45a510u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x45a514: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x45a514u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x45a518: 0xe7b40034  swc1        $f20, 0x34($sp)
    ctx->pc = 0x45a518u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x45a51c: 0xe7b5004c  swc1        $f21, 0x4C($sp)
    ctx->pc = 0x45a51cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x45a520: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x45a520u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x45a524: 0xe7b50044  swc1        $f21, 0x44($sp)
    ctx->pc = 0x45a524u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_45a528:
    // 0x45a528: 0x42000039  di
    ctx->pc = 0x45a528u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x45a52c: 0x40f  sync.p
    ctx->pc = 0x45a52cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45a530: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x45a530u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x45a534: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x45a534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x45a538: 0x0  nop
    ctx->pc = 0x45a538u;
    // NOP
    // 0x45a53c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45A53Cu;
    {
        const bool branch_taken_0x45a53c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x45a53c) {
            ctx->pc = 0x45A528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45a528;
        }
    }
    ctx->pc = 0x45A544u;
    // 0x45a544: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x45a544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x45a548: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x45a548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x45a54c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x45a54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x45a550: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x45a550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x45a554: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x45a554u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x45a558: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x45a558u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x45a55c: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x45a55cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45a560: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x45a560u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45a564: 0xdbae0000  lqc2        $vf14, 0x0($sp)
    ctx->pc = 0x45a564u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45a568: 0x4be4122a  vmul.xyzw   $vf8, $vf2, $vf4
    ctx->pc = 0x45a568u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x45a56c: 0x4be41c2a  vmul.xyzw   $vf16, $vf3, $vf4
    ctx->pc = 0x45a56cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x45a570: 0x4be5126a  vmul.xyzw   $vf9, $vf2, $vf5
    ctx->pc = 0x45a570u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x45a574: 0x4be51c6a  vmul.xyzw   $vf17, $vf3, $vf5
    ctx->pc = 0x45a574u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x45a578: 0x42000038  ei
    ctx->pc = 0x45a578u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x45a57c: 0x1a40004a  blez        $s2, . + 4 + (0x4A << 2)
    ctx->pc = 0x45A57Cu;
    {
        const bool branch_taken_0x45a57c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x45A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45A57Cu;
        // 0x45a580: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45a57c) {
            ctx->pc = 0x45A6A8u;
            goto label_45a6a8;
        }
    }
    ctx->pc = 0x45A584u;
    // 0x45a584: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x45a584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x45a588: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x45a588u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45a58c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x45a58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x45a590: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x45a590u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x45a594: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x45a594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_45a598:
    // 0x45a598: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x45a598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45a59c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x45a59cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x45a5a0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x45a5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45a5a4: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x45a5a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_45a5a8:
    // 0x45a5a8: 0x42000039  di
    ctx->pc = 0x45a5a8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x45a5ac: 0x40f  sync.p
    ctx->pc = 0x45a5acu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45a5b0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x45a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x45a5b4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x45a5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x45a5b8: 0x0  nop
    ctx->pc = 0x45a5b8u;
    // NOP
    // 0x45a5bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45A5BCu;
    {
        const bool branch_taken_0x45a5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45a5bc) {
            ctx->pc = 0x45A5A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45a5a8;
        }
    }
    ctx->pc = 0x45A5C4u;
    // 0x45a5c4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x45a5c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x45a5c8: 0xda740000  lqc2        $vf20, 0x0($s3)
    ctx->pc = 0x45a5c8u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x45a5cc: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x45a5ccu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45a5d0: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x45a5d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a5d4: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x45a5d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45a5d8: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x45a5d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x45a5dc: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x45a5dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x45a5e0: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x45a5e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45a5e4: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x45a5e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x45a5e8: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x45a5e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x45a5ec: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x45a5ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x45a5f0: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x45a5f0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45a5f4: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x45a5f4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45a5f8: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x45a5f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45a5fc: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x45a5fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x45a600: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x45a600u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x45a604: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x45a604u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x45a608: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x45a608u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x45a60c: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x45a60cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x45a610: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x45a610u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a614: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x45a614u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x45a618: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x45a618u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45a61c: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x45a61cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a620: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x45a620u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a624: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x45a624u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a628: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x45a628u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45a62c: 0x4bc74098  vmulx.xyz   $vf2, $vf8, $vf7x
    ctx->pc = 0x45a62cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45a630: 0x4bc780da  vmulz.xyz   $vf3, $vf16, $vf7z
    ctx->pc = 0x45a630u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x45a634: 0x4bc7491a  vmulz.xyz   $vf4, $vf9, $vf7z
    ctx->pc = 0x45a634u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x45a638: 0x4bc78958  vmulx.xyz   $vf5, $vf17, $vf7x
    ctx->pc = 0x45a638u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x45a63c: 0x4be314ac  vsub.xyzw   $vf18, $vf2, $vf3
    ctx->pc = 0x45a63cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x45a640: 0x4be524e8  vadd.xyzw   $vf19, $vf4, $vf5
    ctx->pc = 0x45a640u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x45a644: 0x4bee99bd  vmulay.xyzw $ACC, $vf19, $vf14y
    ctx->pc = 0x45a644u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a648: 0x4bee90bc  vmaddax.xyzw $ACC, $vf18, $vf14x
    ctx->pc = 0x45a648u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a64c: 0x4be0a54b  vmaddw.xyzw $vf21, $vf20, $vf0w
    ctx->pc = 0x45a64cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x45a650: 0x4bee99bd  vmulay.xyzw $ACC, $vf19, $vf14y
    ctx->pc = 0x45a650u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a654: 0x4bee90be  vmaddaz.xyzw $ACC, $vf18, $vf14z
    ctx->pc = 0x45a654u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a658: 0x4be0a58b  vmaddw.xyzw $vf22, $vf20, $vf0w
    ctx->pc = 0x45a658u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x45a65c: 0x4bee99bf  vmulaw.xyzw $ACC, $vf19, $vf14w
    ctx->pc = 0x45a65cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a660: 0x4bee90be  vmaddaz.xyzw $ACC, $vf18, $vf14z
    ctx->pc = 0x45a660u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a664: 0x4be0a5cb  vmaddw.xyzw $vf23, $vf20, $vf0w
    ctx->pc = 0x45a664u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x45a668: 0x4bee99bf  vmulaw.xyzw $ACC, $vf19, $vf14w
    ctx->pc = 0x45a668u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a66c: 0x4bee90bc  vmaddax.xyzw $ACC, $vf18, $vf14x
    ctx->pc = 0x45a66cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45a670: 0x4be0a60b  vmaddw.xyzw $vf24, $vf20, $vf0w
    ctx->pc = 0x45a670u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x45a674: 0xfa950000  sqc2        $vf21, 0x0($s4)
    ctx->pc = 0x45a674u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x45a678: 0xfa960010  sqc2        $vf22, 0x10($s4)
    ctx->pc = 0x45a678u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x45a67c: 0xfa970020  sqc2        $vf23, 0x20($s4)
    ctx->pc = 0x45a67cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x45a680: 0xfa980030  sqc2        $vf24, 0x30($s4)
    ctx->pc = 0x45a680u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x45a684: 0x42000038  ei
    ctx->pc = 0x45a684u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x45a688: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x45a688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45a68c: 0x284a021  addu        $s4, $s4, $a0
    ctx->pc = 0x45a68cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x45a690: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x45a690u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x45a694: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x45a694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x45a698: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x45a698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x45a69c: 0x14e0ffbe  bnez        $a3, . + 4 + (-0x42 << 2)
    ctx->pc = 0x45A69Cu;
    {
        const bool branch_taken_0x45a69c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x45A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45A69Cu;
        // 0x45a6a0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45a69c) {
            ctx->pc = 0x45A598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45a598;
        }
    }
    ctx->pc = 0x45A6A4u;
    // 0x45a6a4: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x45a6a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_45a6a8:
    // 0x45a6a8: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x45a6a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x45a6ac: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x45a6acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x45a6b0: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x45a6b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x45a6b4: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x45a6b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x45a6b8: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x45a6b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x45a6bc: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x45a6bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x45a6c0: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x45a6c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x45a6c4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x45a6c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x45a6c8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x45a6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x45a6cc: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x45a6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x45a6d0: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x45a6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x45a6d4: 0x3e00008  jr          $ra
    ctx->pc = 0x45A6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45A6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45A6D4u;
        // 0x45a6d8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45A6D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45A6DCu;
    // 0x45a6dc: 0x0  nop
    ctx->pc = 0x45a6dcu;
    // NOP
    ctx->pc = 0x45a6e0u;
}
