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

// Function: sub_0042D6CC
// Address: 0x42d6cc - 0x42d808
void sub_0042D6CC_0x42d6cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042D6CC_0x42d6cc");
#endif

    switch (ctx->pc) {
        case 0x42d6ccu: goto label_42d6cc;
        case 0x42d6d0u: goto label_42d6d0;
        case 0x42d6d4u: goto label_42d6d4;
        case 0x42d6d8u: goto label_42d6d8;
        case 0x42d6dcu: goto label_42d6dc;
        case 0x42d6e0u: goto label_42d6e0;
        case 0x42d6e4u: goto label_42d6e4;
        case 0x42d6e8u: goto label_42d6e8;
        case 0x42d6ecu: goto label_42d6ec;
        case 0x42d6f0u: goto label_42d6f0;
        case 0x42d6f4u: goto label_42d6f4;
        case 0x42d6f8u: goto label_42d6f8;
        case 0x42d6fcu: goto label_42d6fc;
        case 0x42d700u: goto label_42d700;
        case 0x42d704u: goto label_42d704;
        case 0x42d708u: goto label_42d708;
        case 0x42d70cu: goto label_42d70c;
        case 0x42d710u: goto label_42d710;
        case 0x42d714u: goto label_42d714;
        case 0x42d718u: goto label_42d718;
        case 0x42d71cu: goto label_42d71c;
        case 0x42d720u: goto label_42d720;
        case 0x42d724u: goto label_42d724;
        case 0x42d728u: goto label_42d728;
        case 0x42d72cu: goto label_42d72c;
        case 0x42d730u: goto label_42d730;
        case 0x42d734u: goto label_42d734;
        case 0x42d738u: goto label_42d738;
        case 0x42d73cu: goto label_42d73c;
        case 0x42d740u: goto label_42d740;
        case 0x42d744u: goto label_42d744;
        case 0x42d748u: goto label_42d748;
        case 0x42d74cu: goto label_42d74c;
        case 0x42d750u: goto label_42d750;
        case 0x42d754u: goto label_42d754;
        case 0x42d758u: goto label_42d758;
        case 0x42d75cu: goto label_42d75c;
        case 0x42d760u: goto label_42d760;
        case 0x42d764u: goto label_42d764;
        case 0x42d768u: goto label_42d768;
        case 0x42d76cu: goto label_42d76c;
        case 0x42d770u: goto label_42d770;
        case 0x42d774u: goto label_42d774;
        case 0x42d778u: goto label_42d778;
        case 0x42d77cu: goto label_42d77c;
        case 0x42d780u: goto label_42d780;
        case 0x42d784u: goto label_42d784;
        case 0x42d788u: goto label_42d788;
        case 0x42d78cu: goto label_42d78c;
        case 0x42d790u: goto label_42d790;
        case 0x42d794u: goto label_42d794;
        case 0x42d798u: goto label_42d798;
        case 0x42d79cu: goto label_42d79c;
        case 0x42d7a0u: goto label_42d7a0;
        case 0x42d7a4u: goto label_42d7a4;
        case 0x42d7a8u: goto label_42d7a8;
        case 0x42d7acu: goto label_42d7ac;
        case 0x42d7b0u: goto label_42d7b0;
        case 0x42d7b4u: goto label_42d7b4;
        case 0x42d7b8u: goto label_42d7b8;
        case 0x42d7bcu: goto label_42d7bc;
        case 0x42d7c0u: goto label_42d7c0;
        case 0x42d7c4u: goto label_42d7c4;
        case 0x42d7c8u: goto label_42d7c8;
        case 0x42d7ccu: goto label_42d7cc;
        case 0x42d7d0u: goto label_42d7d0;
        case 0x42d7d4u: goto label_42d7d4;
        case 0x42d7d8u: goto label_42d7d8;
        case 0x42d7dcu: goto label_42d7dc;
        case 0x42d7e0u: goto label_42d7e0;
        case 0x42d7e4u: goto label_42d7e4;
        case 0x42d7e8u: goto label_42d7e8;
        case 0x42d7ecu: goto label_42d7ec;
        case 0x42d7f0u: goto label_42d7f0;
        case 0x42d7f4u: goto label_42d7f4;
        case 0x42d7f8u: goto label_42d7f8;
        case 0x42d7fcu: goto label_42d7fc;
        case 0x42d800u: goto label_42d800;
        case 0x42d804u: goto label_42d804;
        default: break;
    }

    ctx->pc = 0x42d6ccu;

label_42d6cc:
    // 0x42d6cc: 0x3c080043  lui         $t0, 0x43
    ctx->pc = 0x42d6ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)67 << 16));
label_42d6d0:
    // 0x42d6d0: 0x8fc505e0  lw          $a1, 0x5E0($fp)
    ctx->pc = 0x42d6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_42d6d4:
    // 0x42d6d4: 0xc10bafe  jal         func_42EBF8
label_42d6d8:
    if (ctx->pc == 0x42D6D8u) {
        ctx->pc = 0x42D6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D6D4u;
        // 0x42d6d8: 0x2504d6cc  addiu       $a0, $t0, -0x2934 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956748));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42D6DCu;
        goto label_42d6dc;
    }
    ctx->pc = 0x42D6D4u;
    SET_GPR_U32(ctx, 31, 0x42D6DCu);
    ctx->pc = 0x42D6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42D6D4u;
    // 0x42d6d8: 0x2504d6cc  addiu       $a0, $t0, -0x2934 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956748));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EBF8u, 0x42D6D4u, 0x42D6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42D6DCu;
label_42d6dc:
    // 0x42d6dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x42d6dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42d6e0:
    // 0x42d6e0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_42d6e4:
    if (ctx->pc == 0x42D6E4u) {
        ctx->pc = 0x42D6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D6E0u;
        // 0x42d6e4: 0xafc205e0  sw          $v0, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42D6E8u;
        goto label_42d6e8;
    }
    ctx->pc = 0x42D6E0u;
    {
        const bool branch_taken_0x42d6e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42D6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D6E0u;
        // 0x42d6e4: 0xafc205e0  sw          $v0, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d6e0) {
            ctx->pc = 0x42D6F4u;
            goto label_42d6f4;
        }
    }
    ctx->pc = 0x42D6E8u;
label_42d6e8:
    // 0x42d6e8: 0xc10b22a  jal         func_42C8A8
label_42d6ec:
    if (ctx->pc == 0x42D6ECu) {
        ctx->pc = 0x42D6F0u;
        goto label_42d6f0;
    }
    ctx->pc = 0x42D6E8u;
    SET_GPR_U32(ctx, 31, 0x42D6F0u);
    ctx->pc = 0x42C8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C8A8u, 0x42D6E8u, 0x42D6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42D6F0u;
label_42d6f0:
    // 0x42d6f0: 0x8fc305e0  lw          $v1, 0x5E0($fp)
    ctx->pc = 0x42d6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_42d6f4:
    // 0x42d6f4: 0x27c20700  addiu       $v0, $fp, 0x700
    ctx->pc = 0x42d6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1792));
label_42d6f8:
    // 0x42d6f8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x42d6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_42d6fc:
    // 0x42d6fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x42d6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_42d700:
    // 0x42d700: 0x8fc205ec  lw          $v0, 0x5EC($fp)
    ctx->pc = 0x42d700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1516)));
label_42d704:
    // 0x42d704: 0x248302e0  addiu       $v1, $a0, 0x2E0
    ctx->pc = 0x42d704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 736));
label_42d708:
    // 0x42d708: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x42d708u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_42d70c:
    // 0x42d70c: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x42d70cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_42d710:
    // 0x42d710: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x42d710u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
label_42d714:
    // 0x42d714: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x42d714u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
label_42d718:
    // 0x42d718: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x42d718u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
label_42d71c:
    // 0x42d71c: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x42d71cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
label_42d720:
    // 0x42d720: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x42d720u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
label_42d724:
    // 0x42d724: 0xfc480018  sd          $t0, 0x18($v0)
    ctx->pc = 0x42d724u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
label_42d728:
    // 0x42d728: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x42d728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_42d72c:
    // 0x42d72c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x42d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_42d730:
    // 0x42d730: 0x0  nop
    ctx->pc = 0x42d730u;
    // NOP
label_42d734:
    // 0x42d734: 0x1483fff4  bne         $a0, $v1, . + 4 + (-0xC << 2)
label_42d738:
    if (ctx->pc == 0x42D738u) {
        ctx->pc = 0x42D73Cu;
        goto label_42d73c;
    }
    ctx->pc = 0x42D734u;
    {
        const bool branch_taken_0x42d734 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x42d734) {
            ctx->pc = 0x42D708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42d708;
        }
    }
    ctx->pc = 0x42D73Cu;
label_42d73c:
    // 0x42d73c: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x42d73cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_42d740:
    // 0x42d740: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x42d740u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_42d744:
    // 0x42d744: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x42d744u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_42d748:
    // 0x42d748: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x42d748u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
label_42d74c:
    // 0x42d74c: 0x27c20690  addiu       $v0, $fp, 0x690
    ctx->pc = 0x42d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1680));
label_42d750:
    // 0x42d750: 0x8fc405e8  lw          $a0, 0x5E8($fp)
    ctx->pc = 0x42d750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_42d754:
    // 0x42d754: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x42d754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_42d758:
    // 0x42d758: 0x8fc605ec  lw          $a2, 0x5EC($fp)
    ctx->pc = 0x42d758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1516)));
label_42d75c:
    // 0x42d75c: 0x8fc705f0  lw          $a3, 0x5F0($fp)
    ctx->pc = 0x42d75cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1520)));
label_42d760:
    // 0x42d760: 0xc10b444  jal         func_42D110
label_42d764:
    if (ctx->pc == 0x42D764u) {
        ctx->pc = 0x42D764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D760u;
        // 0x42d764: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42D768u;
        goto label_42d768;
    }
    ctx->pc = 0x42D760u;
    SET_GPR_U32(ctx, 31, 0x42D768u);
    ctx->pc = 0x42D764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42D760u;
    // 0x42d764: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D110u, 0x42D760u, 0x42D768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42D768u;
label_42d768:
    // 0x42d768: 0x8fc605e0  lw          $a2, 0x5E0($fp)
    ctx->pc = 0x42d768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_42d76c:
    // 0x42d76c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x42d76cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_42d770:
    // 0x42d770: 0x8fc805ec  lw          $t0, 0x5EC($fp)
    ctx->pc = 0x42d770u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1516)));
label_42d774:
    // 0x42d774: 0x2465d798  addiu       $a1, $v1, -0x2868
    ctx->pc = 0x42d774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956952));
label_42d778:
    // 0x42d778: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x42d778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_42d77c:
    // 0x42d77c: 0x27c40690  addiu       $a0, $fp, 0x690
    ctx->pc = 0x42d77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 1680));
label_42d780:
    // 0x42d780: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x42d780u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_42d784:
    // 0x42d784: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x42d784u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_42d788:
    // 0x42d788: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42d788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42d78c:
    // 0x42d78c: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x42d78cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_42d790:
    // 0x42d790: 0x10000003  b           . + 4 + (0x3 << 2)
label_42d794:
    if (ctx->pc == 0x42D794u) {
        ctx->pc = 0x42D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D790u;
        // 0x42d794: 0x8fc205e8  lw          $v0, 0x5E8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42D798u;
        goto label_42d798;
    }
    ctx->pc = 0x42D790u;
    {
        const bool branch_taken_0x42d790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D790u;
        // 0x42d794: 0x8fc205e8  lw          $v0, 0x5E8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42d790) {
            ctx->pc = 0x42D7A0u;
            goto label_42d7a0;
        }
    }
    ctx->pc = 0x42D798u;
label_42d798:
    // 0x42d798: 0x800008  jr          $a0
label_42d79c:
    if (ctx->pc == 0x42D79Cu) {
        ctx->pc = 0x42D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D798u;
        // 0x42d79c: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42D7A0u;
        goto label_42d7a0;
    }
    ctx->pc = 0x42D798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x42D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D798u;
        // 0x42d79c: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42D798u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x42D7A0u;
label_42d7a0:
    // 0x42d7a0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x42d7a0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_42d7a4:
    // 0x42d7a4: 0xdfbf0690  ld          $ra, 0x690($sp)
    ctx->pc = 0x42d7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1680)));
label_42d7a8:
    // 0x42d7a8: 0xdfbe0680  ld          $fp, 0x680($sp)
    ctx->pc = 0x42d7a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1664)));
label_42d7ac:
    // 0x42d7ac: 0xdfb70670  ld          $s7, 0x670($sp)
    ctx->pc = 0x42d7acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1648)));
label_42d7b0:
    // 0x42d7b0: 0xdfb60660  ld          $s6, 0x660($sp)
    ctx->pc = 0x42d7b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1632)));
label_42d7b4:
    // 0x42d7b4: 0xdfb50650  ld          $s5, 0x650($sp)
    ctx->pc = 0x42d7b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1616)));
label_42d7b8:
    // 0x42d7b8: 0xdfb40640  ld          $s4, 0x640($sp)
    ctx->pc = 0x42d7b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1600)));
label_42d7bc:
    // 0x42d7bc: 0xdfb30630  ld          $s3, 0x630($sp)
    ctx->pc = 0x42d7bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1584)));
label_42d7c0:
    // 0x42d7c0: 0xdfb20620  ld          $s2, 0x620($sp)
    ctx->pc = 0x42d7c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1568)));
label_42d7c4:
    // 0x42d7c4: 0xdfb10610  ld          $s1, 0x610($sp)
    ctx->pc = 0x42d7c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1552)));
label_42d7c8:
    // 0x42d7c8: 0xdfb00600  ld          $s0, 0x600($sp)
    ctx->pc = 0x42d7c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1536)));
label_42d7cc:
    // 0x42d7cc: 0xc7bf06f8  lwc1        $f31, 0x6F8($sp)
    ctx->pc = 0x42d7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_42d7d0:
    // 0x42d7d0: 0xc7be06f0  lwc1        $f30, 0x6F0($sp)
    ctx->pc = 0x42d7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_42d7d4:
    // 0x42d7d4: 0xc7bd06e8  lwc1        $f29, 0x6E8($sp)
    ctx->pc = 0x42d7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_42d7d8:
    // 0x42d7d8: 0xc7bc06e0  lwc1        $f28, 0x6E0($sp)
    ctx->pc = 0x42d7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_42d7dc:
    // 0x42d7dc: 0xc7bb06d8  lwc1        $f27, 0x6D8($sp)
    ctx->pc = 0x42d7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_42d7e0:
    // 0x42d7e0: 0xc7ba06d0  lwc1        $f26, 0x6D0($sp)
    ctx->pc = 0x42d7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_42d7e4:
    // 0x42d7e4: 0xc7b906c8  lwc1        $f25, 0x6C8($sp)
    ctx->pc = 0x42d7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_42d7e8:
    // 0x42d7e8: 0xc7b806c0  lwc1        $f24, 0x6C0($sp)
    ctx->pc = 0x42d7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_42d7ec:
    // 0x42d7ec: 0xc7b706b8  lwc1        $f23, 0x6B8($sp)
    ctx->pc = 0x42d7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_42d7f0:
    // 0x42d7f0: 0xc7b606b0  lwc1        $f22, 0x6B0($sp)
    ctx->pc = 0x42d7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_42d7f4:
    // 0x42d7f4: 0xc7b506a8  lwc1        $f21, 0x6A8($sp)
    ctx->pc = 0x42d7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_42d7f8:
    // 0x42d7f8: 0xc7b406a0  lwc1        $f20, 0x6A0($sp)
    ctx->pc = 0x42d7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_42d7fc:
    // 0x42d7fc: 0x3e00008  jr          $ra
label_42d800:
    if (ctx->pc == 0x42D800u) {
        ctx->pc = 0x42D800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D7FCu;
        // 0x42d800: 0x27bd0700  addiu       $sp, $sp, 0x700 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42D804u;
        goto label_42d804;
    }
    ctx->pc = 0x42D7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42D800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42D7FCu;
        // 0x42d800: 0x27bd0700  addiu       $sp, $sp, 0x700 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1792));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42D7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42D804u;
label_42d804:
    // 0x42d804: 0x0  nop
    ctx->pc = 0x42d804u;
    // NOP
    ctx->pc = 0x42d808u;
}
