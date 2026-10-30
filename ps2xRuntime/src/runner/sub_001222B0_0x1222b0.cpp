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

// Function: sub_001222B0
// Address: 0x1222b0 - 0x122438
void sub_001222B0_0x1222b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001222B0_0x1222b0");
#endif

    switch (ctx->pc) {
        case 0x1222b0u: goto label_1222b0;
        case 0x1222b4u: goto label_1222b4;
        case 0x1222b8u: goto label_1222b8;
        case 0x1222bcu: goto label_1222bc;
        case 0x1222c0u: goto label_1222c0;
        case 0x1222c4u: goto label_1222c4;
        case 0x1222c8u: goto label_1222c8;
        case 0x1222ccu: goto label_1222cc;
        case 0x1222d0u: goto label_1222d0;
        case 0x1222d4u: goto label_1222d4;
        case 0x1222d8u: goto label_1222d8;
        case 0x1222dcu: goto label_1222dc;
        case 0x1222e0u: goto label_1222e0;
        case 0x1222e4u: goto label_1222e4;
        case 0x1222e8u: goto label_1222e8;
        case 0x1222ecu: goto label_1222ec;
        case 0x1222f0u: goto label_1222f0;
        case 0x1222f4u: goto label_1222f4;
        case 0x1222f8u: goto label_1222f8;
        case 0x1222fcu: goto label_1222fc;
        case 0x122300u: goto label_122300;
        case 0x122304u: goto label_122304;
        case 0x122308u: goto label_122308;
        case 0x12230cu: goto label_12230c;
        case 0x122310u: goto label_122310;
        case 0x122314u: goto label_122314;
        case 0x122318u: goto label_122318;
        case 0x12231cu: goto label_12231c;
        case 0x122320u: goto label_122320;
        case 0x122324u: goto label_122324;
        case 0x122328u: goto label_122328;
        case 0x12232cu: goto label_12232c;
        case 0x122330u: goto label_122330;
        case 0x122334u: goto label_122334;
        case 0x122338u: goto label_122338;
        case 0x12233cu: goto label_12233c;
        case 0x122340u: goto label_122340;
        case 0x122344u: goto label_122344;
        case 0x122348u: goto label_122348;
        case 0x12234cu: goto label_12234c;
        case 0x122350u: goto label_122350;
        case 0x122354u: goto label_122354;
        case 0x122358u: goto label_122358;
        case 0x12235cu: goto label_12235c;
        case 0x122360u: goto label_122360;
        case 0x122364u: goto label_122364;
        case 0x122368u: goto label_122368;
        case 0x12236cu: goto label_12236c;
        case 0x122370u: goto label_122370;
        case 0x122374u: goto label_122374;
        case 0x122378u: goto label_122378;
        case 0x12237cu: goto label_12237c;
        case 0x122380u: goto label_122380;
        case 0x122384u: goto label_122384;
        case 0x122388u: goto label_122388;
        case 0x12238cu: goto label_12238c;
        case 0x122390u: goto label_122390;
        case 0x122394u: goto label_122394;
        case 0x122398u: goto label_122398;
        case 0x12239cu: goto label_12239c;
        case 0x1223a0u: goto label_1223a0;
        case 0x1223a4u: goto label_1223a4;
        case 0x1223a8u: goto label_1223a8;
        case 0x1223acu: goto label_1223ac;
        case 0x1223b0u: goto label_1223b0;
        case 0x1223b4u: goto label_1223b4;
        case 0x1223b8u: goto label_1223b8;
        case 0x1223bcu: goto label_1223bc;
        case 0x1223c0u: goto label_1223c0;
        case 0x1223c4u: goto label_1223c4;
        case 0x1223c8u: goto label_1223c8;
        case 0x1223ccu: goto label_1223cc;
        case 0x1223d0u: goto label_1223d0;
        case 0x1223d4u: goto label_1223d4;
        case 0x1223d8u: goto label_1223d8;
        case 0x1223dcu: goto label_1223dc;
        case 0x1223e0u: goto label_1223e0;
        case 0x1223e4u: goto label_1223e4;
        case 0x1223e8u: goto label_1223e8;
        case 0x1223ecu: goto label_1223ec;
        case 0x1223f0u: goto label_1223f0;
        case 0x1223f4u: goto label_1223f4;
        case 0x1223f8u: goto label_1223f8;
        case 0x1223fcu: goto label_1223fc;
        case 0x122400u: goto label_122400;
        case 0x122404u: goto label_122404;
        case 0x122408u: goto label_122408;
        case 0x12240cu: goto label_12240c;
        case 0x122410u: goto label_122410;
        case 0x122414u: goto label_122414;
        case 0x122418u: goto label_122418;
        case 0x12241cu: goto label_12241c;
        case 0x122420u: goto label_122420;
        case 0x122424u: goto label_122424;
        case 0x122428u: goto label_122428;
        case 0x12242cu: goto label_12242c;
        case 0x122430u: goto label_122430;
        case 0x122434u: goto label_122434;
        default: break;
    }

    ctx->pc = 0x1222b0u;

label_1222b0:
    // 0x1222b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1222b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1222b4:
    // 0x1222b4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1222b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1222b8:
    // 0x1222b8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1222b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_1222bc:
    // 0x1222bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1222bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1222c0:
    // 0x1222c0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1222c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1222c4:
    // 0x1222c4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1222c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1222c8:
    // 0x1222c8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1222c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1222cc:
    // 0x1222cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1222ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1222d0:
    // 0x1222d0: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_1222d4:
    if (ctx->pc == 0x1222D4u) {
        ctx->pc = 0x1222D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1222D0u;
        // 0x1222d4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1222D8u;
        goto label_1222d8;
    }
    ctx->pc = 0x1222D0u;
    {
        const bool branch_taken_0x1222d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1222D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1222D0u;
        // 0x1222d4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1222d0) {
            ctx->pc = 0x1222F0u;
            goto label_1222f0;
        }
    }
    ctx->pc = 0x1222D8u;
label_1222d8:
    // 0x1222d8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1222d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_1222dc:
    // 0x1222dc: 0x244491a8  addiu       $a0, $v0, -0x6E58
    ctx->pc = 0x1222dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939048));
label_1222e0:
    // 0x1222e0: 0xc136b50  jal         func_4DAD40
label_1222e4:
    if (ctx->pc == 0x1222E4u) {
        ctx->pc = 0x1222E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1222E0u;
        // 0x1222e4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1222E8u;
        goto label_1222e8;
    }
    ctx->pc = 0x1222E0u;
    SET_GPR_U32(ctx, 31, 0x1222E8u);
    ctx->pc = 0x1222E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1222E0u;
    // 0x1222e4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAD40u, 0x1222E0u, 0x1222E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1222E8u;
label_1222e8:
    // 0x1222e8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1222ec:
    if (ctx->pc == 0x1222ECu) {
        ctx->pc = 0x1222ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1222E8u;
        // 0x1222ec: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1222F0u;
        goto label_1222f0;
    }
    ctx->pc = 0x1222E8u;
    {
        const bool branch_taken_0x1222e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1222ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1222E8u;
        // 0x1222ec: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1222e8) {
            ctx->pc = 0x122304u;
            goto label_122304;
        }
    }
    ctx->pc = 0x1222F0u;
label_1222f0:
    // 0x1222f0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1222f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_1222f4:
    // 0x1222f4: 0x244491a8  addiu       $a0, $v0, -0x6E58
    ctx->pc = 0x1222f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939048));
label_1222f8:
    // 0x1222f8: 0xc136ba4  jal         func_4DAE90
label_1222fc:
    if (ctx->pc == 0x1222FCu) {
        ctx->pc = 0x1222FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1222F8u;
        // 0x1222fc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122300u;
        goto label_122300;
    }
    ctx->pc = 0x1222F8u;
    SET_GPR_U32(ctx, 31, 0x122300u);
    ctx->pc = 0x1222FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1222F8u;
    // 0x1222fc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE90u, 0x1222F8u, 0x122300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122300u;
label_122300:
    // 0x122300: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x122300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_122304:
    // 0x122304: 0xac62b194  sw          $v0, -0x4E6C($v1)
    ctx->pc = 0x122304u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947220), GPR_U32(ctx, 2));
label_122308:
    // 0x122308: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x122308u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_12230c:
    // 0x12230c: 0x8e42b194  lw          $v0, -0x4E6C($s2)
    ctx->pc = 0x12230cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294947220)));
label_122310:
    // 0x122310: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x122310u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_122314:
    // 0x122314: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_122318:
    if (ctx->pc == 0x122318u) {
        ctx->pc = 0x122318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122314u;
        // 0x122318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12231Cu;
        goto label_12231c;
    }
    ctx->pc = 0x122314u;
    {
        const bool branch_taken_0x122314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122314u;
        // 0x122318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122314) {
            ctx->pc = 0x122418u;
            goto label_122418;
        }
    }
    ctx->pc = 0x12231Cu;
label_12231c:
    // 0x12231c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x12231cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_122320:
    // 0x122320: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x122320u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_122324:
    // 0x122324: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x122324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_122328:
    // 0x122328: 0x40f809  jalr        $v0
label_12232c:
    if (ctx->pc == 0x12232Cu) {
        ctx->pc = 0x12232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122328u;
        // 0x12232c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122330u;
        goto label_122330;
    }
    ctx->pc = 0x122328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x122330u);
        ctx->pc = 0x12232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122328u;
        // 0x12232c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122328u, 0x122330u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x122330u;
label_122330:
    // 0x122330: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x122330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_122334:
    // 0x122334: 0xc0e4060  jal         func_390180
label_122338:
    if (ctx->pc == 0x122338u) {
        ctx->pc = 0x122338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122334u;
        // 0x122338: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12233Cu;
        goto label_12233c;
    }
    ctx->pc = 0x122334u;
    SET_GPR_U32(ctx, 31, 0x12233Cu);
    ctx->pc = 0x122338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122334u;
    // 0x122338: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x122334u, 0x12233Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12233Cu;
label_12233c:
    // 0x12233c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_122340:
    if (ctx->pc == 0x122340u) {
        ctx->pc = 0x122340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12233Cu;
        // 0x122340: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122344u;
        goto label_122344;
    }
    ctx->pc = 0x12233Cu;
    {
        const bool branch_taken_0x12233c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12233Cu;
        // 0x122340: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12233c) {
            ctx->pc = 0x122414u;
            goto label_122414;
        }
    }
    ctx->pc = 0x122344u;
label_122344:
    // 0x122344: 0xc0e409a  jal         func_390268
label_122348:
    if (ctx->pc == 0x122348u) {
        ctx->pc = 0x122348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122344u;
        // 0x122348: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12234Cu;
        goto label_12234c;
    }
    ctx->pc = 0x122344u;
    SET_GPR_U32(ctx, 31, 0x12234Cu);
    ctx->pc = 0x122348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122344u;
    // 0x122348: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x122344u, 0x12234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12234Cu;
label_12234c:
    // 0x12234c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_122350:
    if (ctx->pc == 0x122350u) {
        ctx->pc = 0x122350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12234Cu;
        // 0x122350: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122354u;
        goto label_122354;
    }
    ctx->pc = 0x12234Cu;
    {
        const bool branch_taken_0x12234c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12234c) {
            ctx->pc = 0x122350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12234Cu;
            // 0x122350: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122364u;
            goto label_122364;
        }
    }
    ctx->pc = 0x122354u;
label_122354:
    // 0x122354: 0x804201b0  lb          $v0, 0x1B0($v0)
    ctx->pc = 0x122354u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_122358:
    // 0x122358: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x122358u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_12235c:
    // 0x12235c: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x12235cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_122360:
    // 0x122360: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x122360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122364:
    // 0x122364: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
label_122368:
    if (ctx->pc == 0x122368u) {
        ctx->pc = 0x122368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122364u;
        // 0x122368: 0x267091a8  addiu       $s0, $s3, -0x6E58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12236Cu;
        goto label_12236c;
    }
    ctx->pc = 0x122364u;
    {
        const bool branch_taken_0x122364 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x122368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122364u;
        // 0x122368: 0x267091a8  addiu       $s0, $s3, -0x6E58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122364) {
            ctx->pc = 0x122384u;
            goto label_122384;
        }
    }
    ctx->pc = 0x12236Cu;
label_12236c:
    // 0x12236c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12236cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_122370:
    // 0x122370: 0xc136b98  jal         func_4DAE60
label_122374:
    if (ctx->pc == 0x122374u) {
        ctx->pc = 0x122374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122370u;
        // 0x122374: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122378u;
        goto label_122378;
    }
    ctx->pc = 0x122370u;
    SET_GPR_U32(ctx, 31, 0x122378u);
    ctx->pc = 0x122374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122370u;
    // 0x122374: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE60u, 0x122370u, 0x122378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122378u;
label_122378:
    // 0x122378: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x122378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12237c:
    // 0x12237c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_122380:
    if (ctx->pc == 0x122380u) {
        ctx->pc = 0x122380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12237Cu;
        // 0x122380: 0x8e43b194  lw          $v1, -0x4E6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294947220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122384u;
        goto label_122384;
    }
    ctx->pc = 0x12237Cu;
    {
        const bool branch_taken_0x12237c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x122380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12237Cu;
        // 0x122380: 0x8e43b194  lw          $v1, -0x4E6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294947220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12237c) {
            ctx->pc = 0x1223A0u;
            goto label_1223a0;
        }
    }
    ctx->pc = 0x122384u;
label_122384:
    // 0x122384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x122384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_122388:
    // 0x122388: 0xc136bd4  jal         func_4DAF50
label_12238c:
    if (ctx->pc == 0x12238Cu) {
        ctx->pc = 0x12238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122388u;
        // 0x12238c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122390u;
        goto label_122390;
    }
    ctx->pc = 0x122388u;
    SET_GPR_U32(ctx, 31, 0x122390u);
    ctx->pc = 0x12238Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122388u;
    // 0x12238c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAF50u, 0x122388u, 0x122390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122390u;
label_122390:
    // 0x122390: 0x8e42b194  lw          $v0, -0x4E6C($s2)
    ctx->pc = 0x122390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294947220)));
label_122394:
    // 0x122394: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x122394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_122398:
    // 0x122398: 0xae42b194  sw          $v0, -0x4E6C($s2)
    ctx->pc = 0x122398u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294947220), GPR_U32(ctx, 2));
label_12239c:
    // 0x12239c: 0x8e43b194  lw          $v1, -0x4E6C($s2)
    ctx->pc = 0x12239cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294947220)));
label_1223a0:
    // 0x1223a0: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x1223a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1223a4:
    // 0x1223a4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_1223a8:
    if (ctx->pc == 0x1223A8u) {
        ctx->pc = 0x1223ACu;
        goto label_1223ac;
    }
    ctx->pc = 0x1223A4u;
    {
        const bool branch_taken_0x1223a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1223a4) {
            ctx->pc = 0x1223F8u;
            goto label_1223f8;
        }
    }
    ctx->pc = 0x1223ACu;
label_1223ac:
    // 0x1223ac: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_1223b0:
    if (ctx->pc == 0x1223B0u) {
        ctx->pc = 0x1223B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223ACu;
        // 0x1223b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1223B4u;
        goto label_1223b4;
    }
    ctx->pc = 0x1223ACu;
    {
        const bool branch_taken_0x1223ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1223B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223ACu;
        // 0x1223b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1223ac) {
            ctx->pc = 0x1223F8u;
            goto label_1223f8;
        }
    }
    ctx->pc = 0x1223B4u;
label_1223b4:
    // 0x1223b4: 0x266491a8  addiu       $a0, $s3, -0x6E58
    ctx->pc = 0x1223b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939048));
label_1223b8:
    // 0x1223b8: 0xc136b7c  jal         func_4DADF0
label_1223bc:
    if (ctx->pc == 0x1223BCu) {
        ctx->pc = 0x1223BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223B8u;
        // 0x1223bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1223C0u;
        goto label_1223c0;
    }
    ctx->pc = 0x1223B8u;
    SET_GPR_U32(ctx, 31, 0x1223C0u);
    ctx->pc = 0x1223BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1223B8u;
    // 0x1223bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DADF0u, 0x1223B8u, 0x1223C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1223C0u;
label_1223c0:
    // 0x1223c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1223c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1223c4:
    // 0x1223c4: 0x27a40004  addiu       $a0, $sp, 0x4
    ctx->pc = 0x1223c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1223c8:
    // 0x1223c8: 0xc0e409a  jal         func_390268
label_1223cc:
    if (ctx->pc == 0x1223CCu) {
        ctx->pc = 0x1223CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223C8u;
        // 0x1223cc: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1223D0u;
        goto label_1223d0;
    }
    ctx->pc = 0x1223C8u;
    SET_GPR_U32(ctx, 31, 0x1223D0u);
    ctx->pc = 0x1223CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1223C8u;
    // 0x1223cc: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1223C8u, 0x1223D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1223D0u;
label_1223d0:
    // 0x1223d0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1223d4:
    if (ctx->pc == 0x1223D4u) {
        ctx->pc = 0x1223D8u;
        goto label_1223d8;
    }
    ctx->pc = 0x1223D0u;
    {
        const bool branch_taken_0x1223d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1223d0) {
            ctx->pc = 0x1223F8u;
            goto label_1223f8;
        }
    }
    ctx->pc = 0x1223D8u;
label_1223d8:
    // 0x1223d8: 0x804201b0  lb          $v0, 0x1B0($v0)
    ctx->pc = 0x1223d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
label_1223dc:
    // 0x1223dc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1223dcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_1223e0:
    // 0x1223e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1223e4:
    if (ctx->pc == 0x1223E4u) {
        ctx->pc = 0x1223E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223E0u;
        // 0x1223e4: 0x8e42b194  lw          $v0, -0x4E6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294947220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1223E8u;
        goto label_1223e8;
    }
    ctx->pc = 0x1223E0u;
    {
        const bool branch_taken_0x1223e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1223E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223E0u;
        // 0x1223e4: 0x8e42b194  lw          $v0, -0x4E6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294947220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1223e0) {
            ctx->pc = 0x1223F8u;
            goto label_1223f8;
        }
    }
    ctx->pc = 0x1223E8u;
label_1223e8:
    // 0x1223e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1223e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1223ec:
    // 0x1223ec: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1223ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1223f0:
    // 0x1223f0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_1223f4:
    if (ctx->pc == 0x1223F4u) {
        ctx->pc = 0x1223F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223F0u;
        // 0x1223f4: 0x266491a8  addiu       $a0, $s3, -0x6E58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1223F8u;
        goto label_1223f8;
    }
    ctx->pc = 0x1223F0u;
    {
        const bool branch_taken_0x1223f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1223F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223F0u;
        // 0x1223f4: 0x266491a8  addiu       $a0, $s3, -0x6E58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1223f0) {
            ctx->pc = 0x1223B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1223b8;
        }
    }
    ctx->pc = 0x1223F8u;
label_1223f8:
    // 0x1223f8: 0x56800007  bnel        $s4, $zero, . + 4 + (0x7 << 2)
label_1223fc:
    if (ctx->pc == 0x1223FCu) {
        ctx->pc = 0x1223FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223F8u;
        // 0x1223fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122400u;
        goto label_122400;
    }
    ctx->pc = 0x1223F8u;
    {
        const bool branch_taken_0x1223f8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1223f8) {
            ctx->pc = 0x1223FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1223F8u;
            // 0x1223fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122418u;
            goto label_122418;
        }
    }
    ctx->pc = 0x122400u;
label_122400:
    // 0x122400: 0xc136b50  jal         func_4DAD40
label_122404:
    if (ctx->pc == 0x122404u) {
        ctx->pc = 0x122404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122400u;
        // 0x122404: 0x266491a8  addiu       $a0, $s3, -0x6E58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122408u;
        goto label_122408;
    }
    ctx->pc = 0x122400u;
    SET_GPR_U32(ctx, 31, 0x122408u);
    ctx->pc = 0x122404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122400u;
    // 0x122404: 0x266491a8  addiu       $a0, $s3, -0x6E58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAD40u, 0x122400u, 0x122408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122408u;
label_122408:
    // 0x122408: 0xae42b194  sw          $v0, -0x4E6C($s2)
    ctx->pc = 0x122408u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294947220), GPR_U32(ctx, 2));
label_12240c:
    // 0x12240c: 0x10000002  b           . + 4 + (0x2 << 2)
label_122410:
    if (ctx->pc == 0x122410u) {
        ctx->pc = 0x122410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12240Cu;
        // 0x122410: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122414u;
        goto label_122414;
    }
    ctx->pc = 0x12240Cu;
    {
        const bool branch_taken_0x12240c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12240Cu;
        // 0x122410: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12240c) {
            ctx->pc = 0x122418u;
            goto label_122418;
        }
    }
    ctx->pc = 0x122414u;
label_122414:
    // 0x122414: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x122414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122418:
    // 0x122418: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x122418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_12241c:
    // 0x12241c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x12241cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_122420:
    // 0x122420: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x122420u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_122424:
    // 0x122424: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x122424u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_122428:
    // 0x122428: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x122428u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12242c:
    // 0x12242c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12242cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_122430:
    // 0x122430: 0x3e00008  jr          $ra
label_122434:
    if (ctx->pc == 0x122434u) {
        ctx->pc = 0x122434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122430u;
        // 0x122434: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122438u;
        goto label_fallthrough_0x122430;
    }
    ctx->pc = 0x122430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122430u;
        // 0x122434: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x122430:
    ctx->pc = 0x122438u;
}
