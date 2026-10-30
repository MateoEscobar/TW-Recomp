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

// Function: sub_00424298
// Address: 0x424298 - 0x424540
void sub_00424298_0x424298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00424298_0x424298");
#endif

    switch (ctx->pc) {
        case 0x424324u: goto label_424324;
        case 0x424338u: goto label_424338;
        case 0x424340u: goto label_424340;
        case 0x424404u: goto label_424404;
        case 0x424440u: goto label_424440;
        case 0x4244d4u: goto label_4244d4;
        default: break;
    }

    ctx->pc = 0x424298u;

    // 0x424298: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x424298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x42429c: 0xafa60190  sw          $a2, 0x190($sp)
    ctx->pc = 0x42429cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 6));
    // 0x4242a0: 0x7fb10220  sq          $s1, 0x220($sp)
    ctx->pc = 0x4242a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 17));
    // 0x4242a4: 0x7fb20210  sq          $s2, 0x210($sp)
    ctx->pc = 0x4242a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 18));
    // 0x4242a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4242a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4242ac: 0x7fb30200  sq          $s3, 0x200($sp)
    ctx->pc = 0x4242acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 19));
    // 0x4242b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4242b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4242b4: 0x7fb501e0  sq          $s5, 0x1E0($sp)
    ctx->pc = 0x4242b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 21));
    // 0x4242b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4242b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4242bc: 0x7fb601d0  sq          $s6, 0x1D0($sp)
    ctx->pc = 0x4242bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 22));
    // 0x4242c0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x4242c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4242c4: 0x7fb701c0  sq          $s7, 0x1C0($sp)
    ctx->pc = 0x4242c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 23));
    // 0x4242c8: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x4242c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4242cc: 0x7fbe01b0  sq          $fp, 0x1B0($sp)
    ctx->pc = 0x4242ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 30));
    // 0x4242d0: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x4242d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4242d4: 0xafa70194  sw          $a3, 0x194($sp)
    ctx->pc = 0x4242d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 7));
    // 0x4242d8: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x4242d8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4242dc: 0x7fb00230  sq          $s0, 0x230($sp)
    ctx->pc = 0x4242dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 16));
    // 0x4242e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4242e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4242e4: 0x7fb401f0  sq          $s4, 0x1F0($sp)
    ctx->pc = 0x4242e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 20));
    // 0x4242e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4242e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4242ec: 0xffbf01a0  sd          $ra, 0x1A0($sp)
    ctx->pc = 0x4242ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 31));
    // 0x4242f0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x4242f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x4242f4: 0xafa80198  sw          $t0, 0x198($sp)
    ctx->pc = 0x4242f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 8));
    // 0x4242f8: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x4242f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x4242fc: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x4242fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x424300: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x424300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x424304: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x424304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x424308: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x424308u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x42430c: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x42430cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x424310: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x424310u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x424314: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x424314u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x424318: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x424318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x42431c: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x42431Cu;
    SET_GPR_U32(ctx, 31, 0x424324u);
    ctx->pc = 0x424320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42431Cu;
    // 0x424320: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x42431Cu, 0x424324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x424324u;
label_424324:
    // 0x424324: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x424324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x424328: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x424328u;
    {
        const bool branch_taken_0x424328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424328u;
        // 0x42432c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424328) {
            ctx->pc = 0x4244FCu;
            goto label_4244fc;
        }
    }
    ctx->pc = 0x424330u;
    // 0x424330: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x424330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424334: 0x0  nop
    ctx->pc = 0x424334u;
    // NOP
label_424338:
    // 0x424338: 0xc108f3c  jal         func_423CF0
    ctx->pc = 0x424338u;
    SET_GPR_U32(ctx, 31, 0x424340u);
    ctx->pc = 0x42433Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x424338u;
    // 0x42433c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423CF0u, 0x424338u, 0x424340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x424340u;
label_424340:
    // 0x424340: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x424340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424344: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x424344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x424348: 0x16a20009  bne         $s5, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x424348u;
    {
        const bool branch_taken_0x424348 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x42434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424348u;
        // 0x42434c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424348) {
            ctx->pc = 0x424370u;
            goto label_424370;
        }
    }
    ctx->pc = 0x424350u;
    // 0x424350: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x424350u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x424354: 0x2c62003c  sltiu       $v0, $v1, 0x3C
    ctx->pc = 0x424354u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x424358: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x424358u;
    {
        const bool branch_taken_0x424358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424358u;
        // 0x42435c: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424358) {
            ctx->pc = 0x424374u;
            goto label_424374;
        }
    }
    ctx->pc = 0x424360u;
    // 0x424360: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x424360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x424364: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x424364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424368: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x424368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x42436c: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x42436cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_424370:
    // 0x424370: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x424370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_424374:
    // 0x424374: 0x16a20007  bne         $s5, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x424374u;
    {
        const bool branch_taken_0x424374 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x424374) {
            ctx->pc = 0x424394u;
            goto label_424394;
        }
    }
    ctx->pc = 0x42437Cu;
    // 0x42437c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x42437cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x424380: 0x2c620065  sltiu       $v0, $v1, 0x65
    ctx->pc = 0x424380u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
    // 0x424384: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x424384u;
    {
        const bool branch_taken_0x424384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x424388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424384u;
        // 0x424388: 0x24020089  addiu       $v0, $zero, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424384) {
            ctx->pc = 0x424394u;
            goto label_424394;
        }
    }
    ctx->pc = 0x42438Cu;
    // 0x42438c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x42438cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x424390: 0x282200a  movz        $a0, $s4, $v0
    ctx->pc = 0x424390u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 20));
label_424394:
    // 0x424394: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x424394u;
    {
        const bool branch_taken_0x424394 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x424394) {
            ctx->pc = 0x424398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x424394u;
            // 0x424398: 0x92040001  lbu         $a0, 0x1($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4243ACu;
            goto label_4243ac;
        }
    }
    ctx->pc = 0x42439Cu;
    // 0x42439c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x42439cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4243a0: 0x54550052  bnel        $v0, $s5, . + 4 + (0x52 << 2)
    ctx->pc = 0x4243A0u;
    {
        const bool branch_taken_0x4243a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x4243a0) {
            ctx->pc = 0x4243A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4243A0u;
            // 0x4243a4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4244ECu;
            goto label_4244ec;
        }
    }
    ctx->pc = 0x4243A8u;
    // 0x4243a8: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x4243a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_4243ac:
    // 0x4243ac: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4243ACu;
    {
        const bool branch_taken_0x4243ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4243ac) {
            ctx->pc = 0x4243D0u;
            goto label_4243d0;
        }
    }
    ctx->pc = 0x4243B4u;
    // 0x4243b4: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x4243b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x4243b8: 0x72102b  sltu        $v0, $v1, $s2
    ctx->pc = 0x4243b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x4243bc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4243BCu;
    {
        const bool branch_taken_0x4243bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4243C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4243BCu;
        // 0x4243c0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4243bc) {
            ctx->pc = 0x4243C8u;
            goto label_4243c8;
        }
    }
    ctx->pc = 0x4243C4u;
    // 0x4243c4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4243c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4243c8:
    // 0x4243c8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4243C8u;
    {
        const bool branch_taken_0x4243c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4243CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4243C8u;
        // 0x4243cc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4243c8) {
            ctx->pc = 0x4243D8u;
            goto label_4243d8;
        }
    }
    ctx->pc = 0x4243D0u;
label_4243d0:
    // 0x4243d0: 0x54940046  bnel        $a0, $s4, . + 4 + (0x46 << 2)
    ctx->pc = 0x4243D0u;
    {
        const bool branch_taken_0x4243d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        if (branch_taken_0x4243d0) {
            ctx->pc = 0x4243D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4243D0u;
            // 0x4243d4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4244ECu;
            goto label_4244ec;
        }
    }
    ctx->pc = 0x4243D8u;
label_4243d8:
    // 0x4243d8: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x4243d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x4243dc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4243dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4243e0: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x4243E0u;
    {
        const bool branch_taken_0x4243e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4243E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4243E0u;
        // 0x4243e4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4243e0) {
            ctx->pc = 0x424420u;
            goto label_424420;
        }
    }
    ctx->pc = 0x4243E8u;
    // 0x4243e8: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x4243e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x4243ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4243ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4243f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4243f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4243f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4243f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4243f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4243f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4243fc: 0xc109026  jal         func_424098
    ctx->pc = 0x4243FCu;
    SET_GPR_U32(ctx, 31, 0x424404u);
    ctx->pc = 0x424400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4243FCu;
    // 0x424400: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424098u, 0x4243FCu, 0x424404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x424404u;
label_424404:
    // 0x424404: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x424404u;
    {
        const bool branch_taken_0x424404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x424408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424404u;
        // 0x424408: 0x8fa30194  lw          $v1, 0x194($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424404) {
            ctx->pc = 0x424418u;
            goto label_424418;
        }
    }
    ctx->pc = 0x42440Cu;
    // 0x42440c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x42440cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x424410: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x424410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x424414: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x424414u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_424418:
    // 0x424418: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x424418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x42441c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x42441cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_424420:
    // 0x424420: 0x5443000d  bnel        $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x424420u;
    {
        const bool branch_taken_0x424420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x424420) {
            ctx->pc = 0x424424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x424420u;
            // 0x424424: 0x92020001  lbu         $v0, 0x1($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x424458u;
            goto label_424458;
        }
    }
    ctx->pc = 0x424428u;
    // 0x424428: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x424428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x42442c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x42442cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424430: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x424430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424434: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x424434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x424438: 0xc109026  jal         func_424098
    ctx->pc = 0x424438u;
    SET_GPR_U32(ctx, 31, 0x424440u);
    ctx->pc = 0x42443Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x424438u;
    // 0x42443c: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424098u, 0x424438u, 0x424440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x424440u;
label_424440:
    // 0x424440: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x424440u;
    {
        const bool branch_taken_0x424440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x424440) {
            ctx->pc = 0x424444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x424440u;
            // 0x424444: 0x92020001  lbu         $v0, 0x1($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x424458u;
            goto label_424458;
        }
    }
    ctx->pc = 0x424448u;
    // 0x424448: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x424448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x42444c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x42444cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x424450: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x424450u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x424454: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x424454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_424458:
    // 0x424458: 0x54540024  bnel        $v0, $s4, . + 4 + (0x24 << 2)
    ctx->pc = 0x424458u;
    {
        const bool branch_taken_0x424458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x424458) {
            ctx->pc = 0x42445Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x424458u;
            // 0x42445c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4244ECu;
            goto label_4244ec;
        }
    }
    ctx->pc = 0x424460u;
    // 0x424460: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x424460u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x424464: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x424464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x424468: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x424468u;
    {
        const bool branch_taken_0x424468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x42446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424468u;
        // 0x42446c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424468) {
            ctx->pc = 0x424490u;
            goto label_424490;
        }
    }
    ctx->pc = 0x424470u;
    // 0x424470: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x424470u;
    {
        const bool branch_taken_0x424470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x424474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424470u;
        // 0x424474: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424470) {
            ctx->pc = 0x424490u;
            goto label_424490;
        }
    }
    ctx->pc = 0x424478u;
    // 0x424478: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x424478u;
    {
        const bool branch_taken_0x424478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x42447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424478u;
        // 0x42447c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424478) {
            ctx->pc = 0x424490u;
            goto label_424490;
        }
    }
    ctx->pc = 0x424480u;
    // 0x424480: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x424480u;
    {
        const bool branch_taken_0x424480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x424480) {
            ctx->pc = 0x424484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x424480u;
            // 0x424484: 0x92050002  lbu         $a1, 0x2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x424494u;
            goto label_424494;
        }
    }
    ctx->pc = 0x424488u;
    // 0x424488: 0x54740018  bnel        $v1, $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x424488u;
    {
        const bool branch_taken_0x424488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x424488) {
            ctx->pc = 0x42448Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x424488u;
            // 0x42448c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4244ECu;
            goto label_4244ec;
        }
    }
    ctx->pc = 0x424490u;
label_424490:
    // 0x424490: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x424490u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_424494:
    // 0x424494: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x424494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x424498: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x424498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x42449c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x42449cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4244a0: 0x54800012  bnel        $a0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x4244A0u;
    {
        const bool branch_taken_0x4244a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4244a0) {
            ctx->pc = 0x4244A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4244A0u;
            // 0x4244a4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4244ECu;
            goto label_4244ec;
        }
    }
    ctx->pc = 0x4244A8u;
    // 0x4244a8: 0x8fa30240  lw          $v1, 0x240($sp)
    ctx->pc = 0x4244a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x4244ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4244acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4244b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4244b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4244b4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4244b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4244b8: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x4244b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x4244bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4244bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4244c0: 0xacb40000  sw          $s4, 0x0($a1)
    ctx->pc = 0x4244c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 20));
    // 0x4244c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4244c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4244c8: 0x8fa30240  lw          $v1, 0x240($sp)
    ctx->pc = 0x4244c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x4244cc: 0xc109026  jal         func_424098
    ctx->pc = 0x4244CCu;
    SET_GPR_U32(ctx, 31, 0x4244D4u);
    ctx->pc = 0x4244D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4244CCu;
    // 0x4244d0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424098u, 0x4244CCu, 0x4244D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4244D4u;
label_4244d4:
    // 0x4244d4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4244D4u;
    {
        const bool branch_taken_0x4244d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4244d4) {
            ctx->pc = 0x4244D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4244D4u;
            // 0x4244d8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4244ECu;
            goto label_4244ec;
        }
    }
    ctx->pc = 0x4244DCu;
    // 0x4244dc: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4244dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4244e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4244e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4244e4: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x4244e4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x4244e8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4244e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4244ec:
    // 0x4244ec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4244ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x4244f0: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x4244f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4244f4: 0x1440ff90  bnez        $v0, . + 4 + (-0x70 << 2)
    ctx->pc = 0x4244F4u;
    {
        const bool branch_taken_0x4244f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4244F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4244F4u;
        // 0x4244f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4244f4) {
            ctx->pc = 0x424338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_424338;
        }
    }
    ctx->pc = 0x4244FCu;
label_4244fc:
    // 0x4244fc: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x4244fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x424500: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x424500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x424504: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x424504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x424508: 0x7bb00230  lq          $s0, 0x230($sp)
    ctx->pc = 0x424508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x42450c: 0x7bb10220  lq          $s1, 0x220($sp)
    ctx->pc = 0x42450cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x424510: 0x7bb20210  lq          $s2, 0x210($sp)
    ctx->pc = 0x424510u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x424514: 0x7bb30200  lq          $s3, 0x200($sp)
    ctx->pc = 0x424514u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x424518: 0x7bb401f0  lq          $s4, 0x1F0($sp)
    ctx->pc = 0x424518u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x42451c: 0x7bb501e0  lq          $s5, 0x1E0($sp)
    ctx->pc = 0x42451cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x424520: 0x7bb601d0  lq          $s6, 0x1D0($sp)
    ctx->pc = 0x424520u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x424524: 0x7bb701c0  lq          $s7, 0x1C0($sp)
    ctx->pc = 0x424524u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x424528: 0x7bbe01b0  lq          $fp, 0x1B0($sp)
    ctx->pc = 0x424528u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x42452c: 0xdfbf01a0  ld          $ra, 0x1A0($sp)
    ctx->pc = 0x42452cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x424530: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x424530u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x424534: 0x3e00008  jr          $ra
    ctx->pc = 0x424534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x424538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424534u;
        // 0x424538: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x424534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42453Cu;
    // 0x42453c: 0x0  nop
    ctx->pc = 0x42453cu;
    // NOP
    ctx->pc = 0x424540u;
}
