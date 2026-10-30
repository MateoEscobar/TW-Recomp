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

// Function: sub_00230328
// Address: 0x230328 - 0x230598
void sub_00230328_0x230328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230328_0x230328");
#endif

    switch (ctx->pc) {
        case 0x230328u: goto label_230328;
        case 0x23032cu: goto label_23032c;
        case 0x230330u: goto label_230330;
        case 0x230334u: goto label_230334;
        case 0x230338u: goto label_230338;
        case 0x23033cu: goto label_23033c;
        case 0x230340u: goto label_230340;
        case 0x230344u: goto label_230344;
        case 0x230348u: goto label_230348;
        case 0x23034cu: goto label_23034c;
        case 0x230350u: goto label_230350;
        case 0x230354u: goto label_230354;
        case 0x230358u: goto label_230358;
        case 0x23035cu: goto label_23035c;
        case 0x230360u: goto label_230360;
        case 0x230364u: goto label_230364;
        case 0x230368u: goto label_230368;
        case 0x23036cu: goto label_23036c;
        case 0x230370u: goto label_230370;
        case 0x230374u: goto label_230374;
        case 0x230378u: goto label_230378;
        case 0x23037cu: goto label_23037c;
        case 0x230380u: goto label_230380;
        case 0x230384u: goto label_230384;
        case 0x230388u: goto label_230388;
        case 0x23038cu: goto label_23038c;
        case 0x230390u: goto label_230390;
        case 0x230394u: goto label_230394;
        case 0x230398u: goto label_230398;
        case 0x23039cu: goto label_23039c;
        case 0x2303a0u: goto label_2303a0;
        case 0x2303a4u: goto label_2303a4;
        case 0x2303a8u: goto label_2303a8;
        case 0x2303acu: goto label_2303ac;
        case 0x2303b0u: goto label_2303b0;
        case 0x2303b4u: goto label_2303b4;
        case 0x2303b8u: goto label_2303b8;
        case 0x2303bcu: goto label_2303bc;
        case 0x2303c0u: goto label_2303c0;
        case 0x2303c4u: goto label_2303c4;
        case 0x2303c8u: goto label_2303c8;
        case 0x2303ccu: goto label_2303cc;
        case 0x2303d0u: goto label_2303d0;
        case 0x2303d4u: goto label_2303d4;
        case 0x2303d8u: goto label_2303d8;
        case 0x2303dcu: goto label_2303dc;
        case 0x2303e0u: goto label_2303e0;
        case 0x2303e4u: goto label_2303e4;
        case 0x2303e8u: goto label_2303e8;
        case 0x2303ecu: goto label_2303ec;
        case 0x2303f0u: goto label_2303f0;
        case 0x2303f4u: goto label_2303f4;
        case 0x2303f8u: goto label_2303f8;
        case 0x2303fcu: goto label_2303fc;
        case 0x230400u: goto label_230400;
        case 0x230404u: goto label_230404;
        case 0x230408u: goto label_230408;
        case 0x23040cu: goto label_23040c;
        case 0x230410u: goto label_230410;
        case 0x230414u: goto label_230414;
        case 0x230418u: goto label_230418;
        case 0x23041cu: goto label_23041c;
        case 0x230420u: goto label_230420;
        case 0x230424u: goto label_230424;
        case 0x230428u: goto label_230428;
        case 0x23042cu: goto label_23042c;
        case 0x230430u: goto label_230430;
        case 0x230434u: goto label_230434;
        case 0x230438u: goto label_230438;
        case 0x23043cu: goto label_23043c;
        case 0x230440u: goto label_230440;
        case 0x230444u: goto label_230444;
        case 0x230448u: goto label_230448;
        case 0x23044cu: goto label_23044c;
        case 0x230450u: goto label_230450;
        case 0x230454u: goto label_230454;
        case 0x230458u: goto label_230458;
        case 0x23045cu: goto label_23045c;
        case 0x230460u: goto label_230460;
        case 0x230464u: goto label_230464;
        case 0x230468u: goto label_230468;
        case 0x23046cu: goto label_23046c;
        case 0x230470u: goto label_230470;
        case 0x230474u: goto label_230474;
        case 0x230478u: goto label_230478;
        case 0x23047cu: goto label_23047c;
        case 0x230480u: goto label_230480;
        case 0x230484u: goto label_230484;
        case 0x230488u: goto label_230488;
        case 0x23048cu: goto label_23048c;
        case 0x230490u: goto label_230490;
        case 0x230494u: goto label_230494;
        case 0x230498u: goto label_230498;
        case 0x23049cu: goto label_23049c;
        case 0x2304a0u: goto label_2304a0;
        case 0x2304a4u: goto label_2304a4;
        case 0x2304a8u: goto label_2304a8;
        case 0x2304acu: goto label_2304ac;
        case 0x2304b0u: goto label_2304b0;
        case 0x2304b4u: goto label_2304b4;
        case 0x2304b8u: goto label_2304b8;
        case 0x2304bcu: goto label_2304bc;
        case 0x2304c0u: goto label_2304c0;
        case 0x2304c4u: goto label_2304c4;
        case 0x2304c8u: goto label_2304c8;
        case 0x2304ccu: goto label_2304cc;
        case 0x2304d0u: goto label_2304d0;
        case 0x2304d4u: goto label_2304d4;
        case 0x2304d8u: goto label_2304d8;
        case 0x2304dcu: goto label_2304dc;
        case 0x2304e0u: goto label_2304e0;
        case 0x2304e4u: goto label_2304e4;
        case 0x2304e8u: goto label_2304e8;
        case 0x2304ecu: goto label_2304ec;
        case 0x2304f0u: goto label_2304f0;
        case 0x2304f4u: goto label_2304f4;
        case 0x2304f8u: goto label_2304f8;
        case 0x2304fcu: goto label_2304fc;
        case 0x230500u: goto label_230500;
        case 0x230504u: goto label_230504;
        case 0x230508u: goto label_230508;
        case 0x23050cu: goto label_23050c;
        case 0x230510u: goto label_230510;
        case 0x230514u: goto label_230514;
        case 0x230518u: goto label_230518;
        case 0x23051cu: goto label_23051c;
        case 0x230520u: goto label_230520;
        case 0x230524u: goto label_230524;
        case 0x230528u: goto label_230528;
        case 0x23052cu: goto label_23052c;
        case 0x230530u: goto label_230530;
        case 0x230534u: goto label_230534;
        case 0x230538u: goto label_230538;
        case 0x23053cu: goto label_23053c;
        case 0x230540u: goto label_230540;
        case 0x230544u: goto label_230544;
        case 0x230548u: goto label_230548;
        case 0x23054cu: goto label_23054c;
        case 0x230550u: goto label_230550;
        case 0x230554u: goto label_230554;
        case 0x230558u: goto label_230558;
        case 0x23055cu: goto label_23055c;
        case 0x230560u: goto label_230560;
        case 0x230564u: goto label_230564;
        case 0x230568u: goto label_230568;
        case 0x23056cu: goto label_23056c;
        case 0x230570u: goto label_230570;
        case 0x230574u: goto label_230574;
        case 0x230578u: goto label_230578;
        case 0x23057cu: goto label_23057c;
        case 0x230580u: goto label_230580;
        case 0x230584u: goto label_230584;
        case 0x230588u: goto label_230588;
        case 0x23058cu: goto label_23058c;
        case 0x230590u: goto label_230590;
        case 0x230594u: goto label_230594;
        default: break;
    }

    ctx->pc = 0x230328u;

label_230328:
    // 0x230328: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x230328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_23032c:
    // 0x23032c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x23032cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_230330:
    // 0x230330: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x230330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_230334:
    // 0x230334: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x230334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_230338:
    // 0x230338: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x230338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_23033c:
    // 0x23033c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23033cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_230340:
    // 0x230340: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x230340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_230344:
    // 0x230344: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x230344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_230348:
    // 0x230348: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x230348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_23034c:
    // 0x23034c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x23034cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_230350:
    // 0x230350: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x230350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_230354:
    // 0x230354: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x230354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_230358:
    // 0x230358: 0x12200083  beqz        $s1, . + 4 + (0x83 << 2)
label_23035c:
    if (ctx->pc == 0x23035Cu) {
        ctx->pc = 0x23035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230358u;
        // 0x23035c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230360u;
        goto label_230360;
    }
    ctx->pc = 0x230358u;
    {
        const bool branch_taken_0x230358 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x23035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230358u;
        // 0x23035c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230358) {
            ctx->pc = 0x230568u;
            goto label_230568;
        }
    }
    ctx->pc = 0x230360u;
label_230360:
    // 0x230360: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x230360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_230364:
    // 0x230364: 0x10400081  beqz        $v0, . + 4 + (0x81 << 2)
label_230368:
    if (ctx->pc == 0x230368u) {
        ctx->pc = 0x230368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230364u;
        // 0x230368: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23036Cu;
        goto label_23036c;
    }
    ctx->pc = 0x230364u;
    {
        const bool branch_taken_0x230364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230364u;
        // 0x230368: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230364) {
            ctx->pc = 0x23056Cu;
            goto label_23056c;
        }
    }
    ctx->pc = 0x23036Cu;
label_23036c:
    // 0x23036c: 0xc08997c  jal         func_2265F0
label_230370:
    if (ctx->pc == 0x230370u) {
        ctx->pc = 0x230370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23036Cu;
        // 0x230370: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230374u;
        goto label_230374;
    }
    ctx->pc = 0x23036Cu;
    SET_GPR_U32(ctx, 31, 0x230374u);
    ctx->pc = 0x230370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23036Cu;
    // 0x230370: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x23036Cu, 0x230374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230374u;
label_230374:
    // 0x230374: 0x1440007d  bnez        $v0, . + 4 + (0x7D << 2)
label_230378:
    if (ctx->pc == 0x230378u) {
        ctx->pc = 0x230378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230374u;
        // 0x230378: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23037Cu;
        goto label_23037c;
    }
    ctx->pc = 0x230374u;
    {
        const bool branch_taken_0x230374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230374u;
        // 0x230378: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230374) {
            ctx->pc = 0x23056Cu;
            goto label_23056c;
        }
    }
    ctx->pc = 0x23037Cu;
label_23037c:
    // 0x23037c: 0xc09625a  jal         func_258968
label_230380:
    if (ctx->pc == 0x230380u) {
        ctx->pc = 0x230380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23037Cu;
        // 0x230380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230384u;
        goto label_230384;
    }
    ctx->pc = 0x23037Cu;
    SET_GPR_U32(ctx, 31, 0x230384u);
    ctx->pc = 0x230380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23037Cu;
    // 0x230380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258968u, 0x23037Cu, 0x230384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230384u;
label_230384:
    // 0x230384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_230388:
    // 0x230388: 0xc087b0e  jal         func_21EC38
label_23038c:
    if (ctx->pc == 0x23038Cu) {
        ctx->pc = 0x23038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230388u;
        // 0x23038c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230390u;
        goto label_230390;
    }
    ctx->pc = 0x230388u;
    SET_GPR_U32(ctx, 31, 0x230390u);
    ctx->pc = 0x23038Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230388u;
    // 0x23038c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x230388u, 0x230390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230390u;
label_230390:
    // 0x230390: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x230390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_230394:
    // 0x230394: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x230394u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_230398:
    // 0x230398: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x230398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_23039c:
    // 0x23039c: 0x40f809  jalr        $v0
label_2303a0:
    if (ctx->pc == 0x2303A0u) {
        ctx->pc = 0x2303A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23039Cu;
        // 0x2303a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2303A4u;
        goto label_2303a4;
    }
    ctx->pc = 0x23039Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2303A4u);
        ctx->pc = 0x2303A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23039Cu;
        // 0x2303a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23039Cu, 0x2303A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2303A4u;
label_2303a4:
    // 0x2303a4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2303a8:
    if (ctx->pc == 0x2303A8u) {
        ctx->pc = 0x2303A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2303A4u;
        // 0x2303a8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2303ACu;
        goto label_2303ac;
    }
    ctx->pc = 0x2303A4u;
    {
        const bool branch_taken_0x2303a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2303A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2303A4u;
        // 0x2303a8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2303a4) {
            ctx->pc = 0x2303F8u;
            goto label_2303f8;
        }
    }
    ctx->pc = 0x2303ACu;
label_2303ac:
    // 0x2303ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2303acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2303b0:
    // 0x2303b0: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x2303b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_2303b4:
    // 0x2303b4: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x2303b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_2303b8:
    // 0x2303b8: 0x40f809  jalr        $v0
label_2303bc:
    if (ctx->pc == 0x2303BCu) {
        ctx->pc = 0x2303BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2303B8u;
        // 0x2303bc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2303C0u;
        goto label_2303c0;
    }
    ctx->pc = 0x2303B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2303C0u);
        ctx->pc = 0x2303BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2303B8u;
        // 0x2303bc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2303B8u, 0x2303C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2303C0u;
label_2303c0:
    // 0x2303c0: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x2303c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2303c4:
    // 0x2303c4: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x2303c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_2303c8:
    // 0x2303c8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2303c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2303cc:
    // 0x2303cc: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x2303ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_2303d0:
    // 0x2303d0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2303d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2303d4:
    // 0x2303d4: 0x84a400f0  lh          $a0, 0xF0($a1)
    ctx->pc = 0x2303d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 240)));
label_2303d8:
    // 0x2303d8: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x2303d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
label_2303dc:
    // 0x2303dc: 0x40f809  jalr        $v0
label_2303e0:
    if (ctx->pc == 0x2303E0u) {
        ctx->pc = 0x2303E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2303DCu;
        // 0x2303e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2303E4u;
        goto label_2303e4;
    }
    ctx->pc = 0x2303DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2303E4u);
        ctx->pc = 0x2303E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2303DCu;
        // 0x2303e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2303DCu, 0x2303E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2303E4u;
label_2303e4:
    // 0x2303e4: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x2303e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2303e8:
    // 0x2303e8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2303e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_2303ec:
    // 0x2303ec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2303ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2303f0:
    // 0x2303f0: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x2303f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_2303f4:
    // 0x2303f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2303f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2303f8:
    // 0x2303f8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2303f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2303fc:
    // 0x2303fc: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2303fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_230400:
    // 0x230400: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x230400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_230404:
    // 0x230404: 0x8c660794  lw          $a2, 0x794($v1)
    ctx->pc = 0x230404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1940)));
label_230408:
    // 0x230408: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x230408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_23040c:
    // 0x23040c: 0x8e2700d4  lw          $a3, 0xD4($s1)
    ctx->pc = 0x23040cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_230410:
    // 0x230410: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x230410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_230414:
    // 0x230414: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x230414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_230418:
    // 0x230418: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x230418u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_23041c:
    // 0x23041c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23041cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_230420:
    // 0x230420: 0xace200f0  sw          $v0, 0xF0($a3)
    ctx->pc = 0x230420u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 240), GPR_U32(ctx, 2));
label_230424:
    // 0x230424: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x230424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_230428:
    // 0x230428: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x230428u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_23042c:
    // 0x23042c: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x23042cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_230430:
    // 0x230430: 0x40f809  jalr        $v0
label_230434:
    if (ctx->pc == 0x230434u) {
        ctx->pc = 0x230434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230430u;
        // 0x230434: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230438u;
        goto label_230438;
    }
    ctx->pc = 0x230430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230438u);
        ctx->pc = 0x230434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230430u;
        // 0x230434: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230430u, 0x230438u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x230438u;
label_230438:
    // 0x230438: 0x822501b0  lb          $a1, 0x1B0($s1)
    ctx->pc = 0x230438u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_23043c:
    // 0x23043c: 0x51027  nor         $v0, $zero, $a1
    ctx->pc = 0x23043cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
label_230440:
    // 0x230440: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_230444:
    if (ctx->pc == 0x230444u) {
        ctx->pc = 0x230444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230440u;
        // 0x230444: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230448u;
        goto label_230448;
    }
    ctx->pc = 0x230440u;
    {
        const bool branch_taken_0x230440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230440u;
        // 0x230444: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230440) {
            ctx->pc = 0x230450u;
            goto label_230450;
        }
    }
    ctx->pc = 0x230448u;
label_230448:
    // 0x230448: 0xc106ad8  jal         func_41AB60
label_23044c:
    if (ctx->pc == 0x23044Cu) {
        ctx->pc = 0x23044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230448u;
        // 0x23044c: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230450u;
        goto label_230450;
    }
    ctx->pc = 0x230448u;
    SET_GPR_U32(ctx, 31, 0x230450u);
    ctx->pc = 0x23044Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230448u;
    // 0x23044c: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41AB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41AB60u, 0x230448u, 0x230450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230450u;
label_230450:
    // 0x230450: 0xc087502  jal         func_21D408
label_230454:
    if (ctx->pc == 0x230454u) {
        ctx->pc = 0x230454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230450u;
        // 0x230454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230458u;
        goto label_230458;
    }
    ctx->pc = 0x230450u;
    SET_GPR_U32(ctx, 31, 0x230458u);
    ctx->pc = 0x230454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230450u;
    // 0x230454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x230450u, 0x230458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230458u;
label_230458:
    // 0x230458: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x230458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23045c:
    // 0x23045c: 0x1640003c  bnez        $s2, . + 4 + (0x3C << 2)
label_230460:
    if (ctx->pc == 0x230460u) {
        ctx->pc = 0x230460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23045Cu;
        // 0x230460: 0x8e1e0004  lw          $fp, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230464u;
        goto label_230464;
    }
    ctx->pc = 0x23045Cu;
    {
        const bool branch_taken_0x23045c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x230460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23045Cu;
        // 0x230460: 0x8e1e0004  lw          $fp, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23045c) {
            ctx->pc = 0x230550u;
            goto label_230550;
        }
    }
    ctx->pc = 0x230464u;
label_230464:
    // 0x230464: 0x8e15020c  lw          $s5, 0x20C($s0)
    ctx->pc = 0x230464u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_230468:
    // 0x230468: 0x34058002  ori         $a1, $zero, 0x8002
    ctx->pc = 0x230468u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
label_23046c:
    // 0x23046c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x23046cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_230470:
    // 0x230470: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x230470u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_230474:
    // 0x230474: 0x52878  dsll        $a1, $a1, 1
    ctx->pc = 0x230474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 1);
label_230478:
    // 0x230478: 0xc08997c  jal         func_2265F0
label_23047c:
    if (ctx->pc == 0x23047Cu) {
        ctx->pc = 0x23047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230478u;
        // 0x23047c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230480u;
        goto label_230480;
    }
    ctx->pc = 0x230478u;
    SET_GPR_U32(ctx, 31, 0x230480u);
    ctx->pc = 0x23047Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230478u;
    // 0x23047c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x230478u, 0x230480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230480u;
label_230480:
    // 0x230480: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_230484:
    if (ctx->pc == 0x230484u) {
        ctx->pc = 0x230484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230480u;
        // 0x230484: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230488u;
        goto label_230488;
    }
    ctx->pc = 0x230480u;
    {
        const bool branch_taken_0x230480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230480u;
        // 0x230484: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230480) {
            ctx->pc = 0x2304A4u;
            goto label_2304a4;
        }
    }
    ctx->pc = 0x230488u;
label_230488:
    // 0x230488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23048c:
    // 0x23048c: 0xc089974  jal         func_2265D0
label_230490:
    if (ctx->pc == 0x230490u) {
        ctx->pc = 0x230490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23048Cu;
        // 0x230490: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230494u;
        goto label_230494;
    }
    ctx->pc = 0x23048Cu;
    SET_GPR_U32(ctx, 31, 0x230494u);
    ctx->pc = 0x230490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23048Cu;
    // 0x230490: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x23048Cu, 0x230494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230494u;
label_230494:
    // 0x230494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_230498:
    // 0x230498: 0xc0a30ec  jal         func_28C3B0
label_23049c:
    if (ctx->pc == 0x23049Cu) {
        ctx->pc = 0x23049Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230498u;
        // 0x23049c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2304A0u;
        goto label_2304a0;
    }
    ctx->pc = 0x230498u;
    SET_GPR_U32(ctx, 31, 0x2304A0u);
    ctx->pc = 0x23049Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230498u;
    // 0x23049c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C3B0u, 0x230498u, 0x2304A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2304A0u;
label_2304a0:
    // 0x2304a0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2304a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2304a4:
    // 0x2304a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2304a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2304a8:
    // 0x2304a8: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x2304a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2304ac:
    // 0x2304ac: 0x84640224  lh          $a0, 0x224($v1)
    ctx->pc = 0x2304acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_2304b0:
    // 0x2304b0: 0x18800027  blez        $a0, . + 4 + (0x27 << 2)
label_2304b4:
    if (ctx->pc == 0x2304B4u) {
        ctx->pc = 0x2304B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2304B0u;
        // 0x2304b4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2304B8u;
        goto label_2304b8;
    }
    ctx->pc = 0x2304B0u;
    {
        const bool branch_taken_0x2304b0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2304B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2304B0u;
        // 0x2304b4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2304b0) {
            ctx->pc = 0x230550u;
            goto label_230550;
        }
    }
    ctx->pc = 0x2304B8u;
label_2304b8:
    // 0x2304b8: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x2304b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2304bc:
    // 0x2304bc: 0x3c170070  lui         $s7, 0x70
    ctx->pc = 0x2304bcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)112 << 16));
label_2304c0:
    // 0x2304c0: 0x24130228  addiu       $s3, $zero, 0x228
    ctx->pc = 0x2304c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_2304c4:
    // 0x2304c4: 0x0  nop
    ctx->pc = 0x2304c4u;
    // NOP
label_2304c8:
    // 0x2304c8: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x2304c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_2304cc:
    // 0x2304cc: 0xc0e409a  jal         func_390268
label_2304d0:
    if (ctx->pc == 0x2304D0u) {
        ctx->pc = 0x2304D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2304CCu;
        // 0x2304d0: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2304D4u;
        goto label_2304d4;
    }
    ctx->pc = 0x2304CCu;
    SET_GPR_U32(ctx, 31, 0x2304D4u);
    ctx->pc = 0x2304D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2304CCu;
    // 0x2304d0: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2304CCu, 0x2304D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2304D4u;
label_2304d4:
    // 0x2304d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2304d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2304d8:
    // 0x2304d8: 0xc087502  jal         func_21D408
label_2304dc:
    if (ctx->pc == 0x2304DCu) {
        ctx->pc = 0x2304DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2304D8u;
        // 0x2304dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2304E0u;
        goto label_2304e0;
    }
    ctx->pc = 0x2304D8u;
    SET_GPR_U32(ctx, 31, 0x2304E0u);
    ctx->pc = 0x2304DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2304D8u;
    // 0x2304dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2304D8u, 0x2304E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2304E0u;
label_2304e0:
    // 0x2304e0: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2304e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2304e4:
    // 0x2304e4: 0x14750015  bne         $v1, $s5, . + 4 + (0x15 << 2)
label_2304e8:
    if (ctx->pc == 0x2304E8u) {
        ctx->pc = 0x2304E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2304E4u;
        // 0x2304e8: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2304ECu;
        goto label_2304ec;
    }
    ctx->pc = 0x2304E4u;
    {
        const bool branch_taken_0x2304e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x2304E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2304E4u;
        // 0x2304e8: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2304e4) {
            ctx->pc = 0x23053Cu;
            goto label_23053c;
        }
    }
    ctx->pc = 0x2304ECu;
label_2304ec:
    // 0x2304ec: 0x17d60005  bne         $fp, $s6, . + 4 + (0x5 << 2)
label_2304f0:
    if (ctx->pc == 0x2304F0u) {
        ctx->pc = 0x2304F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2304ECu;
        // 0x2304f0: 0x26e4e490  addiu       $a0, $s7, -0x1B70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294960272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2304F4u;
        goto label_2304f4;
    }
    ctx->pc = 0x2304ECu;
    {
        const bool branch_taken_0x2304ec = (GPR_U64(ctx, 30) != GPR_U64(ctx, 22));
        ctx->pc = 0x2304F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2304ECu;
        // 0x2304f0: 0x26e4e490  addiu       $a0, $s7, -0x1B70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294960272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2304ec) {
            ctx->pc = 0x230504u;
            goto label_230504;
        }
    }
    ctx->pc = 0x2304F4u;
label_2304f4:
    // 0x2304f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2304f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2304f8:
    // 0x2304f8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2304f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2304fc:
    // 0x2304fc: 0xc137894  jal         func_4DE250
label_230500:
    if (ctx->pc == 0x230500u) {
        ctx->pc = 0x230500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2304FCu;
        // 0x230500: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230504u;
        goto label_230504;
    }
    ctx->pc = 0x2304FCu;
    SET_GPR_U32(ctx, 31, 0x230504u);
    ctx->pc = 0x230500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2304FCu;
    // 0x230500: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE250u, 0x2304FCu, 0x230504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230504u;
label_230504:
    // 0x230504: 0xc107444  jal         func_41D110
label_230508:
    if (ctx->pc == 0x230508u) {
        ctx->pc = 0x230508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230504u;
        // 0x230508: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23050Cu;
        goto label_23050c;
    }
    ctx->pc = 0x230504u;
    SET_GPR_U32(ctx, 31, 0x23050Cu);
    ctx->pc = 0x230508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230504u;
    // 0x230508: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x230504u, 0x23050Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23050Cu;
label_23050c:
    // 0x23050c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_230510:
    if (ctx->pc == 0x230510u) {
        ctx->pc = 0x230510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23050Cu;
        // 0x230510: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230514u;
        goto label_230514;
    }
    ctx->pc = 0x23050Cu;
    {
        const bool branch_taken_0x23050c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23050Cu;
        // 0x230510: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23050c) {
            ctx->pc = 0x230554u;
            goto label_230554;
        }
    }
    ctx->pc = 0x230514u;
label_230514:
    // 0x230514: 0xc107458  jal         func_41D160
label_230518:
    if (ctx->pc == 0x230518u) {
        ctx->pc = 0x230518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230514u;
        // 0x230518: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23051Cu;
        goto label_23051c;
    }
    ctx->pc = 0x230514u;
    SET_GPR_U32(ctx, 31, 0x23051Cu);
    ctx->pc = 0x230518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230514u;
    // 0x230518: 0x8e84489c  lw          $a0, 0x489C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x230514u, 0x23051Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23051Cu;
label_23051c:
    // 0x23051c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_230520:
    if (ctx->pc == 0x230520u) {
        ctx->pc = 0x230520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23051Cu;
        // 0x230520: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230524u;
        goto label_230524;
    }
    ctx->pc = 0x23051Cu;
    {
        const bool branch_taken_0x23051c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23051Cu;
        // 0x230520: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23051c) {
            ctx->pc = 0x230550u;
            goto label_230550;
        }
    }
    ctx->pc = 0x230524u;
label_230524:
    // 0x230524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_230528:
    // 0x230528: 0x2445c040  addiu       $a1, $v0, -0x3FC0
    ctx->pc = 0x230528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950976));
label_23052c:
    // 0x23052c: 0xc089c7c  jal         func_2271F0
label_230530:
    if (ctx->pc == 0x230530u) {
        ctx->pc = 0x230530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23052Cu;
        // 0x230530: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230534u;
        goto label_230534;
    }
    ctx->pc = 0x23052Cu;
    SET_GPR_U32(ctx, 31, 0x230534u);
    ctx->pc = 0x230530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23052Cu;
    // 0x230530: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2271F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2271F0u, 0x23052Cu, 0x230534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230534u;
label_230534:
    // 0x230534: 0x10000007  b           . + 4 + (0x7 << 2)
label_230538:
    if (ctx->pc == 0x230538u) {
        ctx->pc = 0x230538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230534u;
        // 0x230538: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23053Cu;
        goto label_23053c;
    }
    ctx->pc = 0x230534u;
    {
        const bool branch_taken_0x230534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230534u;
        // 0x230538: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230534) {
            ctx->pc = 0x230554u;
            goto label_230554;
        }
    }
    ctx->pc = 0x23053Cu;
label_23053c:
    // 0x23053c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23053cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_230540:
    // 0x230540: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x230540u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_230544:
    // 0x230544: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x230544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_230548:
    // 0x230548: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_23054c:
    if (ctx->pc == 0x23054Cu) {
        ctx->pc = 0x23054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230548u;
        // 0x23054c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230550u;
        goto label_230550;
    }
    ctx->pc = 0x230548u;
    {
        const bool branch_taken_0x230548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230548u;
        // 0x23054c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230548) {
            ctx->pc = 0x2304C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2304c8;
        }
    }
    ctx->pc = 0x230550u;
label_230550:
    // 0x230550: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_230554:
    // 0x230554: 0xc089974  jal         func_2265D0
label_230558:
    if (ctx->pc == 0x230558u) {
        ctx->pc = 0x230558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230554u;
        // 0x230558: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23055Cu;
        goto label_23055c;
    }
    ctx->pc = 0x230554u;
    SET_GPR_U32(ctx, 31, 0x23055Cu);
    ctx->pc = 0x230558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230554u;
    // 0x230558: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x230554u, 0x23055Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23055Cu;
label_23055c:
    // 0x23055c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23055cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_230560:
    // 0x230560: 0xc089988  jal         func_226620
label_230564:
    if (ctx->pc == 0x230564u) {
        ctx->pc = 0x230564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230560u;
        // 0x230564: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x230568u;
        goto label_230568;
    }
    ctx->pc = 0x230560u;
    SET_GPR_U32(ctx, 31, 0x230568u);
    ctx->pc = 0x230564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230560u;
    // 0x230564: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x230560u, 0x230568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230568u;
label_230568:
    // 0x230568: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x230568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_23056c:
    // 0x23056c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x23056cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_230570:
    // 0x230570: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x230570u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_230574:
    // 0x230574: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x230574u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_230578:
    // 0x230578: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x230578u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23057c:
    // 0x23057c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x23057cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_230580:
    // 0x230580: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x230580u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_230584:
    // 0x230584: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x230584u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_230588:
    // 0x230588: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x230588u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23058c:
    // 0x23058c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23058cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_230590:
    // 0x230590: 0x3e00008  jr          $ra
label_230594:
    if (ctx->pc == 0x230594u) {
        ctx->pc = 0x230594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230590u;
        // 0x230594: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230598u;
        goto label_fallthrough_0x230590;
    }
    ctx->pc = 0x230590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230590u;
        // 0x230594: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x230590:
    ctx->pc = 0x230598u;
}
