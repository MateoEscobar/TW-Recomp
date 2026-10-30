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

// Function: sub_004172C8
// Address: 0x4172c8 - 0x417480
void sub_004172C8_0x4172c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004172C8_0x4172c8");
#endif

    switch (ctx->pc) {
        case 0x4172c8u: goto label_4172c8;
        case 0x4172ccu: goto label_4172cc;
        case 0x4172d0u: goto label_4172d0;
        case 0x4172d4u: goto label_4172d4;
        case 0x4172d8u: goto label_4172d8;
        case 0x4172dcu: goto label_4172dc;
        case 0x4172e0u: goto label_4172e0;
        case 0x4172e4u: goto label_4172e4;
        case 0x4172e8u: goto label_4172e8;
        case 0x4172ecu: goto label_4172ec;
        case 0x4172f0u: goto label_4172f0;
        case 0x4172f4u: goto label_4172f4;
        case 0x4172f8u: goto label_4172f8;
        case 0x4172fcu: goto label_4172fc;
        case 0x417300u: goto label_417300;
        case 0x417304u: goto label_417304;
        case 0x417308u: goto label_417308;
        case 0x41730cu: goto label_41730c;
        case 0x417310u: goto label_417310;
        case 0x417314u: goto label_417314;
        case 0x417318u: goto label_417318;
        case 0x41731cu: goto label_41731c;
        case 0x417320u: goto label_417320;
        case 0x417324u: goto label_417324;
        case 0x417328u: goto label_417328;
        case 0x41732cu: goto label_41732c;
        case 0x417330u: goto label_417330;
        case 0x417334u: goto label_417334;
        case 0x417338u: goto label_417338;
        case 0x41733cu: goto label_41733c;
        case 0x417340u: goto label_417340;
        case 0x417344u: goto label_417344;
        case 0x417348u: goto label_417348;
        case 0x41734cu: goto label_41734c;
        case 0x417350u: goto label_417350;
        case 0x417354u: goto label_417354;
        case 0x417358u: goto label_417358;
        case 0x41735cu: goto label_41735c;
        case 0x417360u: goto label_417360;
        case 0x417364u: goto label_417364;
        case 0x417368u: goto label_417368;
        case 0x41736cu: goto label_41736c;
        case 0x417370u: goto label_417370;
        case 0x417374u: goto label_417374;
        case 0x417378u: goto label_417378;
        case 0x41737cu: goto label_41737c;
        case 0x417380u: goto label_417380;
        case 0x417384u: goto label_417384;
        case 0x417388u: goto label_417388;
        case 0x41738cu: goto label_41738c;
        case 0x417390u: goto label_417390;
        case 0x417394u: goto label_417394;
        case 0x417398u: goto label_417398;
        case 0x41739cu: goto label_41739c;
        case 0x4173a0u: goto label_4173a0;
        case 0x4173a4u: goto label_4173a4;
        case 0x4173a8u: goto label_4173a8;
        case 0x4173acu: goto label_4173ac;
        case 0x4173b0u: goto label_4173b0;
        case 0x4173b4u: goto label_4173b4;
        case 0x4173b8u: goto label_4173b8;
        case 0x4173bcu: goto label_4173bc;
        case 0x4173c0u: goto label_4173c0;
        case 0x4173c4u: goto label_4173c4;
        case 0x4173c8u: goto label_4173c8;
        case 0x4173ccu: goto label_4173cc;
        case 0x4173d0u: goto label_4173d0;
        case 0x4173d4u: goto label_4173d4;
        case 0x4173d8u: goto label_4173d8;
        case 0x4173dcu: goto label_4173dc;
        case 0x4173e0u: goto label_4173e0;
        case 0x4173e4u: goto label_4173e4;
        case 0x4173e8u: goto label_4173e8;
        case 0x4173ecu: goto label_4173ec;
        case 0x4173f0u: goto label_4173f0;
        case 0x4173f4u: goto label_4173f4;
        case 0x4173f8u: goto label_4173f8;
        case 0x4173fcu: goto label_4173fc;
        case 0x417400u: goto label_417400;
        case 0x417404u: goto label_417404;
        case 0x417408u: goto label_417408;
        case 0x41740cu: goto label_41740c;
        case 0x417410u: goto label_417410;
        case 0x417414u: goto label_417414;
        case 0x417418u: goto label_417418;
        case 0x41741cu: goto label_41741c;
        case 0x417420u: goto label_417420;
        case 0x417424u: goto label_417424;
        case 0x417428u: goto label_417428;
        case 0x41742cu: goto label_41742c;
        case 0x417430u: goto label_417430;
        case 0x417434u: goto label_417434;
        case 0x417438u: goto label_417438;
        case 0x41743cu: goto label_41743c;
        case 0x417440u: goto label_417440;
        case 0x417444u: goto label_417444;
        case 0x417448u: goto label_417448;
        case 0x41744cu: goto label_41744c;
        case 0x417450u: goto label_417450;
        case 0x417454u: goto label_417454;
        case 0x417458u: goto label_417458;
        case 0x41745cu: goto label_41745c;
        case 0x417460u: goto label_417460;
        case 0x417464u: goto label_417464;
        case 0x417468u: goto label_417468;
        case 0x41746cu: goto label_41746c;
        case 0x417470u: goto label_417470;
        case 0x417474u: goto label_417474;
        case 0x417478u: goto label_417478;
        case 0x41747cu: goto label_41747c;
        default: break;
    }

    ctx->pc = 0x4172c8u;

label_4172c8:
    // 0x4172c8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x4172c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_4172cc:
    // 0x4172cc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4172ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4172d0:
    // 0x4172d0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x4172d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_4172d4:
    // 0x4172d4: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x4172d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_4172d8:
    // 0x4172d8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x4172d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4172dc:
    // 0x4172dc: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x4172dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_4172e0:
    // 0x4172e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4172e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4172e4:
    // 0x4172e4: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x4172e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_4172e8:
    // 0x4172e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4172e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4172ec:
    // 0x4172ec: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x4172ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_4172f0:
    // 0x4172f0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4172f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4172f4:
    // 0x4172f4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4172f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4172f8:
    // 0x4172f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4172f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4172fc:
    // 0x4172fc: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x4172fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_417300:
    // 0x417300: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x417300u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_417304:
    // 0x417304: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x417304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_417308:
    // 0x417308: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x417308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_41730c:
    // 0x41730c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x41730cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_417310:
    // 0x417310: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x417310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_417314:
    // 0x417314: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x417314u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_417318:
    // 0x417318: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x417318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_41731c:
    // 0x41731c: 0x60f809  jalr        $v1
label_417320:
    if (ctx->pc == 0x417320u) {
        ctx->pc = 0x417320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41731Cu;
        // 0x417320: 0xe52821  addu        $a1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417324u;
        goto label_417324;
    }
    ctx->pc = 0x41731Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x417324u);
        ctx->pc = 0x417320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41731Cu;
        // 0x417320: 0xe52821  addu        $a1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41731Cu, 0x417324u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x417324u;
label_417324:
    // 0x417324: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x417324u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_417328:
    // 0x417328: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x417328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_41732c:
    // 0x41732c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x41732cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_417330:
    // 0x417330: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x417330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_417334:
    // 0x417334: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x417334u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_417338:
    // 0x417338: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x417338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_41733c:
    // 0x41733c: 0xc0f809  jalr        $a2
label_417340:
    if (ctx->pc == 0x417340u) {
        ctx->pc = 0x417340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41733Cu;
        // 0x417340: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417344u;
        goto label_417344;
    }
    ctx->pc = 0x41733Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x417344u);
        ctx->pc = 0x417340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41733Cu;
        // 0x417340: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41733Cu, 0x417344u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x417344u;
label_417344:
    // 0x417344: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x417344u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_417348:
    // 0x417348: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x417348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41734c:
    // 0x41734c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41734cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_417350:
    // 0x417350: 0xc105b84  jal         func_416E10
label_417354:
    if (ctx->pc == 0x417354u) {
        ctx->pc = 0x417354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417350u;
        // 0x417354: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417358u;
        goto label_417358;
    }
    ctx->pc = 0x417350u;
    SET_GPR_U32(ctx, 31, 0x417358u);
    ctx->pc = 0x417354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417350u;
    // 0x417354: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416E10u, 0x417350u, 0x417358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417358u;
label_417358:
    // 0x417358: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x417358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_41735c:
    // 0x41735c: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x41735cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_417360:
    // 0x417360: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x417360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_417364:
    // 0x417364: 0x0  nop
    ctx->pc = 0x417364u;
    // NOP
label_417368:
    // 0x417368: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x417368u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_41736c:
    // 0x41736c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41736cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_417370:
    // 0x417370: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x417370u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_417374:
    // 0x417374: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x417374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_417378:
    // 0x417378: 0x2ac03  sra         $s5, $v0, 16
    ctx->pc = 0x417378u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 16));
label_41737c:
    // 0x41737c: 0x1000002f  b           . + 4 + (0x2F << 2)
label_417380:
    if (ctx->pc == 0x417380u) {
        ctx->pc = 0x417380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41737Cu;
        // 0x417380: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417384u;
        goto label_417384;
    }
    ctx->pc = 0x41737Cu;
    {
        const bool branch_taken_0x41737c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x417380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41737Cu;
        // 0x417380: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41737c) {
            ctx->pc = 0x41743Cu;
            goto label_41743c;
        }
    }
    ctx->pc = 0x417384u;
label_417384:
    // 0x417384: 0x0  nop
    ctx->pc = 0x417384u;
    // NOP
label_417388:
    // 0x417388: 0xc105774  jal         func_415DD0
label_41738c:
    if (ctx->pc == 0x41738Cu) {
        ctx->pc = 0x41738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417388u;
        // 0x41738c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417390u;
        goto label_417390;
    }
    ctx->pc = 0x417388u;
    SET_GPR_U32(ctx, 31, 0x417390u);
    ctx->pc = 0x41738Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417388u;
    // 0x41738c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DD0u, 0x417388u, 0x417390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417390u;
label_417390:
    // 0x417390: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x417390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_417394:
    // 0x417394: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x417394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_417398:
    // 0x417398: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
label_41739c:
    if (ctx->pc == 0x41739Cu) {
        ctx->pc = 0x41739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417398u;
        // 0x41739c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4173A0u;
        goto label_4173a0;
    }
    ctx->pc = 0x417398u;
    {
        const bool branch_taken_0x417398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x417398) {
            ctx->pc = 0x41739Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x417398u;
            // 0x41739c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41743Cu;
            goto label_41743c;
        }
    }
    ctx->pc = 0x4173A0u;
label_4173a0:
    // 0x4173a0: 0x962200d0  lhu         $v0, 0xD0($s1)
    ctx->pc = 0x4173a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 208)));
label_4173a4:
    // 0x4173a4: 0x54560025  bnel        $v0, $s6, . + 4 + (0x25 << 2)
label_4173a8:
    if (ctx->pc == 0x4173A8u) {
        ctx->pc = 0x4173A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4173A4u;
        // 0x4173a8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4173ACu;
        goto label_4173ac;
    }
    ctx->pc = 0x4173A4u;
    {
        const bool branch_taken_0x4173a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x4173a4) {
            ctx->pc = 0x4173A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4173A4u;
            // 0x4173a8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41743Cu;
            goto label_41743c;
        }
    }
    ctx->pc = 0x4173ACu;
label_4173ac:
    // 0x4173ac: 0xc10587a  jal         func_4161E8
label_4173b0:
    if (ctx->pc == 0x4173B0u) {
        ctx->pc = 0x4173B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4173ACu;
        // 0x4173b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4173B4u;
        goto label_4173b4;
    }
    ctx->pc = 0x4173ACu;
    SET_GPR_U32(ctx, 31, 0x4173B4u);
    ctx->pc = 0x4173B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4173ACu;
    // 0x4173b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x4173ACu, 0x4173B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4173B4u;
label_4173b4:
    // 0x4173b4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x4173b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_4173b8:
    // 0x4173b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4173b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4173bc:
    // 0x4173bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4173bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4173c0:
    // 0x4173c0: 0xc105b84  jal         func_416E10
label_4173c4:
    if (ctx->pc == 0x4173C4u) {
        ctx->pc = 0x4173C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4173C0u;
        // 0x4173c4: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4173C8u;
        goto label_4173c8;
    }
    ctx->pc = 0x4173C0u;
    SET_GPR_U32(ctx, 31, 0x4173C8u);
    ctx->pc = 0x4173C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4173C0u;
    // 0x4173c4: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416E10u, 0x4173C0u, 0x4173C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4173C8u;
label_4173c8:
    // 0x4173c8: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x4173c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_4173cc:
    // 0x4173cc: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x4173ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_4173d0:
    // 0x4173d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4173d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4173d4:
    // 0x4173d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4173d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4173d8:
    // 0x4173d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4173d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4173dc:
    // 0x4173dc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4173dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4173e0:
    // 0x4173e0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x4173e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_4173e4:
    // 0x4173e4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4173e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4173e8:
    // 0x4173e8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4173e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4173ec:
    // 0x4173ec: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x4173ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_4173f0:
    // 0x4173f0: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
label_4173f4:
    if (ctx->pc == 0x4173F4u) {
        ctx->pc = 0x4173F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4173F0u;
        // 0x4173f4: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4173F8u;
        goto label_4173f8;
    }
    ctx->pc = 0x4173F0u;
    {
        const bool branch_taken_0x4173f0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4173f0) {
            ctx->pc = 0x4173F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4173F0u;
            // 0x4173f4: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4173F8u;
            goto label_4173f8;
        }
    }
    ctx->pc = 0x4173F8u;
label_4173f8:
    // 0x4173f8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4173f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4173fc:
    // 0x4173fc: 0xc10587a  jal         func_4161E8
label_417400:
    if (ctx->pc == 0x417400u) {
        ctx->pc = 0x417400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4173FCu;
        // 0x417400: 0x28403  sra         $s0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417404u;
        goto label_417404;
    }
    ctx->pc = 0x4173FCu;
    SET_GPR_U32(ctx, 31, 0x417404u);
    ctx->pc = 0x417400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4173FCu;
    // 0x417400: 0x28403  sra         $s0, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x4173FCu, 0x417404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417404u;
label_417404:
    // 0x417404: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x417404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_417408:
    // 0x417408: 0xc0cdb26  jal         func_336C98
label_41740c:
    if (ctx->pc == 0x41740Cu) {
        ctx->pc = 0x41740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417408u;
        // 0x41740c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417410u;
        goto label_417410;
    }
    ctx->pc = 0x417408u;
    SET_GPR_U32(ctx, 31, 0x417410u);
    ctx->pc = 0x41740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417408u;
    // 0x41740c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336C98u, 0x417408u, 0x417410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417410u;
label_417410:
    // 0x417410: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x417410u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_417414:
    // 0x417414: 0x0  nop
    ctx->pc = 0x417414u;
    // NOP
label_417418:
    // 0x417418: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_41741c:
    if (ctx->pc == 0x41741Cu) {
        ctx->pc = 0x41741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417418u;
        // 0x41741c: 0x2a02005a  slti        $v0, $s0, 0x5A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)90) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x417420u;
        goto label_417420;
    }
    ctx->pc = 0x417418u;
    {
        const bool branch_taken_0x417418 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x41741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417418u;
        // 0x41741c: 0x2a02005a  slti        $v0, $s0, 0x5A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)90) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x417418) {
            ctx->pc = 0x417438u;
            goto label_417438;
        }
    }
    ctx->pc = 0x417420u;
label_417420:
    // 0x417420: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_417424:
    if (ctx->pc == 0x417424u) {
        ctx->pc = 0x417424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417420u;
        // 0x417424: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417428u;
        goto label_417428;
    }
    ctx->pc = 0x417420u;
    {
        const bool branch_taken_0x417420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x417420) {
            ctx->pc = 0x417424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x417420u;
            // 0x417424: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x417434u;
            goto label_417434;
        }
    }
    ctx->pc = 0x417428u;
label_417428:
    // 0x417428: 0x56800004  bnel        $s4, $zero, . + 4 + (0x4 << 2)
label_41742c:
    if (ctx->pc == 0x41742Cu) {
        ctx->pc = 0x41742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417428u;
        // 0x41742c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417430u;
        goto label_417430;
    }
    ctx->pc = 0x417428u;
    {
        const bool branch_taken_0x417428 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x417428) {
            ctx->pc = 0x41742Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x417428u;
            // 0x41742c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41743Cu;
            goto label_41743c;
        }
    }
    ctx->pc = 0x417430u;
label_417430:
    // 0x417430: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x417430u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_417434:
    // 0x417434: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x417434u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_417438:
    // 0x417438: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x417438u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_41743c:
    // 0x41743c: 0xc10574c  jal         func_415D30
label_417440:
    if (ctx->pc == 0x417440u) {
        ctx->pc = 0x417444u;
        goto label_417444;
    }
    ctx->pc = 0x41743Cu;
    SET_GPR_U32(ctx, 31, 0x417444u);
    ctx->pc = 0x415D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415D30u, 0x41743Cu, 0x417444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417444u;
label_417444:
    // 0x417444: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x417444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_417448:
    // 0x417448: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
label_41744c:
    if (ctx->pc == 0x41744Cu) {
        ctx->pc = 0x41744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417448u;
        // 0x41744c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417450u;
        goto label_417450;
    }
    ctx->pc = 0x417448u;
    {
        const bool branch_taken_0x417448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417448u;
        // 0x41744c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417448) {
            ctx->pc = 0x417388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_417388;
        }
    }
    ctx->pc = 0x417450u;
label_417450:
    // 0x417450: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x417450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_417454:
    // 0x417454: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x417454u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_417458:
    // 0x417458: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x417458u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_41745c:
    // 0x41745c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x41745cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_417460:
    // 0x417460: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x417460u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_417464:
    // 0x417464: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x417464u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_417468:
    // 0x417468: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x417468u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_41746c:
    // 0x41746c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x41746cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_417470:
    // 0x417470: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x417470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_417474:
    // 0x417474: 0x3e00008  jr          $ra
label_417478:
    if (ctx->pc == 0x417478u) {
        ctx->pc = 0x417478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417474u;
        // 0x417478: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41747Cu;
        goto label_41747c;
    }
    ctx->pc = 0x417474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x417478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417474u;
        // 0x417478: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41747Cu;
label_41747c:
    // 0x41747c: 0x0  nop
    ctx->pc = 0x41747cu;
    // NOP
    ctx->pc = 0x417480u;
}
