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

// Function: sub_00497880
// Address: 0x497880 - 0x497a60
void sub_00497880_0x497880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00497880_0x497880");
#endif

    switch (ctx->pc) {
        case 0x4978a8u: goto label_4978a8;
        case 0x4978c0u: goto label_4978c0;
        case 0x497910u: goto label_497910;
        case 0x497998u: goto label_497998;
        case 0x4979d8u: goto label_4979d8;
        case 0x497a10u: goto label_497a10;
        default: break;
    }

    ctx->pc = 0x497880u;

    // 0x497880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x497880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x497884: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x497884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x497888: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x497888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49788c: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x49788cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x497890: 0x8c640050  lw          $a0, 0x50($v1)
    ctx->pc = 0x497890u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x710050u));
    // 0x497894: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x497894u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x710064u));
    // 0x497898: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x497898u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x710058u));
    // 0x49789c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x49789cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x710054u));
    // 0x4978a0: 0xc121848  jal         func_486120
    ctx->pc = 0x4978A0u;
    SET_GPR_U32(ctx, 31, 0x4978A8u);
    ctx->pc = 0x4978A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4978A0u;
    // 0x4978a4: 0x34e70002  ori         $a3, $a3, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x486120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486120u, 0x4978A0u, 0x4978A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4978A8u;
label_4978a8:
    // 0x4978a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4978a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4978ac: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x4978acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4978b0: 0x24020085  addiu       $v0, $zero, 0x85
    ctx->pc = 0x4978b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    // 0x4978b4: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x4978b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4978b8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4978B8u;
    {
        const bool branch_taken_0x4978b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4978BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4978B8u;
        // 0x4978bc: 0xa0c20020  sb          $v0, 0x20($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 32), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4978b8) {
            ctx->pc = 0x4978DCu;
            goto label_4978dc;
        }
    }
    ctx->pc = 0x4978C0u;
label_4978c0:
    // 0x4978c0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x4978c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x4978c4: 0x0  nop
    ctx->pc = 0x4978c4u;
    // NOP
    // 0x4978c8: 0x0  nop
    ctx->pc = 0x4978c8u;
    // NOP
    // 0x4978cc: 0x0  nop
    ctx->pc = 0x4978ccu;
    // NOP
    // 0x4978d0: 0x0  nop
    ctx->pc = 0x4978d0u;
    // NOP
    // 0x4978d4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4978D4u;
    {
        const bool branch_taken_0x4978d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4978D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4978D4u;
        // 0x4978d8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4978d4) {
            ctx->pc = 0x4978C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4978c0;
        }
    }
    ctx->pc = 0x4978DCu;
label_4978dc:
    // 0x4978dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4978dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4978e0: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x4978e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4978e4: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x4978e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x4978e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4978e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4978ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4978ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4978f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4978F0u;
    {
        const bool branch_taken_0x4978f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4978F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4978F0u;
        // 0x4978f4: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4978f0) {
            ctx->pc = 0x497900u;
            goto label_497900;
        }
    }
    ctx->pc = 0x4978F8u;
    // 0x4978f8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4978f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4978fc: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x4978fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_497900:
    // 0x497900: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x497900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x497904: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x497904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x497908: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x497908u;
    {
        const bool branch_taken_0x497908 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497908u;
        // 0x49790c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497908) {
            ctx->pc = 0x49792Cu;
            goto label_49792c;
        }
    }
    ctx->pc = 0x497910u;
label_497910:
    // 0x497910: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x497910u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x497914: 0x0  nop
    ctx->pc = 0x497914u;
    // NOP
    // 0x497918: 0x0  nop
    ctx->pc = 0x497918u;
    // NOP
    // 0x49791c: 0x0  nop
    ctx->pc = 0x49791cu;
    // NOP
    // 0x497920: 0x0  nop
    ctx->pc = 0x497920u;
    // NOP
    // 0x497924: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x497924u;
    {
        const bool branch_taken_0x497924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x497928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497924u;
        // 0x497928: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497924) {
            ctx->pc = 0x497910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_497910;
        }
    }
    ctx->pc = 0x49792Cu;
label_49792c:
    // 0x49792c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49792cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x497930: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x497930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x497934: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x497934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x497938: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x497938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49793c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x49793Cu;
    {
        const bool branch_taken_0x49793c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x497940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49793Cu;
        // 0x497940: 0x821023  subu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49793c) {
            ctx->pc = 0x49794Cu;
            goto label_49794c;
        }
    }
    ctx->pc = 0x497944u;
    // 0x497944: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x497944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x497948: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x497948u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
label_49794c:
    // 0x49794c: 0xdf8286f0  ld          $v0, -0x7910($gp)
    ctx->pc = 0x49794cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936304)));
    // 0x497950: 0x8f848a20  lw          $a0, -0x75E0($gp)
    ctx->pc = 0x497950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x497954: 0x21e3b  dsra        $v1, $v0, 24
    ctx->pc = 0x497954u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 2) >> 24);
    // 0x497958: 0x2143b  dsra        $v0, $v0, 16
    ctx->pc = 0x497958u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 16);
    // 0x49795c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x49795cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x497960: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x497960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x497964: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x497964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x497968: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x497968u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x49796c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x49796cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x497970: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x497970u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x497974: 0x31d00  sll         $v1, $v1, 20
    ctx->pc = 0x497974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
    // 0x497978: 0x21380  sll         $v0, $v0, 14
    ctx->pc = 0x497978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x49797c: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x49797cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x497980: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x497980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x497984: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x497984u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x497988: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x497988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x49798c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x49798Cu;
    {
        const bool branch_taken_0x49798c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x497990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49798Cu;
        // 0x497990: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49798c) {
            ctx->pc = 0x4979B4u;
            goto label_4979b4;
        }
    }
    ctx->pc = 0x497994u;
    // 0x497994: 0x0  nop
    ctx->pc = 0x497994u;
    // NOP
label_497998:
    // 0x497998: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x497998u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x49799c: 0x0  nop
    ctx->pc = 0x49799cu;
    // NOP
    // 0x4979a0: 0x0  nop
    ctx->pc = 0x4979a0u;
    // NOP
    // 0x4979a4: 0x0  nop
    ctx->pc = 0x4979a4u;
    // NOP
    // 0x4979a8: 0x0  nop
    ctx->pc = 0x4979a8u;
    // NOP
    // 0x4979ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4979ACu;
    {
        const bool branch_taken_0x4979ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4979B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4979ACu;
        // 0x4979b0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4979ac) {
            ctx->pc = 0x497998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_497998;
        }
    }
    ctx->pc = 0x4979B4u;
label_4979b4:
    // 0x4979b4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4979b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4979b8: 0x30e2000f  andi        $v0, $a3, 0xF
    ctx->pc = 0x4979b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x4979bc: 0x21680  sll         $v0, $v0, 26
    ctx->pc = 0x4979bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 26));
    // 0x4979c0: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x4979c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x4979c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4979c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4979c8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x4979c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x4979cc: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x4979ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4979d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4979D0u;
    {
        const bool branch_taken_0x4979d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4979D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4979D0u;
        // 0x4979d4: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4979d0) {
            ctx->pc = 0x4979F4u;
            goto label_4979f4;
        }
    }
    ctx->pc = 0x4979D8u;
label_4979d8:
    // 0x4979d8: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x4979d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x4979dc: 0x0  nop
    ctx->pc = 0x4979dcu;
    // NOP
    // 0x4979e0: 0x0  nop
    ctx->pc = 0x4979e0u;
    // NOP
    // 0x4979e4: 0x0  nop
    ctx->pc = 0x4979e4u;
    // NOP
    // 0x4979e8: 0x0  nop
    ctx->pc = 0x4979e8u;
    // NOP
    // 0x4979ec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4979ECu;
    {
        const bool branch_taken_0x4979ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4979F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4979ECu;
        // 0x4979f0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4979ec) {
            ctx->pc = 0x4979D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4979d8;
        }
    }
    ctx->pc = 0x4979F4u;
label_4979f4:
    // 0x4979f4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4979f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4979f8: 0x41f80  sll         $v1, $a0, 30
    ctx->pc = 0x4979f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 30));
    // 0x4979fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4979fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x497a00: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x497a00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x497a04: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x497a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x497a08: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x497A08u;
    {
        const bool branch_taken_0x497a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x497A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497A08u;
        // 0x497a0c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497a08) {
            ctx->pc = 0x497A2Cu;
            goto label_497a2c;
        }
    }
    ctx->pc = 0x497A10u;
label_497a10:
    // 0x497a10: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x497a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x497a14: 0x0  nop
    ctx->pc = 0x497a14u;
    // NOP
    // 0x497a18: 0x0  nop
    ctx->pc = 0x497a18u;
    // NOP
    // 0x497a1c: 0x0  nop
    ctx->pc = 0x497a1cu;
    // NOP
    // 0x497a20: 0x0  nop
    ctx->pc = 0x497a20u;
    // NOP
    // 0x497a24: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x497A24u;
    {
        const bool branch_taken_0x497a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x497A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497A24u;
        // 0x497a28: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497a24) {
            ctx->pc = 0x497A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_497a10;
        }
    }
    ctx->pc = 0x497A2Cu;
label_497a2c:
    // 0x497a2c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x497a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x497a30: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x497a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x497a34: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x497a34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x497a38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x497a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x497a3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x497a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x497a40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x497a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x497a44: 0xa0a40017  sb          $a0, 0x17($a1)
    ctx->pc = 0x497a44u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 23), (uint8_t)GPR_U32(ctx, 4));
    // 0x497a48: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x497a48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x497a4c: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x497a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x497a50: 0xa0a00016  sb          $zero, 0x16($a1)
    ctx->pc = 0x497a50u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 22), (uint8_t)GPR_U32(ctx, 0));
    // 0x497a54: 0x3e00008  jr          $ra
    ctx->pc = 0x497A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x497A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497A54u;
        // 0x497a58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x497A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x497A5Cu;
    // 0x497a5c: 0x0  nop
    ctx->pc = 0x497a5cu;
    // NOP
    ctx->pc = 0x497a60u;
}
