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

// Function: sub_00264178
// Address: 0x264178 - 0x264460
void sub_00264178_0x264178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264178_0x264178");
#endif

    switch (ctx->pc) {
        case 0x264178u: goto label_264178;
        case 0x26417cu: goto label_26417c;
        case 0x264180u: goto label_264180;
        case 0x264184u: goto label_264184;
        case 0x264188u: goto label_264188;
        case 0x26418cu: goto label_26418c;
        case 0x264190u: goto label_264190;
        case 0x264194u: goto label_264194;
        case 0x264198u: goto label_264198;
        case 0x26419cu: goto label_26419c;
        case 0x2641a0u: goto label_2641a0;
        case 0x2641a4u: goto label_2641a4;
        case 0x2641a8u: goto label_2641a8;
        case 0x2641acu: goto label_2641ac;
        case 0x2641b0u: goto label_2641b0;
        case 0x2641b4u: goto label_2641b4;
        case 0x2641b8u: goto label_2641b8;
        case 0x2641bcu: goto label_2641bc;
        case 0x2641c0u: goto label_2641c0;
        case 0x2641c4u: goto label_2641c4;
        case 0x2641c8u: goto label_2641c8;
        case 0x2641ccu: goto label_2641cc;
        case 0x2641d0u: goto label_2641d0;
        case 0x2641d4u: goto label_2641d4;
        case 0x2641d8u: goto label_2641d8;
        case 0x2641dcu: goto label_2641dc;
        case 0x2641e0u: goto label_2641e0;
        case 0x2641e4u: goto label_2641e4;
        case 0x2641e8u: goto label_2641e8;
        case 0x2641ecu: goto label_2641ec;
        case 0x2641f0u: goto label_2641f0;
        case 0x2641f4u: goto label_2641f4;
        case 0x2641f8u: goto label_2641f8;
        case 0x2641fcu: goto label_2641fc;
        case 0x264200u: goto label_264200;
        case 0x264204u: goto label_264204;
        case 0x264208u: goto label_264208;
        case 0x26420cu: goto label_26420c;
        case 0x264210u: goto label_264210;
        case 0x264214u: goto label_264214;
        case 0x264218u: goto label_264218;
        case 0x26421cu: goto label_26421c;
        case 0x264220u: goto label_264220;
        case 0x264224u: goto label_264224;
        case 0x264228u: goto label_264228;
        case 0x26422cu: goto label_26422c;
        case 0x264230u: goto label_264230;
        case 0x264234u: goto label_264234;
        case 0x264238u: goto label_264238;
        case 0x26423cu: goto label_26423c;
        case 0x264240u: goto label_264240;
        case 0x264244u: goto label_264244;
        case 0x264248u: goto label_264248;
        case 0x26424cu: goto label_26424c;
        case 0x264250u: goto label_264250;
        case 0x264254u: goto label_264254;
        case 0x264258u: goto label_264258;
        case 0x26425cu: goto label_26425c;
        case 0x264260u: goto label_264260;
        case 0x264264u: goto label_264264;
        case 0x264268u: goto label_264268;
        case 0x26426cu: goto label_26426c;
        case 0x264270u: goto label_264270;
        case 0x264274u: goto label_264274;
        case 0x264278u: goto label_264278;
        case 0x26427cu: goto label_26427c;
        case 0x264280u: goto label_264280;
        case 0x264284u: goto label_264284;
        case 0x264288u: goto label_264288;
        case 0x26428cu: goto label_26428c;
        case 0x264290u: goto label_264290;
        case 0x264294u: goto label_264294;
        case 0x264298u: goto label_264298;
        case 0x26429cu: goto label_26429c;
        case 0x2642a0u: goto label_2642a0;
        case 0x2642a4u: goto label_2642a4;
        case 0x2642a8u: goto label_2642a8;
        case 0x2642acu: goto label_2642ac;
        case 0x2642b0u: goto label_2642b0;
        case 0x2642b4u: goto label_2642b4;
        case 0x2642b8u: goto label_2642b8;
        case 0x2642bcu: goto label_2642bc;
        case 0x2642c0u: goto label_2642c0;
        case 0x2642c4u: goto label_2642c4;
        case 0x2642c8u: goto label_2642c8;
        case 0x2642ccu: goto label_2642cc;
        case 0x2642d0u: goto label_2642d0;
        case 0x2642d4u: goto label_2642d4;
        case 0x2642d8u: goto label_2642d8;
        case 0x2642dcu: goto label_2642dc;
        case 0x2642e0u: goto label_2642e0;
        case 0x2642e4u: goto label_2642e4;
        case 0x2642e8u: goto label_2642e8;
        case 0x2642ecu: goto label_2642ec;
        case 0x2642f0u: goto label_2642f0;
        case 0x2642f4u: goto label_2642f4;
        case 0x2642f8u: goto label_2642f8;
        case 0x2642fcu: goto label_2642fc;
        case 0x264300u: goto label_264300;
        case 0x264304u: goto label_264304;
        case 0x264308u: goto label_264308;
        case 0x26430cu: goto label_26430c;
        case 0x264310u: goto label_264310;
        case 0x264314u: goto label_264314;
        case 0x264318u: goto label_264318;
        case 0x26431cu: goto label_26431c;
        case 0x264320u: goto label_264320;
        case 0x264324u: goto label_264324;
        case 0x264328u: goto label_264328;
        case 0x26432cu: goto label_26432c;
        case 0x264330u: goto label_264330;
        case 0x264334u: goto label_264334;
        case 0x264338u: goto label_264338;
        case 0x26433cu: goto label_26433c;
        case 0x264340u: goto label_264340;
        case 0x264344u: goto label_264344;
        case 0x264348u: goto label_264348;
        case 0x26434cu: goto label_26434c;
        case 0x264350u: goto label_264350;
        case 0x264354u: goto label_264354;
        case 0x264358u: goto label_264358;
        case 0x26435cu: goto label_26435c;
        case 0x264360u: goto label_264360;
        case 0x264364u: goto label_264364;
        case 0x264368u: goto label_264368;
        case 0x26436cu: goto label_26436c;
        case 0x264370u: goto label_264370;
        case 0x264374u: goto label_264374;
        case 0x264378u: goto label_264378;
        case 0x26437cu: goto label_26437c;
        case 0x264380u: goto label_264380;
        case 0x264384u: goto label_264384;
        case 0x264388u: goto label_264388;
        case 0x26438cu: goto label_26438c;
        case 0x264390u: goto label_264390;
        case 0x264394u: goto label_264394;
        case 0x264398u: goto label_264398;
        case 0x26439cu: goto label_26439c;
        case 0x2643a0u: goto label_2643a0;
        case 0x2643a4u: goto label_2643a4;
        case 0x2643a8u: goto label_2643a8;
        case 0x2643acu: goto label_2643ac;
        case 0x2643b0u: goto label_2643b0;
        case 0x2643b4u: goto label_2643b4;
        case 0x2643b8u: goto label_2643b8;
        case 0x2643bcu: goto label_2643bc;
        case 0x2643c0u: goto label_2643c0;
        case 0x2643c4u: goto label_2643c4;
        case 0x2643c8u: goto label_2643c8;
        case 0x2643ccu: goto label_2643cc;
        case 0x2643d0u: goto label_2643d0;
        case 0x2643d4u: goto label_2643d4;
        case 0x2643d8u: goto label_2643d8;
        case 0x2643dcu: goto label_2643dc;
        case 0x2643e0u: goto label_2643e0;
        case 0x2643e4u: goto label_2643e4;
        case 0x2643e8u: goto label_2643e8;
        case 0x2643ecu: goto label_2643ec;
        case 0x2643f0u: goto label_2643f0;
        case 0x2643f4u: goto label_2643f4;
        case 0x2643f8u: goto label_2643f8;
        case 0x2643fcu: goto label_2643fc;
        case 0x264400u: goto label_264400;
        case 0x264404u: goto label_264404;
        case 0x264408u: goto label_264408;
        case 0x26440cu: goto label_26440c;
        case 0x264410u: goto label_264410;
        case 0x264414u: goto label_264414;
        case 0x264418u: goto label_264418;
        case 0x26441cu: goto label_26441c;
        case 0x264420u: goto label_264420;
        case 0x264424u: goto label_264424;
        case 0x264428u: goto label_264428;
        case 0x26442cu: goto label_26442c;
        case 0x264430u: goto label_264430;
        case 0x264434u: goto label_264434;
        case 0x264438u: goto label_264438;
        case 0x26443cu: goto label_26443c;
        case 0x264440u: goto label_264440;
        case 0x264444u: goto label_264444;
        case 0x264448u: goto label_264448;
        case 0x26444cu: goto label_26444c;
        case 0x264450u: goto label_264450;
        case 0x264454u: goto label_264454;
        case 0x264458u: goto label_264458;
        case 0x26445cu: goto label_26445c;
        default: break;
    }

    ctx->pc = 0x264178u;

label_264178:
    // 0x264178: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x264178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_26417c:
    // 0x26417c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x26417cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_264180:
    // 0x264180: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x264180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_264184:
    // 0x264184: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x264184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_264188:
    // 0x264188: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x264188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_26418c:
    // 0x26418c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26418cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_264190:
    // 0x264190: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x264190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_264194:
    // 0x264194: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x264194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_264198:
    // 0x264198: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x264198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_26419c:
    // 0x26419c: 0x24120295  addiu       $s2, $zero, 0x295
    ctx->pc = 0x26419cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 661));
label_2641a0:
    // 0x2641a0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2641a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2641a4:
    // 0x2641a4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2641a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2641a8:
    // 0x2641a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2641a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2641ac:
    // 0x2641ac: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2641acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2641b0:
    // 0x2641b0: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2641b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2641b4:
    // 0x2641b4: 0x60f809  jalr        $v1
label_2641b8:
    if (ctx->pc == 0x2641B8u) {
        ctx->pc = 0x2641B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2641B4u;
        // 0x2641b8: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2641BCu;
        goto label_2641bc;
    }
    ctx->pc = 0x2641B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2641BCu);
        ctx->pc = 0x2641B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2641B4u;
        // 0x2641b8: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2641B4u, 0x2641BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2641BCu;
label_2641bc:
    // 0x2641bc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2641bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2641c0:
    // 0x2641c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2641c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2641c4:
    // 0x2641c4: 0xc088ee6  jal         func_223B98
label_2641c8:
    if (ctx->pc == 0x2641C8u) {
        ctx->pc = 0x2641C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2641C4u;
        // 0x2641c8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2641CCu;
        goto label_2641cc;
    }
    ctx->pc = 0x2641C4u;
    SET_GPR_U32(ctx, 31, 0x2641CCu);
    ctx->pc = 0x2641C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2641C4u;
    // 0x2641c8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x2641C4u, 0x2641CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2641CCu;
label_2641cc:
    // 0x2641cc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2641d0:
    if (ctx->pc == 0x2641D0u) {
        ctx->pc = 0x2641D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2641CCu;
        // 0x2641d0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2641D4u;
        goto label_2641d4;
    }
    ctx->pc = 0x2641CCu;
    {
        const bool branch_taken_0x2641cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2641cc) {
            ctx->pc = 0x2641D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2641CCu;
            // 0x2641d0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2641F4u;
            goto label_2641f4;
        }
    }
    ctx->pc = 0x2641D4u;
label_2641d4:
    // 0x2641d4: 0xc095018  jal         func_254060
label_2641d8:
    if (ctx->pc == 0x2641D8u) {
        ctx->pc = 0x2641D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2641D4u;
        // 0x2641d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2641DCu;
        goto label_2641dc;
    }
    ctx->pc = 0x2641D4u;
    SET_GPR_U32(ctx, 31, 0x2641DCu);
    ctx->pc = 0x2641D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2641D4u;
    // 0x2641d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x2641D4u, 0x2641DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2641DCu;
label_2641dc:
    // 0x2641dc: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2641dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2641e0:
    // 0x2641e0: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_2641e4:
    if (ctx->pc == 0x2641E4u) {
        ctx->pc = 0x2641E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2641E0u;
        // 0x2641e4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2641E8u;
        goto label_2641e8;
    }
    ctx->pc = 0x2641E0u;
    {
        const bool branch_taken_0x2641e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2641e0) {
            ctx->pc = 0x2641E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2641E0u;
            // 0x2641e4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2641F4u;
            goto label_2641f4;
        }
    }
    ctx->pc = 0x2641E8u;
label_2641e8:
    // 0x2641e8: 0xc094fca  jal         func_253F28
label_2641ec:
    if (ctx->pc == 0x2641ECu) {
        ctx->pc = 0x2641ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2641E8u;
        // 0x2641ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2641F0u;
        goto label_2641f0;
    }
    ctx->pc = 0x2641E8u;
    SET_GPR_U32(ctx, 31, 0x2641F0u);
    ctx->pc = 0x2641ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2641E8u;
    // 0x2641ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x2641E8u, 0x2641F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2641F0u;
label_2641f0:
    // 0x2641f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2641f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2641f4:
    // 0x2641f4: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x2641f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_2641f8:
    // 0x2641f8: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x2641f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_2641fc:
    // 0x2641fc: 0x40f809  jalr        $v0
label_264200:
    if (ctx->pc == 0x264200u) {
        ctx->pc = 0x264200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2641FCu;
        // 0x264200: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264204u;
        goto label_264204;
    }
    ctx->pc = 0x2641FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x264204u);
        ctx->pc = 0x264200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2641FCu;
        // 0x264200: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2641FCu, 0x264204u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x264204u;
label_264204:
    // 0x264204: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_264208:
    if (ctx->pc == 0x264208u) {
        ctx->pc = 0x26420Cu;
        goto label_26420c;
    }
    ctx->pc = 0x264204u;
    {
        const bool branch_taken_0x264204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264204) {
            ctx->pc = 0x26425Cu;
            goto label_26425c;
        }
    }
    ctx->pc = 0x26420Cu;
label_26420c:
    // 0x26420c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x26420cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_264210:
    // 0x264210: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x264210u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_264214:
    // 0x264214: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x264214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_264218:
    // 0x264218: 0x40f809  jalr        $v0
label_26421c:
    if (ctx->pc == 0x26421Cu) {
        ctx->pc = 0x26421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264218u;
        // 0x26421c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264220u;
        goto label_264220;
    }
    ctx->pc = 0x264218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x264220u);
        ctx->pc = 0x26421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264218u;
        // 0x26421c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264218u, 0x264220u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x264220u;
label_264220:
    // 0x264220: 0x8c480074  lw          $t0, 0x74($v0)
    ctx->pc = 0x264220u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_264224:
    // 0x264224: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x264224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_264228:
    // 0x264228: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x264228u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26422c:
    // 0x26422c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26422cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_264230:
    // 0x264230: 0x85040028  lh          $a0, 0x28($t0)
    ctx->pc = 0x264230u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 40)));
label_264234:
    // 0x264234: 0x8d03002c  lw          $v1, 0x2C($t0)
    ctx->pc = 0x264234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
label_264238:
    // 0x264238: 0x60f809  jalr        $v1
label_26423c:
    if (ctx->pc == 0x26423Cu) {
        ctx->pc = 0x26423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264238u;
        // 0x26423c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264240u;
        goto label_264240;
    }
    ctx->pc = 0x264238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x264240u);
        ctx->pc = 0x26423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264238u;
        // 0x26423c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264238u, 0x264240u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x264240u;
label_264240:
    // 0x264240: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x264240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_264244:
    // 0x264244: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x264244u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_264248:
    // 0x264248: 0x8c650024  lw          $a1, 0x24($v1)
    ctx->pc = 0x264248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_26424c:
    // 0x26424c: 0xa0f809  jalr        $a1
label_264250:
    if (ctx->pc == 0x264250u) {
        ctx->pc = 0x264250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26424Cu;
        // 0x264250: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264254u;
        goto label_264254;
    }
    ctx->pc = 0x26424Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x264254u);
        ctx->pc = 0x264250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26424Cu;
        // 0x264250: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26424Cu, 0x264254u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x264254u;
label_264254:
    // 0x264254: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x264254u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_264258:
    // 0x264258: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x264258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_26425c:
    // 0x26425c: 0xc0e2612  jal         func_389848
label_264260:
    if (ctx->pc == 0x264260u) {
        ctx->pc = 0x264260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26425Cu;
        // 0x264260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264264u;
        goto label_264264;
    }
    ctx->pc = 0x26425Cu;
    SET_GPR_U32(ctx, 31, 0x264264u);
    ctx->pc = 0x264260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26425Cu;
    // 0x264260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x26425Cu, 0x264264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264264u;
label_264264:
    // 0x264264: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_264268:
    if (ctx->pc == 0x264268u) {
        ctx->pc = 0x264268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264264u;
        // 0x264268: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26426Cu;
        goto label_26426c;
    }
    ctx->pc = 0x264264u;
    {
        const bool branch_taken_0x264264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264264u;
        // 0x264268: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264264) {
            ctx->pc = 0x2642E8u;
            goto label_2642e8;
        }
    }
    ctx->pc = 0x26426Cu;
label_26426c:
    // 0x26426c: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x26426cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_264270:
    // 0x264270: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x264270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_264274:
    // 0x264274: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x264274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_264278:
    // 0x264278: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x264278u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_26427c:
    // 0x26427c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26427cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_264280:
    // 0x264280: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x264280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_264284:
    // 0x264284: 0x78a300e0  lq          $v1, 0xE0($a1)
    ctx->pc = 0x264284u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 224)));
label_264288:
    // 0x264288: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x264288u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_26428c:
    // 0x26428c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x26428cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_264290:
    // 0x264290: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x264290u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_264294:
    // 0x264294: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x264294u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_264298:
    // 0x264298: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x264298u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_26429c:
    // 0x26429c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x26429cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2642a0:
    // 0x2642a0: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2642a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_2642a4:
    // 0x2642a4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2642a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2642a8:
    // 0x2642a8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2642a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2642ac:
    // 0x2642ac: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x2642acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2642b0:
    // 0x2642b0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2642b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2642b4:
    // 0x2642b4: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2642b4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_2642b8:
    // 0x2642b8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2642b8u;
    // VWAITQ (Q already resolved in this runtime)
label_2642bc:
    // 0x2642bc: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x2642bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2642c0:
    // 0x2642c0: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2642c0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_2642c4:
    // 0x2642c4: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x2642c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2642c8:
    // 0x2642c8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2642c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2642cc:
    // 0x2642cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2642ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2642d0:
    // 0x2642d0: 0x0  nop
    ctx->pc = 0x2642d0u;
    // NOP
label_2642d4:
    // 0x2642d4: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_2642d8:
    if (ctx->pc == 0x2642D8u) {
        ctx->pc = 0x2642D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2642D4u;
        // 0x2642d8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2642DCu;
        goto label_2642dc;
    }
    ctx->pc = 0x2642D4u;
    {
        const bool branch_taken_0x2642d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2642D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2642D4u;
        // 0x2642d8: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2642d4) {
            ctx->pc = 0x264344u;
            goto label_264344;
        }
    }
    ctx->pc = 0x2642DCu;
label_2642dc:
    // 0x2642dc: 0x241200c2  addiu       $s2, $zero, 0xC2
    ctx->pc = 0x2642dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
label_2642e0:
    // 0x2642e0: 0x10000018  b           . + 4 + (0x18 << 2)
label_2642e4:
    if (ctx->pc == 0x2642E4u) {
        ctx->pc = 0x2642E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2642E0u;
        // 0x2642e4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2642E8u;
        goto label_2642e8;
    }
    ctx->pc = 0x2642E0u;
    {
        const bool branch_taken_0x2642e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2642E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2642E0u;
        // 0x2642e4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2642e0) {
            ctx->pc = 0x264344u;
            goto label_264344;
        }
    }
    ctx->pc = 0x2642E8u;
label_2642e8:
    // 0x2642e8: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x2642e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_2642ec:
    // 0x2642ec: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2642ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_2642f0:
    // 0x2642f0: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2642f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_2642f4:
    // 0x2642f4: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x2642f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2642f8:
    // 0x2642f8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2642f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2642fc:
    // 0x2642fc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2642fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_264300:
    // 0x264300: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x264300u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_264304:
    // 0x264304: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x264304u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_264308:
    // 0x264308: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x264308u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_26430c:
    // 0x26430c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x26430cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_264310:
    // 0x264310: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x264310u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_264314:
    // 0x264314: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x264314u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_264318:
    // 0x264318: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x264318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_26431c:
    // 0x26431c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x26431cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_264320:
    // 0x264320: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x264320u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_264324:
    // 0x264324: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x264324u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_264328:
    // 0x264328: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x264328u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_26432c:
    // 0x26432c: 0x4a0003bf  vwaitq
    ctx->pc = 0x26432cu;
    // VWAITQ (Q already resolved in this runtime)
label_264330:
    // 0x264330: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x264330u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_264334:
    // 0x264334: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x264334u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_264338:
    // 0x264338: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x264338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26433c:
    // 0x26433c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x26433cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_264340:
    // 0x264340: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x264340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_264344:
    // 0x264344: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x264344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_264348:
    // 0x264348: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x264348u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26434c:
    // 0x26434c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26434cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_264350:
    // 0x264350: 0x0  nop
    ctx->pc = 0x264350u;
    // NOP
label_264354:
    // 0x264354: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x264354u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_264358:
    // 0x264358: 0x0  nop
    ctx->pc = 0x264358u;
    // NOP
label_26435c:
    // 0x26435c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_264360:
    if (ctx->pc == 0x264360u) {
        ctx->pc = 0x264364u;
        goto label_264364;
    }
    ctx->pc = 0x26435Cu;
    {
        const bool branch_taken_0x26435c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26435c) {
            ctx->pc = 0x26436Cu;
            goto label_26436c;
        }
    }
    ctx->pc = 0x264364u;
label_264364:
    // 0x264364: 0x10000009  b           . + 4 + (0x9 << 2)
label_264368:
    if (ctx->pc == 0x264368u) {
        ctx->pc = 0x264368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264364u;
        // 0x264368: 0x24120296  addiu       $s2, $zero, 0x296 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 662));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26436Cu;
        goto label_26436c;
    }
    ctx->pc = 0x264364u;
    {
        const bool branch_taken_0x264364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264364u;
        // 0x264368: 0x24120296  addiu       $s2, $zero, 0x296 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 662));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264364) {
            ctx->pc = 0x26438Cu;
            goto label_26438c;
        }
    }
    ctx->pc = 0x26436Cu;
label_26436c:
    // 0x26436c: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x26436cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_264370:
    // 0x264370: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x264370u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_264374:
    // 0x264374: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x264374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_264378:
    // 0x264378: 0x0  nop
    ctx->pc = 0x264378u;
    // NOP
label_26437c:
    // 0x26437c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x26437cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_264380:
    // 0x264380: 0x0  nop
    ctx->pc = 0x264380u;
    // NOP
label_264384:
    // 0x264384: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_264388:
    if (ctx->pc == 0x264388u) {
        ctx->pc = 0x264388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264384u;
        // 0x264388: 0x24120297  addiu       $s2, $zero, 0x297 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 663));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26438Cu;
        goto label_26438c;
    }
    ctx->pc = 0x264384u;
    {
        const bool branch_taken_0x264384 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x264384) {
            ctx->pc = 0x264388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264384u;
            // 0x264388: 0x24120297  addiu       $s2, $zero, 0x297 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 663));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26438Cu;
            goto label_26438c;
        }
    }
    ctx->pc = 0x26438Cu;
label_26438c:
    // 0x26438c: 0x12600027  beqz        $s3, . + 4 + (0x27 << 2)
label_264390:
    if (ctx->pc == 0x264390u) {
        ctx->pc = 0x264390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26438Cu;
        // 0x264390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264394u;
        goto label_264394;
    }
    ctx->pc = 0x26438Cu;
    {
        const bool branch_taken_0x26438c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x264390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26438Cu;
        // 0x264390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26438c) {
            ctx->pc = 0x26442Cu;
            goto label_26442c;
        }
    }
    ctx->pc = 0x264394u;
label_264394:
    // 0x264394: 0xc095142  jal         func_254508
label_264398:
    if (ctx->pc == 0x264398u) {
        ctx->pc = 0x264398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264394u;
        // 0x264398: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26439Cu;
        goto label_26439c;
    }
    ctx->pc = 0x264394u;
    SET_GPR_U32(ctx, 31, 0x26439Cu);
    ctx->pc = 0x264398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264394u;
    // 0x264398: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254508u, 0x264394u, 0x26439Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26439Cu;
label_26439c:
    // 0x26439c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x26439cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2643a0:
    // 0x2643a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2643a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2643a4:
    // 0x2643a4: 0x0  nop
    ctx->pc = 0x2643a4u;
    // NOP
label_2643a8:
    // 0x2643a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2643a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2643ac:
    // 0x2643ac: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2643acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2643b0:
    // 0x2643b0: 0x0  nop
    ctx->pc = 0x2643b0u;
    // NOP
label_2643b4:
    // 0x2643b4: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_2643b8:
    if (ctx->pc == 0x2643B8u) {
        ctx->pc = 0x2643B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2643B4u;
        // 0x2643b8: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2643BCu;
        goto label_2643bc;
    }
    ctx->pc = 0x2643B4u;
    {
        const bool branch_taken_0x2643b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2643B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2643B4u;
        // 0x2643b8: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2643b4) {
            ctx->pc = 0x264410u;
            goto label_264410;
        }
    }
    ctx->pc = 0x2643BCu;
label_2643bc:
    // 0x2643bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2643bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2643c0:
    // 0x2643c0: 0xc095128  jal         func_2544A0
label_2643c4:
    if (ctx->pc == 0x2643C4u) {
        ctx->pc = 0x2643C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2643C0u;
        // 0x2643c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2643C8u;
        goto label_2643c8;
    }
    ctx->pc = 0x2643C0u;
    SET_GPR_U32(ctx, 31, 0x2643C8u);
    ctx->pc = 0x2643C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2643C0u;
    // 0x2643c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x2643C0u, 0x2643C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2643C8u;
label_2643c8:
    // 0x2643c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2643c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2643cc:
    // 0x2643cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2643ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2643d0:
    // 0x2643d0: 0x0  nop
    ctx->pc = 0x2643d0u;
    // NOP
label_2643d4:
    // 0x2643d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2643d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2643d8:
    // 0x2643d8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2643d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2643dc:
    // 0x2643dc: 0x0  nop
    ctx->pc = 0x2643dcu;
    // NOP
label_2643e0:
    // 0x2643e0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_2643e4:
    if (ctx->pc == 0x2643E4u) {
        ctx->pc = 0x2643E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2643E0u;
        // 0x2643e4: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2643E8u;
        goto label_2643e8;
    }
    ctx->pc = 0x2643E0u;
    {
        const bool branch_taken_0x2643e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2643E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2643E0u;
        // 0x2643e4: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2643e0) {
            ctx->pc = 0x264410u;
            goto label_264410;
        }
    }
    ctx->pc = 0x2643E8u;
label_2643e8:
    // 0x2643e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2643e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2643ec:
    // 0x2643ec: 0xc040596  jal         func_101658
label_2643f0:
    if (ctx->pc == 0x2643F0u) {
        ctx->pc = 0x2643F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2643ECu;
        // 0x2643f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2643F4u;
        goto label_2643f4;
    }
    ctx->pc = 0x2643ECu;
    SET_GPR_U32(ctx, 31, 0x2643F4u);
    ctx->pc = 0x2643F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2643ECu;
    // 0x2643f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101658u, 0x2643ECu, 0x2643F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2643F4u;
label_2643f4:
    // 0x2643f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2643f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2643f8:
    // 0x2643f8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2643f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2643fc:
    // 0x2643fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2643fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_264400:
    // 0x264400: 0xc09da04  jal         func_276810
label_264404:
    if (ctx->pc == 0x264404u) {
        ctx->pc = 0x264404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264400u;
        // 0x264404: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264408u;
        goto label_264408;
    }
    ctx->pc = 0x264400u;
    SET_GPR_U32(ctx, 31, 0x264408u);
    ctx->pc = 0x264404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264400u;
    // 0x264404: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276810u, 0x264400u, 0x264408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264408u;
label_264408:
    // 0x264408: 0x10000009  b           . + 4 + (0x9 << 2)
label_26440c:
    if (ctx->pc == 0x26440Cu) {
        ctx->pc = 0x26440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264408u;
        // 0x26440c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264410u;
        goto label_264410;
    }
    ctx->pc = 0x264408u;
    {
        const bool branch_taken_0x264408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264408u;
        // 0x26440c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264408) {
            ctx->pc = 0x264430u;
            goto label_264430;
        }
    }
    ctx->pc = 0x264410u;
label_264410:
    // 0x264410: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x264410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_264414:
    // 0x264414: 0xc040596  jal         func_101658
label_264418:
    if (ctx->pc == 0x264418u) {
        ctx->pc = 0x264418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264414u;
        // 0x264418: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26441Cu;
        goto label_26441c;
    }
    ctx->pc = 0x264414u;
    SET_GPR_U32(ctx, 31, 0x26441Cu);
    ctx->pc = 0x264418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264414u;
    // 0x264418: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101658u, 0x264414u, 0x26441Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26441Cu;
label_26441c:
    // 0x26441c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26441cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_264420:
    // 0x264420: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x264420u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_264424:
    // 0x264424: 0xc088708  jal         func_221C20
label_264428:
    if (ctx->pc == 0x264428u) {
        ctx->pc = 0x264428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264424u;
        // 0x264428: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26442Cu;
        goto label_26442c;
    }
    ctx->pc = 0x264424u;
    SET_GPR_U32(ctx, 31, 0x26442Cu);
    ctx->pc = 0x264428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264424u;
    // 0x264428: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C20u, 0x264424u, 0x26442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26442Cu;
label_26442c:
    // 0x26442c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26442cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_264430:
    // 0x264430: 0xc0988da  jal         func_262368
label_264434:
    if (ctx->pc == 0x264434u) {
        ctx->pc = 0x264434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264430u;
        // 0x264434: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264438u;
        goto label_264438;
    }
    ctx->pc = 0x264430u;
    SET_GPR_U32(ctx, 31, 0x264438u);
    ctx->pc = 0x264434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264430u;
    // 0x264434: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262368u, 0x264430u, 0x264438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264438u;
label_264438:
    // 0x264438: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x264438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_26443c:
    // 0x26443c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x26443cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_264440:
    // 0x264440: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x264440u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_264444:
    // 0x264444: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x264444u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_264448:
    // 0x264448: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x264448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_26444c:
    // 0x26444c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x26444cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_264450:
    // 0x264450: 0x3e00008  jr          $ra
label_264454:
    if (ctx->pc == 0x264454u) {
        ctx->pc = 0x264454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264450u;
        // 0x264454: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264458u;
        goto label_264458;
    }
    ctx->pc = 0x264450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264450u;
        // 0x264454: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264458u;
label_264458:
    // 0x264458: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x264458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_26445c:
    // 0x26445c: 0x0  nop
    ctx->pc = 0x26445cu;
    // NOP
    ctx->pc = 0x264460u;
}
