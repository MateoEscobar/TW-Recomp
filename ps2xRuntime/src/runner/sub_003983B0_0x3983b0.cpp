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

// Function: sub_003983B0
// Address: 0x3983b0 - 0x3984f8
void sub_003983B0_0x3983b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003983B0_0x3983b0");
#endif

    switch (ctx->pc) {
        case 0x3983b0u: goto label_3983b0;
        case 0x3983b4u: goto label_3983b4;
        case 0x3983b8u: goto label_3983b8;
        case 0x3983bcu: goto label_3983bc;
        case 0x3983c0u: goto label_3983c0;
        case 0x3983c4u: goto label_3983c4;
        case 0x3983c8u: goto label_3983c8;
        case 0x3983ccu: goto label_3983cc;
        case 0x3983d0u: goto label_3983d0;
        case 0x3983d4u: goto label_3983d4;
        case 0x3983d8u: goto label_3983d8;
        case 0x3983dcu: goto label_3983dc;
        case 0x3983e0u: goto label_3983e0;
        case 0x3983e4u: goto label_3983e4;
        case 0x3983e8u: goto label_3983e8;
        case 0x3983ecu: goto label_3983ec;
        case 0x3983f0u: goto label_3983f0;
        case 0x3983f4u: goto label_3983f4;
        case 0x3983f8u: goto label_3983f8;
        case 0x3983fcu: goto label_3983fc;
        case 0x398400u: goto label_398400;
        case 0x398404u: goto label_398404;
        case 0x398408u: goto label_398408;
        case 0x39840cu: goto label_39840c;
        case 0x398410u: goto label_398410;
        case 0x398414u: goto label_398414;
        case 0x398418u: goto label_398418;
        case 0x39841cu: goto label_39841c;
        case 0x398420u: goto label_398420;
        case 0x398424u: goto label_398424;
        case 0x398428u: goto label_398428;
        case 0x39842cu: goto label_39842c;
        case 0x398430u: goto label_398430;
        case 0x398434u: goto label_398434;
        case 0x398438u: goto label_398438;
        case 0x39843cu: goto label_39843c;
        case 0x398440u: goto label_398440;
        case 0x398444u: goto label_398444;
        case 0x398448u: goto label_398448;
        case 0x39844cu: goto label_39844c;
        case 0x398450u: goto label_398450;
        case 0x398454u: goto label_398454;
        case 0x398458u: goto label_398458;
        case 0x39845cu: goto label_39845c;
        case 0x398460u: goto label_398460;
        case 0x398464u: goto label_398464;
        case 0x398468u: goto label_398468;
        case 0x39846cu: goto label_39846c;
        case 0x398470u: goto label_398470;
        case 0x398474u: goto label_398474;
        case 0x398478u: goto label_398478;
        case 0x39847cu: goto label_39847c;
        case 0x398480u: goto label_398480;
        case 0x398484u: goto label_398484;
        case 0x398488u: goto label_398488;
        case 0x39848cu: goto label_39848c;
        case 0x398490u: goto label_398490;
        case 0x398494u: goto label_398494;
        case 0x398498u: goto label_398498;
        case 0x39849cu: goto label_39849c;
        case 0x3984a0u: goto label_3984a0;
        case 0x3984a4u: goto label_3984a4;
        case 0x3984a8u: goto label_3984a8;
        case 0x3984acu: goto label_3984ac;
        case 0x3984b0u: goto label_3984b0;
        case 0x3984b4u: goto label_3984b4;
        case 0x3984b8u: goto label_3984b8;
        case 0x3984bcu: goto label_3984bc;
        case 0x3984c0u: goto label_3984c0;
        case 0x3984c4u: goto label_3984c4;
        case 0x3984c8u: goto label_3984c8;
        case 0x3984ccu: goto label_3984cc;
        case 0x3984d0u: goto label_3984d0;
        case 0x3984d4u: goto label_3984d4;
        case 0x3984d8u: goto label_3984d8;
        case 0x3984dcu: goto label_3984dc;
        case 0x3984e0u: goto label_3984e0;
        case 0x3984e4u: goto label_3984e4;
        case 0x3984e8u: goto label_3984e8;
        case 0x3984ecu: goto label_3984ec;
        case 0x3984f0u: goto label_3984f0;
        case 0x3984f4u: goto label_3984f4;
        default: break;
    }

    ctx->pc = 0x3983b0u;

label_3983b0:
    // 0x3983b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3983b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3983b4:
    // 0x3983b4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3983b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3983b8:
    // 0x3983b8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3983b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3983bc:
    // 0x3983bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3983bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3983c0:
    // 0x3983c0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3983c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_3983c4:
    // 0x3983c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3983c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3983c8:
    // 0x3983c8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3983c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_3983cc:
    // 0x3983cc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3983ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3983d0:
    // 0x3983d0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3983d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3983d4:
    // 0x3983d4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3983d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3983d8:
    // 0x3983d8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3983d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3983dc:
    // 0x3983dc: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3983dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_3983e0:
    // 0x3983e0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3983e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_3983e4:
    // 0x3983e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3983e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3983e8:
    // 0x3983e8: 0x96020018  lhu         $v0, 0x18($s0)
    ctx->pc = 0x3983e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_3983ec:
    // 0x3983ec: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_3983f0:
    if (ctx->pc == 0x3983F0u) {
        ctx->pc = 0x3983F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3983ECu;
        // 0x3983f0: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3983F4u;
        goto label_3983f4;
    }
    ctx->pc = 0x3983ECu;
    {
        const bool branch_taken_0x3983ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3983F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3983ECu;
        // 0x3983f0: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3983ec) {
            ctx->pc = 0x3984C8u;
            goto label_3984c8;
        }
    }
    ctx->pc = 0x3983F4u;
label_3983f4:
    // 0x3983f4: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x3983f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3983f8:
    // 0x3983f8: 0x3c14fffb  lui         $s4, 0xFFFB
    ctx->pc = 0x3983f8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65531 << 16));
label_3983fc:
    // 0x3983fc: 0x3c13ffef  lui         $s3, 0xFFEF
    ctx->pc = 0x3983fcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65519 << 16));
label_398400:
    // 0x398400: 0x2b480  sll         $s6, $v0, 18
    ctx->pc = 0x398400u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
label_398404:
    // 0x398404: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x398404u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
label_398408:
    // 0x398408: 0x3c1e0080  lui         $fp, 0x80
    ctx->pc = 0x398408u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)128 << 16));
label_39840c:
    // 0x39840c: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x39840cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
label_398410:
    // 0x398410: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x398410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398414:
    // 0x398414: 0x0  nop
    ctx->pc = 0x398414u;
    // NOP
label_398418:
    // 0x398418: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x398418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_39841c:
    // 0x39841c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x39841cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_398420:
    // 0x398420: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x398420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_398424:
    // 0x398424: 0x21582  srl         $v0, $v0, 22
    ctx->pc = 0x398424u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 22));
label_398428:
    // 0x398428: 0x54570023  bnel        $v0, $s7, . + 4 + (0x23 << 2)
label_39842c:
    if (ctx->pc == 0x39842Cu) {
        ctx->pc = 0x39842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398428u;
        // 0x39842c: 0x96020018  lhu         $v0, 0x18($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398430u;
        goto label_398430;
    }
    ctx->pc = 0x398428u;
    {
        const bool branch_taken_0x398428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x398428) {
            ctx->pc = 0x39842Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398428u;
            // 0x39842c: 0x96020018  lhu         $v0, 0x18($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3984B8u;
            goto label_3984b8;
        }
    }
    ctx->pc = 0x398430u;
label_398430:
    // 0x398430: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x398430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_398434:
    // 0x398434: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x398434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
label_398438:
    // 0x398438: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x398438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
label_39843c:
    // 0x39843c: 0x16a0001d  bnez        $s5, . + 4 + (0x1D << 2)
label_398440:
    if (ctx->pc == 0x398440u) {
        ctx->pc = 0x398440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39843Cu;
        // 0x398440: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398444u;
        goto label_398444;
    }
    ctx->pc = 0x39843Cu;
    {
        const bool branch_taken_0x39843c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x398440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39843Cu;
        // 0x398440: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39843c) {
            ctx->pc = 0x3984B4u;
            goto label_3984b4;
        }
    }
    ctx->pc = 0x398444u;
label_398444:
    // 0x398444: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x398444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_398448:
    // 0x398448: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x398448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39844c:
    // 0x39844c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x39844cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_398450:
    // 0x398450: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x398450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_398454:
    // 0x398454: 0x21442  srl         $v0, $v0, 17
    ctx->pc = 0x398454u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 17));
label_398458:
    // 0x398458: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x398458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_39845c:
    // 0x39845c: 0x54440011  bnel        $v0, $a0, . + 4 + (0x11 << 2)
label_398460:
    if (ctx->pc == 0x398460u) {
        ctx->pc = 0x398460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39845Cu;
        // 0x398460: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398464u;
        goto label_398464;
    }
    ctx->pc = 0x39845Cu;
    {
        const bool branch_taken_0x39845c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x39845c) {
            ctx->pc = 0x398460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39845Cu;
            // 0x398460: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3984A4u;
            goto label_3984a4;
        }
    }
    ctx->pc = 0x398464u;
label_398464:
    // 0x398464: 0xc0e404c  jal         func_390130
label_398468:
    if (ctx->pc == 0x398468u) {
        ctx->pc = 0x398468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398464u;
        // 0x398468: 0x84640024  lh          $a0, 0x24($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39846Cu;
        goto label_39846c;
    }
    ctx->pc = 0x398464u;
    SET_GPR_U32(ctx, 31, 0x39846Cu);
    ctx->pc = 0x398468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398464u;
    // 0x398468: 0x84640024  lh          $a0, 0x24($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x398464u, 0x39846Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39846Cu;
label_39846c:
    // 0x39846c: 0xc0e57ce  jal         func_395F38
label_398470:
    if (ctx->pc == 0x398470u) {
        ctx->pc = 0x398470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39846Cu;
        // 0x398470: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398474u;
        goto label_398474;
    }
    ctx->pc = 0x39846Cu;
    SET_GPR_U32(ctx, 31, 0x398474u);
    ctx->pc = 0x398470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39846Cu;
    // 0x398470: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x39846Cu, 0x398474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398474u;
label_398474:
    // 0x398474: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x398474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_398478:
    // 0x398478: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x398478u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_39847c:
    // 0x39847c: 0x8c650054  lw          $a1, 0x54($v1)
    ctx->pc = 0x39847cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_398480:
    // 0x398480: 0xa0f809  jalr        $a1
label_398484:
    if (ctx->pc == 0x398484u) {
        ctx->pc = 0x398484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398480u;
        // 0x398484: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398488u;
        goto label_398488;
    }
    ctx->pc = 0x398480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x398488u);
        ctx->pc = 0x398484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398480u;
        // 0x398484: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398480u, 0x398488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398488u;
label_398488:
    // 0x398488: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x398488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
label_39848c:
    // 0x39848c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_398490:
    if (ctx->pc == 0x398490u) {
        ctx->pc = 0x398490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39848Cu;
        // 0x398490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398494u;
        goto label_398494;
    }
    ctx->pc = 0x39848Cu;
    {
        const bool branch_taken_0x39848c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x398490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39848Cu;
        // 0x398490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39848c) {
            ctx->pc = 0x3984A0u;
            goto label_3984a0;
        }
    }
    ctx->pc = 0x398494u;
label_398494:
    // 0x398494: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x398494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_398498:
    // 0x398498: 0xc0e650a  jal         func_399428
label_39849c:
    if (ctx->pc == 0x39849Cu) {
        ctx->pc = 0x39849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398498u;
        // 0x39849c: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3984A0u;
        goto label_3984a0;
    }
    ctx->pc = 0x398498u;
    SET_GPR_U32(ctx, 31, 0x3984A0u);
    ctx->pc = 0x39849Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398498u;
    // 0x39849c: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399428u, 0x398498u, 0x3984A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3984A0u;
label_3984a0:
    // 0x3984a0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x3984a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3984a4:
    // 0x3984a4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3984a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_3984a8:
    // 0x3984a8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3984a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3984ac:
    // 0x3984ac: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x3984acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_3984b0:
    // 0x3984b0: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x3984b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
label_3984b4:
    // 0x3984b4: 0x96020018  lhu         $v0, 0x18($s0)
    ctx->pc = 0x3984b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_3984b8:
    // 0x3984b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3984b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3984bc:
    // 0x3984bc: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x3984bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3984c0:
    // 0x3984c0: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_3984c4:
    if (ctx->pc == 0x3984C4u) {
        ctx->pc = 0x3984C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3984C0u;
        // 0x3984c4: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3984C8u;
        goto label_3984c8;
    }
    ctx->pc = 0x3984C0u;
    {
        const bool branch_taken_0x3984c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3984C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3984C0u;
        // 0x3984c4: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3984c0) {
            ctx->pc = 0x398418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398418;
        }
    }
    ctx->pc = 0x3984C8u;
label_3984c8:
    // 0x3984c8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3984c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3984cc:
    // 0x3984cc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3984ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3984d0:
    // 0x3984d0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3984d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3984d4:
    // 0x3984d4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3984d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3984d8:
    // 0x3984d8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3984d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3984dc:
    // 0x3984dc: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3984dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3984e0:
    // 0x3984e0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3984e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3984e4:
    // 0x3984e4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3984e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3984e8:
    // 0x3984e8: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3984e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3984ec:
    // 0x3984ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3984ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3984f0:
    // 0x3984f0: 0x3e00008  jr          $ra
label_3984f4:
    if (ctx->pc == 0x3984F4u) {
        ctx->pc = 0x3984F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3984F0u;
        // 0x3984f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3984F8u;
        goto label_fallthrough_0x3984f0;
    }
    ctx->pc = 0x3984F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3984F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3984F0u;
        // 0x3984f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3984F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3984f0:
    ctx->pc = 0x3984F8u;
}
