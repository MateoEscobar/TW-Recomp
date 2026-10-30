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

// Function: sub_00149520
// Address: 0x149520 - 0x149668
void sub_00149520_0x149520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149520_0x149520");
#endif

    switch (ctx->pc) {
        case 0x14955cu: goto label_14955c;
        case 0x149588u: goto label_149588;
        case 0x149594u: goto label_149594;
        case 0x1495a8u: goto label_1495a8;
        case 0x149604u: goto label_149604;
        case 0x149614u: goto label_149614;
        case 0x149628u: goto label_149628;
        case 0x149634u: goto label_149634;
        case 0x14963cu: goto label_14963c;
        default: break;
    }

    ctx->pc = 0x149520u;

    // 0x149520: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x149520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x149524: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x149524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149528: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x149528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x14952c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x14952cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x149530: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x149530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x149534: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x149534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149538: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x149538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x14953c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14953cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x149540: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x149540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x149544: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x149544u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x149548: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x149548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x14954c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x14954cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x149550: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149554: 0xc11331a  jal         func_44CC68
    ctx->pc = 0x149554u;
    SET_GPR_U32(ctx, 31, 0x14955Cu);
    ctx->pc = 0x149558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149554u;
    // 0x149558: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44CC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44CC68u, 0x149554u, 0x14955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14955Cu;
label_14955c:
    // 0x14955c: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x14955cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x149560: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x149560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x149564: 0x245799e8  addiu       $s7, $v0, -0x6618
    ctx->pc = 0x149564u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941160));
    // 0x149568: 0x2463e4e2  addiu       $v1, $v1, -0x1B1E
    ctx->pc = 0x149568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960354));
    // 0x14956c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x14956cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x149570: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x149570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x149574: 0x2456e380  addiu       $s6, $v0, -0x1C80
    ctx->pc = 0x149574u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960000));
    // 0x149578: 0x2492d810  addiu       $s2, $a0, -0x27F0
    ctx->pc = 0x149578u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957072));
    // 0x14957c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x14957cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149580: 0x24730006  addiu       $s3, $v1, 0x6
    ctx->pc = 0x149580u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x149584: 0x0  nop
    ctx->pc = 0x149584u;
    // NOP
label_149588:
    // 0x149588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14958c: 0xc10d6dc  jal         func_435B70
    ctx->pc = 0x14958Cu;
    SET_GPR_U32(ctx, 31, 0x149594u);
    ctx->pc = 0x149590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14958Cu;
    // 0x149590: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435B70u, 0x14958Cu, 0x149594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149594u;
label_149594:
    // 0x149594: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x149594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149598: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x149598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14959c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x14959cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1495a0: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x1495A0u;
    SET_GPR_U32(ctx, 31, 0x1495A8u);
    ctx->pc = 0x1495A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1495A0u;
    // 0x1495a4: 0x26730140  addiu       $s3, $s3, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x1495A0u, 0x1495A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1495A8u;
label_1495a8:
    // 0x1495a8: 0x111883  sra         $v1, $s1, 2
    ctx->pc = 0x1495a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 2));
    // 0x1495ac: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x1495acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x1495b0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1495b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1495b4: 0xae02ffe6  sw          $v0, -0x1A($s0)
    ctx->pc = 0x1495b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967270), GPR_U32(ctx, 2));
    // 0x1495b8: 0xae03ffe2  sw          $v1, -0x1E($s0)
    ctx->pc = 0x1495b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967266), GPR_U32(ctx, 3));
    // 0x1495bc: 0x2362021  addu        $a0, $s1, $s6
    ctx->pc = 0x1495bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x1495c0: 0xa2000006  sb          $zero, 0x6($s0)
    ctx->pc = 0x1495c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x1495c4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1495c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1495c8: 0xa2150007  sb          $s5, 0x7($s0)
    ctx->pc = 0x1495c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 21));
    // 0x1495cc: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x1495ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1495d0: 0xae17ffde  sw          $s7, -0x22($s0)
    ctx->pc = 0x1495d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967262), GPR_U32(ctx, 23));
    // 0x1495d4: 0xa6540042  sh          $s4, 0x42($s2)
    ctx->pc = 0x1495d4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 66), (uint16_t)GPR_U32(ctx, 20));
    // 0x1495d8: 0x26100140  addiu       $s0, $s0, 0x140
    ctx->pc = 0x1495d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x1495dc: 0xa6540044  sh          $s4, 0x44($s2)
    ctx->pc = 0x1495dcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 68), (uint16_t)GPR_U32(ctx, 20));
    // 0x1495e0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1495e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1495e4: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1495E4u;
    {
        const bool branch_taken_0x1495e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1495E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1495E4u;
        // 0x1495e8: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1495e4) {
            ctx->pc = 0x149588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149588;
        }
    }
    ctx->pc = 0x1495ECu;
    // 0x1495ec: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x1495ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x1495f0: 0x2610e3c0  addiu       $s0, $s0, -0x1C40
    ctx->pc = 0x1495f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960064));
    // 0x1495f4: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x1495f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5DE4C4u));
    // 0x1495f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1495f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1495fc: 0xc1133fa  jal         func_44CFE8
    ctx->pc = 0x1495FCu;
    SET_GPR_U32(ctx, 31, 0x149604u);
    ctx->pc = 0x149600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1495FCu;
    // 0x149600: 0x8e050108  lw          $a1, 0x108($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44CFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44CFE8u, 0x1495FCu, 0x149604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149604u;
label_149604:
    // 0x149604: 0x8e040604  lw          $a0, 0x604($s0)
    ctx->pc = 0x149604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x149608: 0x26060500  addiu       $a2, $s0, 0x500
    ctx->pc = 0x149608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1280));
    // 0x14960c: 0xc1133fa  jal         func_44CFE8
    ctx->pc = 0x14960Cu;
    SET_GPR_U32(ctx, 31, 0x149614u);
    ctx->pc = 0x149610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14960Cu;
    // 0x149610: 0x8e050608  lw          $a1, 0x608($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44CFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44CFE8u, 0x14960Cu, 0x149614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149614u;
label_149614:
    // 0x149614: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x149614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x149618: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x149618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14961c: 0x2484da90  addiu       $a0, $a0, -0x2570
    ctx->pc = 0x14961cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957712));
    // 0x149620: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x149620u;
    SET_GPR_U32(ctx, 31, 0x149628u);
    ctx->pc = 0x149624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149620u;
    // 0x149624: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x149620u, 0x149628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149628u;
label_149628:
    // 0x149628: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x149628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x14962c: 0xc0515e0  jal         func_145780
    ctx->pc = 0x14962Cu;
    SET_GPR_U32(ctx, 31, 0x149634u);
    ctx->pc = 0x149630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14962Cu;
    // 0x149630: 0x2484a980  addiu       $a0, $a0, -0x5680 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145780u, 0x14962Cu, 0x149634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149634u;
label_149634:
    // 0x149634: 0xc05152a  jal         func_1454A8
    ctx->pc = 0x149634u;
    SET_GPR_U32(ctx, 31, 0x14963Cu);
    ctx->pc = 0x1454A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1454A8u, 0x149634u, 0x14963Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14963Cu;
label_14963c:
    // 0x14963c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x14963cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x149640: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x149640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x149644: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x149644u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x149648: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x149648u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14964c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14964cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x149650: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x149650u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149654: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x149654u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149658: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x149658u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14965c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14965cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149660: 0x3e00008  jr          $ra
    ctx->pc = 0x149660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149660u;
        // 0x149664: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149668u;
}
