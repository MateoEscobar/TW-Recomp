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

// Function: sub_003864E0
// Address: 0x3864e0 - 0x3865d8
void sub_003864E0_0x3864e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003864E0_0x3864e0");
#endif

    switch (ctx->pc) {
        case 0x3864e0u: goto label_3864e0;
        case 0x3864e4u: goto label_3864e4;
        case 0x3864e8u: goto label_3864e8;
        case 0x3864ecu: goto label_3864ec;
        case 0x3864f0u: goto label_3864f0;
        case 0x3864f4u: goto label_3864f4;
        case 0x3864f8u: goto label_3864f8;
        case 0x3864fcu: goto label_3864fc;
        case 0x386500u: goto label_386500;
        case 0x386504u: goto label_386504;
        case 0x386508u: goto label_386508;
        case 0x38650cu: goto label_38650c;
        case 0x386510u: goto label_386510;
        case 0x386514u: goto label_386514;
        case 0x386518u: goto label_386518;
        case 0x38651cu: goto label_38651c;
        case 0x386520u: goto label_386520;
        case 0x386524u: goto label_386524;
        case 0x386528u: goto label_386528;
        case 0x38652cu: goto label_38652c;
        case 0x386530u: goto label_386530;
        case 0x386534u: goto label_386534;
        case 0x386538u: goto label_386538;
        case 0x38653cu: goto label_38653c;
        case 0x386540u: goto label_386540;
        case 0x386544u: goto label_386544;
        case 0x386548u: goto label_386548;
        case 0x38654cu: goto label_38654c;
        case 0x386550u: goto label_386550;
        case 0x386554u: goto label_386554;
        case 0x386558u: goto label_386558;
        case 0x38655cu: goto label_38655c;
        case 0x386560u: goto label_386560;
        case 0x386564u: goto label_386564;
        case 0x386568u: goto label_386568;
        case 0x38656cu: goto label_38656c;
        case 0x386570u: goto label_386570;
        case 0x386574u: goto label_386574;
        case 0x386578u: goto label_386578;
        case 0x38657cu: goto label_38657c;
        case 0x386580u: goto label_386580;
        case 0x386584u: goto label_386584;
        case 0x386588u: goto label_386588;
        case 0x38658cu: goto label_38658c;
        case 0x386590u: goto label_386590;
        case 0x386594u: goto label_386594;
        case 0x386598u: goto label_386598;
        case 0x38659cu: goto label_38659c;
        case 0x3865a0u: goto label_3865a0;
        case 0x3865a4u: goto label_3865a4;
        case 0x3865a8u: goto label_3865a8;
        case 0x3865acu: goto label_3865ac;
        case 0x3865b0u: goto label_3865b0;
        case 0x3865b4u: goto label_3865b4;
        case 0x3865b8u: goto label_3865b8;
        case 0x3865bcu: goto label_3865bc;
        case 0x3865c0u: goto label_3865c0;
        case 0x3865c4u: goto label_3865c4;
        case 0x3865c8u: goto label_3865c8;
        case 0x3865ccu: goto label_3865cc;
        case 0x3865d0u: goto label_3865d0;
        case 0x3865d4u: goto label_3865d4;
        default: break;
    }

    ctx->pc = 0x3864e0u;

label_3864e0:
    // 0x3864e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3864e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3864e4:
    // 0x3864e4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3864e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3864e8:
    // 0x3864e8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3864e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3864ec:
    // 0x3864ec: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3864ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3864f0:
    // 0x3864f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3864f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3864f4:
    // 0x3864f4: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x3864f4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_3864f8:
    // 0x3864f8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3864f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3864fc:
    // 0x3864fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3864fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_386500:
    // 0x386500: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x386500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_386504:
    // 0x386504: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x386504u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_386508:
    // 0x386508: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x386508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_38650c:
    // 0x38650c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x38650cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_386510:
    // 0x386510: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x386510u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_386514:
    // 0x386514: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x386514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_386518:
    // 0x386518: 0x60f809  jalr        $v1
label_38651c:
    if (ctx->pc == 0x38651Cu) {
        ctx->pc = 0x38651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386518u;
        // 0x38651c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386520u;
        goto label_386520;
    }
    ctx->pc = 0x386518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x386520u);
        ctx->pc = 0x38651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386518u;
        // 0x38651c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386518u, 0x386520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x386520u;
label_386520:
    // 0x386520: 0xc10c3ac  jal         func_430EB0
label_386524:
    if (ctx->pc == 0x386524u) {
        ctx->pc = 0x386524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386520u;
        // 0x386524: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386528u;
        goto label_386528;
    }
    ctx->pc = 0x386520u;
    SET_GPR_U32(ctx, 31, 0x386528u);
    ctx->pc = 0x386524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386520u;
    // 0x386524: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x386520u, 0x386528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386528u;
label_386528:
    // 0x386528: 0x8e0c27e4  lw          $t4, 0x27E4($s0)
    ctx->pc = 0x386528u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_38652c:
    // 0x38652c: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x38652cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_386530:
    // 0x386530: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x386530u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_386534:
    // 0x386534: 0x3c080058  lui         $t0, 0x58
    ctx->pc = 0x386534u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)88 << 16));
label_386538:
    // 0x386538: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x386538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_38653c:
    // 0x38653c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x38653cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_386540:
    // 0x386540: 0x240901bb  addiu       $t1, $zero, 0x1BB
    ctx->pc = 0x386540u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 443));
label_386544:
    // 0x386544: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x386544u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_386548:
    // 0x386548: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x386548u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_38654c:
    // 0x38654c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x38654cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_386550:
    // 0x386550: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x386550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_386554:
    // 0x386554: 0x2508de60  addiu       $t0, $t0, -0x21A0
    ctx->pc = 0x386554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958688));
label_386558:
    // 0x386558: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x386558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
label_38655c:
    // 0x38655c: 0x40f809  jalr        $v0
label_386560:
    if (ctx->pc == 0x386560u) {
        ctx->pc = 0x386560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38655Cu;
        // 0x386560: 0x24a5de58  addiu       $a1, $a1, -0x21A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386564u;
        goto label_386564;
    }
    ctx->pc = 0x38655Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x386564u);
        ctx->pc = 0x386560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38655Cu;
        // 0x386560: 0x24a5de58  addiu       $a1, $a1, -0x21A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958680));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38655Cu, 0x386564u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x386564u;
label_386564:
    // 0x386564: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x386564u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_386568:
    // 0x386568: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x386568u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38656c:
    // 0x38656c: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x38656cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_386570:
    // 0x386570: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x386570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_386574:
    // 0x386574: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x386574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_386578:
    // 0x386578: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x386578u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_38657c:
    // 0x38657c: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x38657cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_386580:
    // 0x386580: 0x60f809  jalr        $v1
label_386584:
    if (ctx->pc == 0x386584u) {
        ctx->pc = 0x386584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386580u;
        // 0x386584: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386588u;
        goto label_386588;
    }
    ctx->pc = 0x386580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x386588u);
        ctx->pc = 0x386584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386580u;
        // 0x386584: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386580u, 0x386588u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x386588u;
label_386588:
    // 0x386588: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x386588u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_38658c:
    // 0x38658c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_386590:
    if (ctx->pc == 0x386590u) {
        ctx->pc = 0x386590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38658Cu;
        // 0x386590: 0x92430000  lbu         $v1, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386594u;
        goto label_386594;
    }
    ctx->pc = 0x38658Cu;
    {
        const bool branch_taken_0x38658c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38658Cu;
        // 0x386590: 0x92430000  lbu         $v1, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38658c) {
            ctx->pc = 0x3865B0u;
            goto label_3865b0;
        }
    }
    ctx->pc = 0x386594u;
label_386594:
    // 0x386594: 0x0  nop
    ctx->pc = 0x386594u;
    // NOP
label_386598:
    // 0x386598: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x386598u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_38659c:
    // 0x38659c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x38659cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3865a0:
    // 0x3865a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3865a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3865a4:
    // 0x3865a4: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x3865a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_3865a8:
    // 0x3865a8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_3865ac:
    if (ctx->pc == 0x3865ACu) {
        ctx->pc = 0x3865ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3865A8u;
        // 0x3865ac: 0x92430000  lbu         $v1, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3865B0u;
        goto label_3865b0;
    }
    ctx->pc = 0x3865A8u;
    {
        const bool branch_taken_0x3865a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3865ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3865A8u;
        // 0x3865ac: 0x92430000  lbu         $v1, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3865a8) {
            ctx->pc = 0x386598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_386598;
        }
    }
    ctx->pc = 0x3865B0u;
label_3865b0:
    // 0x3865b0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3865b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_3865b4:
    // 0x3865b4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3865b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3865b8:
    // 0x3865b8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3865b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3865bc:
    // 0x3865bc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3865bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3865c0:
    // 0x3865c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3865c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3865c4:
    // 0x3865c4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3865c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3865c8:
    // 0x3865c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3865c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3865cc:
    // 0x3865cc: 0x3e00008  jr          $ra
label_3865d0:
    if (ctx->pc == 0x3865D0u) {
        ctx->pc = 0x3865D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3865CCu;
        // 0x3865d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3865D4u;
        goto label_3865d4;
    }
    ctx->pc = 0x3865CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3865D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3865CCu;
        // 0x3865d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3865CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3865D4u;
label_3865d4:
    // 0x3865d4: 0x0  nop
    ctx->pc = 0x3865d4u;
    // NOP
    ctx->pc = 0x3865d8u;
}
