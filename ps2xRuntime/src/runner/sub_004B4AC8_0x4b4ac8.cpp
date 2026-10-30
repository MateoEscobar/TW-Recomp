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

// Function: sub_004B4AC8
// Address: 0x4b4ac8 - 0x4b5a20
void sub_004B4AC8_0x4b4ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4AC8_0x4b4ac8");
#endif

    switch (ctx->pc) {
        case 0x4b4b10u: goto label_4b4b10;
        case 0x4b4b1cu: goto label_4b4b1c;
        case 0x4b4b28u: goto label_4b4b28;
        case 0x4b4b34u: goto label_4b4b34;
        case 0x4b4b40u: goto label_4b4b40;
        case 0x4b4b4cu: goto label_4b4b4c;
        case 0x4b4b58u: goto label_4b4b58;
        case 0x4b4bc8u: goto label_4b4bc8;
        case 0x4b4c20u: goto label_4b4c20;
        case 0x4b4c98u: goto label_4b4c98;
        case 0x4b4ce8u: goto label_4b4ce8;
        case 0x4b4d08u: goto label_4b4d08;
        case 0x4b4e38u: goto label_4b4e38;
        case 0x4b4e90u: goto label_4b4e90;
        case 0x4b4f2cu: goto label_4b4f2c;
        case 0x4b4f48u: goto label_4b4f48;
        case 0x4b4f78u: goto label_4b4f78;
        case 0x4b4f84u: goto label_4b4f84;
        case 0x4b4f9cu: goto label_4b4f9c;
        case 0x4b4fa8u: goto label_4b4fa8;
        case 0x4b5024u: goto label_4b5024;
        case 0x4b503cu: goto label_4b503c;
        case 0x4b506cu: goto label_4b506c;
        case 0x4b50a8u: goto label_4b50a8;
        case 0x4b50c4u: goto label_4b50c4;
        case 0x4b50ccu: goto label_4b50cc;
        case 0x4b50f8u: goto label_4b50f8;
        case 0x4b5118u: goto label_4b5118;
        case 0x4b5174u: goto label_4b5174;
        case 0x4b5208u: goto label_4b5208;
        case 0x4b5230u: goto label_4b5230;
        case 0x4b5250u: goto label_4b5250;
        case 0x4b5294u: goto label_4b5294;
        case 0x4b52a4u: goto label_4b52a4;
        case 0x4b52b8u: goto label_4b52b8;
        case 0x4b52c4u: goto label_4b52c4;
        case 0x4b52d0u: goto label_4b52d0;
        case 0x4b52d8u: goto label_4b52d8;
        case 0x4b52e0u: goto label_4b52e0;
        case 0x4b52ecu: goto label_4b52ec;
        case 0x4b52f4u: goto label_4b52f4;
        case 0x4b5300u: goto label_4b5300;
        case 0x4b5324u: goto label_4b5324;
        case 0x4b5334u: goto label_4b5334;
        case 0x4b5350u: goto label_4b5350;
        case 0x4b5358u: goto label_4b5358;
        case 0x4b5368u: goto label_4b5368;
        case 0x4b5378u: goto label_4b5378;
        case 0x4b5468u: goto label_4b5468;
        case 0x4b5474u: goto label_4b5474;
        case 0x4b5484u: goto label_4b5484;
        case 0x4b549cu: goto label_4b549c;
        case 0x4b54b0u: goto label_4b54b0;
        case 0x4b5544u: goto label_4b5544;
        case 0x4b556cu: goto label_4b556c;
        case 0x4b5584u: goto label_4b5584;
        case 0x4b559cu: goto label_4b559c;
        case 0x4b55f4u: goto label_4b55f4;
        case 0x4b5600u: goto label_4b5600;
        case 0x4b560cu: goto label_4b560c;
        case 0x4b56c4u: goto label_4b56c4;
        case 0x4b56dcu: goto label_4b56dc;
        case 0x4b56e4u: goto label_4b56e4;
        case 0x4b56ecu: goto label_4b56ec;
        case 0x4b5700u: goto label_4b5700;
        case 0x4b570cu: goto label_4b570c;
        case 0x4b5718u: goto label_4b5718;
        case 0x4b5724u: goto label_4b5724;
        case 0x4b574cu: goto label_4b574c;
        case 0x4b5754u: goto label_4b5754;
        case 0x4b5760u: goto label_4b5760;
        case 0x4b57a4u: goto label_4b57a4;
        case 0x4b57bcu: goto label_4b57bc;
        case 0x4b57dcu: goto label_4b57dc;
        case 0x4b57f0u: goto label_4b57f0;
        case 0x4b5804u: goto label_4b5804;
        case 0x4b5814u: goto label_4b5814;
        case 0x4b58c8u: goto label_4b58c8;
        case 0x4b58dcu: goto label_4b58dc;
        case 0x4b58f8u: goto label_4b58f8;
        case 0x4b590cu: goto label_4b590c;
        case 0x4b5920u: goto label_4b5920;
        case 0x4b5934u: goto label_4b5934;
        case 0x4b5948u: goto label_4b5948;
        case 0x4b5960u: goto label_4b5960;
        case 0x4b59a4u: goto label_4b59a4;
        case 0x4b59acu: goto label_4b59ac;
        case 0x4b59b4u: goto label_4b59b4;
        case 0x4b59bcu: goto label_4b59bc;
        case 0x4b59c4u: goto label_4b59c4;
        case 0x4b59ccu: goto label_4b59cc;
        case 0x4b59f0u: goto label_4b59f0;
        default: break;
    }

    ctx->pc = 0x4b4ac8u;

    // 0x4b4ac8: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x4b4ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
    // 0x4b4acc: 0xffb001f0  sd          $s0, 0x1F0($sp)
    ctx->pc = 0x4b4accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 16));
    // 0x4b4ad0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b4ad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4ad4: 0xffb50240  sd          $s5, 0x240($sp)
    ctx->pc = 0x4b4ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 21));
    // 0x4b4ad8: 0xffb40230  sd          $s4, 0x230($sp)
    ctx->pc = 0x4b4ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 20));
    // 0x4b4adc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4b4adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4ae0: 0xffbf0280  sd          $ra, 0x280($sp)
    ctx->pc = 0x4b4ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 31));
    // 0x4b4ae4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4b4ae4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4ae8: 0xffbe0270  sd          $fp, 0x270($sp)
    ctx->pc = 0x4b4ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 30));
    // 0x4b4aec: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x4b4aecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4af0: 0xffb70260  sd          $s7, 0x260($sp)
    ctx->pc = 0x4b4af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 23));
    // 0x4b4af4: 0xffb60250  sd          $s6, 0x250($sp)
    ctx->pc = 0x4b4af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 22));
    // 0x4b4af8: 0xffb30220  sd          $s3, 0x220($sp)
    ctx->pc = 0x4b4af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 19));
    // 0x4b4afc: 0xffb20210  sd          $s2, 0x210($sp)
    ctx->pc = 0x4b4afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 18));
    // 0x4b4b00: 0xffb10200  sd          $s1, 0x200($sp)
    ctx->pc = 0x4b4b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 17));
    // 0x4b4b04: 0xafa50188  sw          $a1, 0x188($sp)
    ctx->pc = 0x4b4b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 5));
    // 0x4b4b08: 0xc12cee8  jal         func_4B3BA0
    ctx->pc = 0x4B4B08u;
    SET_GPR_U32(ctx, 31, 0x4B4B10u);
    ctx->pc = 0x4B4B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4B08u;
    // 0x4b4b0c: 0xafa00190  sw          $zero, 0x190($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3BA0u, 0x4B4B08u, 0x4B4B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4B10u;
label_4b4b10:
    // 0x4b4b10: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x4b4b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    // 0x4b4b14: 0xc12cee8  jal         func_4B3BA0
    ctx->pc = 0x4B4B14u;
    SET_GPR_U32(ctx, 31, 0x4B4B1Cu);
    ctx->pc = 0x4B4B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4B14u;
    // 0x4b4b18: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3BA0u, 0x4B4B14u, 0x4B4B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4B1Cu;
label_4b4b1c:
    // 0x4b4b1c: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x4b4b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x4b4b20: 0xc12cee8  jal         func_4B3BA0
    ctx->pc = 0x4B4B20u;
    SET_GPR_U32(ctx, 31, 0x4B4B28u);
    ctx->pc = 0x4B4B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4B20u;
    // 0x4b4b24: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3BA0u, 0x4B4B20u, 0x4B4B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4B28u;
label_4b4b28:
    // 0x4b4b28: 0xafa201a4  sw          $v0, 0x1A4($sp)
    ctx->pc = 0x4b4b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 2));
    // 0x4b4b2c: 0xc12cee8  jal         func_4B3BA0
    ctx->pc = 0x4B4B2Cu;
    SET_GPR_U32(ctx, 31, 0x4B4B34u);
    ctx->pc = 0x4B4B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4B2Cu;
    // 0x4b4b30: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3BA0u, 0x4B4B2Cu, 0x4B4B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4B34u;
label_4b4b34:
    // 0x4b4b34: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x4b4b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
    // 0x4b4b38: 0xc12cee8  jal         func_4B3BA0
    ctx->pc = 0x4B4B38u;
    SET_GPR_U32(ctx, 31, 0x4B4B40u);
    ctx->pc = 0x4B4B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4B38u;
    // 0x4b4b3c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3BA0u, 0x4B4B38u, 0x4B4B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4B40u;
label_4b4b40:
    // 0x4b4b40: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x4b4b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
    // 0x4b4b44: 0xc12cee8  jal         func_4B3BA0
    ctx->pc = 0x4B4B44u;
    SET_GPR_U32(ctx, 31, 0x4B4B4Cu);
    ctx->pc = 0x4B4B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4B44u;
    // 0x4b4b48: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3BA0u, 0x4B4B44u, 0x4B4B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4B4Cu;
label_4b4b4c:
    // 0x4b4b4c: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x4b4b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
    // 0x4b4b50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4b4b50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4b54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4b4b54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b4b58:
    // 0x4b4b58: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x4b4b58u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b4b5c: 0x2c62002e  sltiu       $v0, $v1, 0x2E
    ctx->pc = 0x4b4b5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)46) ? 1 : 0);
    // 0x4b4b60: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4B4B60u;
    {
        const bool branch_taken_0x4b4b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4B60u;
        // 0x4b4b64: 0x92850000  lbu         $a1, 0x0($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4b60) {
            ctx->pc = 0x4B4BB0u;
            goto label_4b4bb0;
        }
    }
    ctx->pc = 0x4B4B68u;
    // 0x4b4b68: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b4b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b4b6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4b4b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4b4b70: 0x24420cc0  addiu       $v0, $v0, 0xCC0
    ctx->pc = 0x4b4b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3264));
    // 0x4b4b74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b4b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b4b78: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4b4b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b4b7c: 0x800008  jr          $a0
    ctx->pc = 0x4B4B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4B4B84u: goto label_4b4b84;
            case 0x4B4B8Cu: goto label_4b4b8c;
            case 0x4B4B9Cu: goto label_4b4b9c;
            case 0x4B4BA8u: goto label_4b4ba8;
            case 0x4B4BB0u: goto label_4b4bb0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B4B7Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4B4B84u;
label_4b4b84:
    // 0x4b4b84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b4b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b4b88: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x4b4b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
label_4b4b8c:
    // 0x4b4b8c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4b4b8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x4b4b90: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x4b4b90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b4b94: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B4B94u;
    {
        const bool branch_taken_0x4b4b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4B94u;
        // 0x4b4b98: 0x92850000  lbu         $a1, 0x0($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4b94) {
            ctx->pc = 0x4B4BB0u;
            goto label_4b4bb0;
        }
    }
    ctx->pc = 0x4B4B9Cu;
label_4b4b9c:
    // 0x4b4b9c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x4b4b9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4ba0: 0x1000038a  b           . + 4 + (0x38A << 2)
    ctx->pc = 0x4B4BA0u;
    {
        const bool branch_taken_0x4b4ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4BA0u;
        // 0x4b4ba4: 0xafa00190  sw          $zero, 0x190($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4ba0) {
            ctx->pc = 0x4B59CCu;
            goto label_4b59cc;
        }
    }
    ctx->pc = 0x4B4BA8u;
label_4b4ba8:
    // 0x4b4ba8: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x4B4BA8u;
    {
        const bool branch_taken_0x4b4ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4BA8u;
        // 0x4b4bac: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4ba8) {
            ctx->pc = 0x4B4B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b4b58;
        }
    }
    ctx->pc = 0x4B4BB0u;
label_4b4bb0:
    // 0x4b4bb0: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x4b4bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x4b4bb4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4b4bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4b4bb8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x4b4bb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x4b4bbc: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x4B4BBCu;
    {
        const bool branch_taken_0x4b4bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4B4BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4BBCu;
        // 0x4b4bc0: 0x51600  sll         $v0, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4bbc) {
            ctx->pc = 0x4B4BECu;
            goto label_4b4bec;
        }
    }
    ctx->pc = 0x4B4BC4u;
    // 0x4b4bc4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x4b4bc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b4bc8:
    // 0x4b4bc8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4b4bc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x4b4bcc: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x4b4bccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b4bd0: 0x92850000  lbu         $a1, 0x0($s4)
    ctx->pc = 0x4b4bd0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b4bd4: 0x0  nop
    ctx->pc = 0x4b4bd4u;
    // NOP
    // 0x4b4bd8: 0x0  nop
    ctx->pc = 0x4b4bd8u;
    // NOP
    // 0x4b4bdc: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4B4BDCu;
    {
        const bool branch_taken_0x4b4bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b4bdc) {
            ctx->pc = 0x4B4BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b4bc8;
        }
    }
    ctx->pc = 0x4B4BE4u;
    // 0x4b4be4: 0x10400379  beqz        $v0, . + 4 + (0x379 << 2)
    ctx->pc = 0x4B4BE4u;
    {
        const bool branch_taken_0x4b4be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4BE4u;
        // 0x4b4be8: 0x51600  sll         $v0, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4be4) {
            ctx->pc = 0x4B59CCu;
            goto label_4b59cc;
        }
    }
    ctx->pc = 0x4B4BECu;
label_4b4bec:
    // 0x4b4bec: 0xafb40194  sw          $s4, 0x194($sp)
    ctx->pc = 0x4b4becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 20));
    // 0x4b4bf0: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x4b4bf0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x4b4bf4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4b4bf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4bf8: 0xafa00198  sw          $zero, 0x198($sp)
    ctx->pc = 0x4b4bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 0));
    // 0x4b4bfc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4b4bfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4c00: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x4b4c00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x4b4c04: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4B4C04u;
    {
        const bool branch_taken_0x4b4c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4C04u;
        // 0x4b4c08: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4c04) {
            ctx->pc = 0x4B4C70u;
            goto label_4b4c70;
        }
    }
    ctx->pc = 0x4B4C0Cu;
    // 0x4b4c0c: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x4b4c0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x4b4c10: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x4B4C10u;
    {
        const bool branch_taken_0x4b4c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4C10u;
        // 0x4b4c14: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4c10) {
            ctx->pc = 0x4B4C74u;
            goto label_4b4c74;
        }
    }
    ctx->pc = 0x4B4C18u;
    // 0x4b4c18: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x4b4c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4b4c1c: 0x2a220009  slti        $v0, $s1, 0x9
    ctx->pc = 0x4b4c1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
label_4b4c20:
    // 0x4b4c20: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B4C20u;
    {
        const bool branch_taken_0x4b4c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4C20u;
        // 0x4b4c24: 0x8fa50198  lw          $a1, 0x198($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4c20) {
            ctx->pc = 0x4B4C3Cu;
            goto label_4b4c3c;
        }
    }
    ctx->pc = 0x4B4C28u;
    // 0x4b4c28: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x4b4c28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4b4c2c: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x4b4c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x4b4c30: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x4b4c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x4b4c34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4B4C34u;
    {
        const bool branch_taken_0x4b4c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4C34u;
        // 0x4b4c38: 0xafa20198  sw          $v0, 0x198($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4c34) {
            ctx->pc = 0x4B4C50u;
            goto label_4b4c50;
        }
    }
    ctx->pc = 0x4B4C3Cu;
label_4b4c3c:
    // 0x4b4c3c: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x4b4c3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x4b4c40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B4C40u;
    {
        const bool branch_taken_0x4b4c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4C40u;
        // 0x4b4c44: 0x2432818  mult        $a1, $s2, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4c40) {
            ctx->pc = 0x4B4C50u;
            goto label_4b4c50;
        }
    }
    ctx->pc = 0x4B4C48u;
    // 0x4b4c48: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x4b4c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x4b4c4c: 0x2452ffd0  addiu       $s2, $v0, -0x30
    ctx->pc = 0x4b4c4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_4b4c50:
    // 0x4b4c50: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4b4c50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x4b4c54: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x4b4c54u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b4c58: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x4b4c58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x4b4c5c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B4C5Cu;
    {
        const bool branch_taken_0x4b4c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4C5Cu;
        // 0x4b4c60: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4c5c) {
            ctx->pc = 0x4B4C70u;
            goto label_4b4c70;
        }
    }
    ctx->pc = 0x4B4C64u;
    // 0x4b4c64: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x4b4c64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x4b4c68: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x4B4C68u;
    {
        const bool branch_taken_0x4b4c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4C68u;
        // 0x4b4c6c: 0x2a220009  slti        $v0, $s1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4c68) {
            ctx->pc = 0x4B4C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b4c20;
        }
    }
    ctx->pc = 0x4B4C70u;
label_4b4c70:
    // 0x4b4c70: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x4b4c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_4b4c74:
    // 0x4b4c74: 0x14820051  bne         $a0, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x4B4C74u;
    {
        const bool branch_taken_0x4b4c74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B4C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4C74u;
        // 0x4b4c78: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4c74) {
            ctx->pc = 0x4B4DBCu;
            goto label_4b4dbc;
        }
    }
    ctx->pc = 0x4B4C7Cu;
    // 0x4b4c7c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4b4c7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x4b4c80: 0x16200015  bnez        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x4B4C80u;
    {
        const bool branch_taken_0x4b4c80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4C80u;
        // 0x4b4c84: 0x82840000  lb          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4c80) {
            ctx->pc = 0x4B4CD8u;
            goto label_4b4cd8;
        }
    }
    ctx->pc = 0x4B4C88u;
    // 0x4b4c88: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x4b4c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4b4c8c: 0x5482000a  bnel        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4B4C8Cu;
    {
        const bool branch_taken_0x4b4c8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4b4c8c) {
            ctx->pc = 0x4B4C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B4C8Cu;
            // 0x4b4c90: 0x2482ffcf  addiu       $v0, $a0, -0x31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B4CB8u;
            goto label_4b4cb8;
        }
    }
    ctx->pc = 0x4B4C94u;
    // 0x4b4c94: 0x0  nop
    ctx->pc = 0x4b4c94u;
    // NOP
label_4b4c98:
    // 0x4b4c98: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4b4c98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x4b4c9c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4b4c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4b4ca0: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x4b4ca0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b4ca4: 0x0  nop
    ctx->pc = 0x4b4ca4u;
    // NOP
    // 0x4b4ca8: 0x0  nop
    ctx->pc = 0x4b4ca8u;
    // NOP
    // 0x4b4cac: 0x1082fffa  beq         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4B4CACu;
    {
        const bool branch_taken_0x4b4cac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4b4cac) {
            ctx->pc = 0x4B4C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b4c98;
        }
    }
    ctx->pc = 0x4B4CB4u;
    // 0x4b4cb4: 0x2482ffcf  addiu       $v0, $a0, -0x31
    ctx->pc = 0x4b4cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_4b4cb8:
    // 0x4b4cb8: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x4b4cb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x4b4cbc: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x4B4CBCu;
    {
        const bool branch_taken_0x4b4cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4CBCu;
        // 0x4b4cc0: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4cbc) {
            ctx->pc = 0x4B4DC0u;
            goto label_4b4dc0;
        }
    }
    ctx->pc = 0x4B4CC4u;
    // 0x4b4cc4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4b4cc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4cc8: 0x2485ffd0  addiu       $a1, $a0, -0x30
    ctx->pc = 0x4b4cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x4b4ccc: 0xafb40194  sw          $s4, 0x194($sp)
    ctx->pc = 0x4b4cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 20));
    // 0x4b4cd0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4B4CD0u;
    {
        const bool branch_taken_0x4b4cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4CD0u;
        // 0x4b4cd4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4cd0) {
            ctx->pc = 0x4B4CE8u;
            goto label_4b4ce8;
        }
    }
    ctx->pc = 0x4B4CD8u;
label_4b4cd8:
    // 0x4b4cd8: 0x2485ffd0  addiu       $a1, $a0, -0x30
    ctx->pc = 0x4b4cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x4b4cdc: 0x2ca2000a  sltiu       $v0, $a1, 0xA
    ctx->pc = 0x4b4cdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x4b4ce0: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x4B4CE0u;
    {
        const bool branch_taken_0x4b4ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4CE0u;
        // 0x4b4ce4: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4ce0) {
            ctx->pc = 0x4B4DC0u;
            goto label_4b4dc0;
        }
    }
    ctx->pc = 0x4B4CE8u;
label_4b4ce8:
    // 0x4b4ce8: 0x10a0002c  beqz        $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x4B4CE8u;
    {
        const bool branch_taken_0x4b4ce8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4CE8u;
        // 0x4b4cec: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4ce8) {
            ctx->pc = 0x4B4D9Cu;
            goto label_4b4d9c;
        }
    }
    ctx->pc = 0x4B4CF0u;
    // 0x4b4cf0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4b4cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b4cf4: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x4b4cf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x4b4cf8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4B4CF8u;
    {
        const bool branch_taken_0x4b4cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4CF8u;
        // 0x4b4cfc: 0x1074021  addu        $t0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4cf8) {
            ctx->pc = 0x4B4D50u;
            goto label_4b4d50;
        }
    }
    ctx->pc = 0x4B4D00u;
    // 0x4b4d00: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x4b4d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x4b4d04: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4b4d04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b4d08:
    // 0x4b4d08: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x4b4d08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x4b4d0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B4D0Cu;
    {
        const bool branch_taken_0x4b4d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4D0Cu;
        // 0x4b4d10: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4d0c) {
            ctx->pc = 0x4B4D28u;
            goto label_4b4d28;
        }
    }
    ctx->pc = 0x4B4D14u;
    // 0x4b4d14: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x4b4d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x4b4d18: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x4b4d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4b4d1c: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x4b4d1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4b4d20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4B4D20u;
    {
        const bool branch_taken_0x4b4d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4D20u;
        // 0x4b4d24: 0xafa40198  sw          $a0, 0x198($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4d20) {
            ctx->pc = 0x4B4D38u;
            goto label_4b4d38;
        }
    }
    ctx->pc = 0x4B4D28u;
label_4b4d28:
    // 0x4b4d28: 0x2a220011  slti        $v0, $s1, 0x11
    ctx->pc = 0x4b4d28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x4b4d2c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4B4D2Cu;
    {
        const bool branch_taken_0x4b4d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4D2Cu;
        // 0x4b4d30: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4d2c) {
            ctx->pc = 0x4B4D38u;
            goto label_4b4d38;
        }
    }
    ctx->pc = 0x4B4D34u;
    // 0x4b4d34: 0x2429018  mult        $s2, $s2, $v0
    ctx->pc = 0x4b4d34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_4b4d38:
    // 0x4b4d38: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4b4d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4b4d3c: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x4b4d3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x4b4d40: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x4B4D40u;
    {
        const bool branch_taken_0x4b4d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4D40u;
        // 0x4b4d44: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4d40) {
            ctx->pc = 0x4B4D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b4d08;
        }
    }
    ctx->pc = 0x4B4D48u;
    // 0x4b4d48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B4D48u;
    {
        const bool branch_taken_0x4b4d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4D48u;
        // 0x4b4d4c: 0x28420009  slti        $v0, $v0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4d48) {
            ctx->pc = 0x4B4D5Cu;
            goto label_4b4d5c;
        }
    }
    ctx->pc = 0x4B4D50u;
label_4b4d50:
    // 0x4b4d50: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x4b4d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x4b4d54: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4b4d54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4d58: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x4b4d58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_4b4d5c:
    // 0x4b4d5c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B4D5Cu;
    {
        const bool branch_taken_0x4b4d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4D5Cu;
        // 0x4b4d60: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4d5c) {
            ctx->pc = 0x4B4D80u;
            goto label_4b4d80;
        }
    }
    ctx->pc = 0x4B4D64u;
    // 0x4b4d64: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x4b4d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x4b4d68: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x4b4d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4b4d6c: 0xa00013  mtlo        $a1
    ctx->pc = 0x4b4d6cu;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x4b4d70: 0x70820000  madd        $zero, $a0, $v0
    ctx->pc = 0x4b4d70u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x4b4d74: 0x2012  mflo        $a0
    ctx->pc = 0x4b4d74u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x4b4d78: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4B4D78u;
    {
        const bool branch_taken_0x4b4d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4D78u;
        // 0x4b4d7c: 0xafa40198  sw          $a0, 0x198($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4d78) {
            ctx->pc = 0x4B4D94u;
            goto label_4b4d94;
        }
    }
    ctx->pc = 0x4B4D80u;
label_4b4d80:
    // 0x4b4d80: 0x2a220011  slti        $v0, $s1, 0x11
    ctx->pc = 0x4b4d80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x4b4d84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B4D84u;
    {
        const bool branch_taken_0x4b4d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4D84u;
        // 0x4b4d88: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4d84) {
            ctx->pc = 0x4B4D94u;
            goto label_4b4d94;
        }
    }
    ctx->pc = 0x4B4D8Cu;
    // 0x4b4d8c: 0x2422018  mult        $a0, $s2, $v0
    ctx->pc = 0x4b4d8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4b4d90: 0x859021  addu        $s2, $a0, $a1
    ctx->pc = 0x4b4d90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4b4d94:
    // 0x4b4d94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B4D94u;
    {
        const bool branch_taken_0x4b4d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4D94u;
        // 0x4b4d98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4d94) {
            ctx->pc = 0x4B4DA0u;
            goto label_4b4da0;
        }
    }
    ctx->pc = 0x4B4D9Cu;
label_4b4d9c:
    // 0x4b4d9c: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x4b4d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4b4da0:
    // 0x4b4da0: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x4b4da0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4da4: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x4b4da4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b4da8: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x4b4da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x4b4dac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4b4dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4db0: 0x2ca3000a  sltiu       $v1, $a1, 0xA
    ctx->pc = 0x4b4db0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x4b4db4: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x4B4DB4u;
    {
        const bool branch_taken_0x4b4db4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b4db4) {
            ctx->pc = 0x4B4CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b4ce8;
        }
    }
    ctx->pc = 0x4B4DBCu;
label_4b4dbc:
    // 0x4b4dbc: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x4b4dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_4b4dc0:
    // 0x4b4dc0: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B4DC0u;
    {
        const bool branch_taken_0x4b4dc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B4DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4DC0u;
        // 0x4b4dc4: 0xafa0018c  sw          $zero, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4dc0) {
            ctx->pc = 0x4B4DD4u;
            goto label_4b4dd4;
        }
    }
    ctx->pc = 0x4B4DC8u;
    // 0x4b4dc8: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x4b4dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x4b4dcc: 0x1482004a  bne         $a0, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x4B4DCCu;
    {
        const bool branch_taken_0x4b4dcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4b4dcc) {
            ctx->pc = 0x4B4EF8u;
            goto label_4b4ef8;
        }
    }
    ctx->pc = 0x4B4DD4u;
label_4b4dd4:
    // 0x4b4dd4: 0x56200007  bnel        $s1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B4DD4u;
    {
        const bool branch_taken_0x4b4dd4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b4dd4) {
            ctx->pc = 0x4B4DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B4DD4u;
            // 0x4b4dd8: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B4DF4u;
            goto label_4b4df4;
        }
    }
    ctx->pc = 0x4B4DDCu;
    // 0x4b4ddc: 0x54e00005  bnel        $a3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B4DDCu;
    {
        const bool branch_taken_0x4b4ddc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b4ddc) {
            ctx->pc = 0x4B4DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B4DDCu;
            // 0x4b4de0: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B4DF4u;
            goto label_4b4df4;
        }
    }
    ctx->pc = 0x4B4DE4u;
    // 0x4b4de4: 0x55400003  bnel        $t2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B4DE4u;
    {
        const bool branch_taken_0x4b4de4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b4de4) {
            ctx->pc = 0x4B4DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B4DE4u;
            // 0x4b4de8: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B4DF4u;
            goto label_4b4df4;
        }
    }
    ctx->pc = 0x4B4DECu;
    // 0x4b4dec: 0x100002f7  b           . + 4 + (0x2F7 << 2)
    ctx->pc = 0x4B4DECu;
    {
        const bool branch_taken_0x4b4dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4DECu;
        // 0x4b4df0: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4dec) {
            ctx->pc = 0x4B59CCu;
            goto label_4b59cc;
        }
    }
    ctx->pc = 0x4B4DF4u;
label_4b4df4:
    // 0x4b4df4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4b4df4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x4b4df8: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x4b4df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x4b4dfc: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x4b4dfcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b4e00: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B4E00u;
    {
        const bool branch_taken_0x4b4e00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B4E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4E00u;
        // 0x4b4e04: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4e00) {
            ctx->pc = 0x4B4E18u;
            goto label_4b4e18;
        }
    }
    ctx->pc = 0x4B4E08u;
    // 0x4b4e08: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x4b4e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x4b4e0c: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B4E0Cu;
    {
        const bool branch_taken_0x4b4e0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B4E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4E0Cu;
        // 0x4b4e10: 0x2482ffd0  addiu       $v0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4e0c) {
            ctx->pc = 0x4B4E24u;
            goto label_4b4e24;
        }
    }
    ctx->pc = 0x4B4E14u;
    // 0x4b4e14: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4b4e14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b4e18:
    // 0x4b4e18: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4b4e18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x4b4e1c: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x4b4e1cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b4e20: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x4b4e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_4b4e24:
    // 0x4b4e24: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x4b4e24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x4b4e28: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x4B4E28u;
    {
        const bool branch_taken_0x4b4e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4E28u;
        // 0x4b4e2c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4e28) {
            ctx->pc = 0x4B4EF4u;
            goto label_4b4ef4;
        }
    }
    ctx->pc = 0x4B4E30u;
    // 0x4b4e30: 0x54820009  bnel        $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B4E30u;
    {
        const bool branch_taken_0x4b4e30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4b4e30) {
            ctx->pc = 0x4B4E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B4E30u;
            // 0x4b4e34: 0x2482ffcf  addiu       $v0, $a0, -0x31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B4E58u;
            goto label_4b4e58;
        }
    }
    ctx->pc = 0x4B4E38u;
label_4b4e38:
    // 0x4b4e38: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4b4e38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x4b4e3c: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x4b4e3cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b4e40: 0x0  nop
    ctx->pc = 0x4b4e40u;
    // NOP
    // 0x4b4e44: 0x0  nop
    ctx->pc = 0x4b4e44u;
    // NOP
    // 0x4b4e48: 0x0  nop
    ctx->pc = 0x4b4e48u;
    // NOP
    // 0x4b4e4c: 0x1082fffa  beq         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4B4E4Cu;
    {
        const bool branch_taken_0x4b4e4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4b4e4c) {
            ctx->pc = 0x4B4E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b4e38;
        }
    }
    ctx->pc = 0x4B4E54u;
    // 0x4b4e54: 0x2482ffcf  addiu       $v0, $a0, -0x31
    ctx->pc = 0x4b4e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_4b4e58:
    // 0x4b4e58: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x4b4e58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x4b4e5c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x4B4E5Cu;
    {
        const bool branch_taken_0x4b4e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4E5Cu;
        // 0x4b4e60: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4e5c) {
            ctx->pc = 0x4B4EECu;
            goto label_4b4eec;
        }
    }
    ctx->pc = 0x4B4E64u;
    // 0x4b4e64: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4b4e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4e68: 0xafa4018c  sw          $a0, 0x18C($sp)
    ctx->pc = 0x4b4e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 4));
    // 0x4b4e6c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4b4e6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x4b4e70: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x4b4e70u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b4e74: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x4b4e74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x4b4e78: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x4B4E78u;
    {
        const bool branch_taken_0x4b4e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b4e78) {
            ctx->pc = 0x4B4E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B4E78u;
            // 0x4b4e7c: 0x8fa4018c  lw          $a0, 0x18C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B4EC0u;
            goto label_4b4ec0;
        }
    }
    ctx->pc = 0x4B4E80u;
    // 0x4b4e80: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x4b4e80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x4b4e84: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4B4E84u;
    {
        const bool branch_taken_0x4b4e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4E84u;
        // 0x4b4e88: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4e84) {
            ctx->pc = 0x4B4EBCu;
            goto label_4b4ebc;
        }
    }
    ctx->pc = 0x4B4E8Cu;
    // 0x4b4e8c: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x4b4e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_4b4e90:
    // 0x4b4e90: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4b4e90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x4b4e94: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x4b4e94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4b4e98: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x4b4e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4b4e9c: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x4b4e9cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b4ea0: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x4b4ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x4b4ea4: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x4b4ea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x4b4ea8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B4EA8u;
    {
        const bool branch_taken_0x4b4ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4EA8u;
        // 0x4b4eac: 0xafa3018c  sw          $v1, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4ea8) {
            ctx->pc = 0x4B4EBCu;
            goto label_4b4ebc;
        }
    }
    ctx->pc = 0x4B4EB0u;
    // 0x4b4eb0: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x4b4eb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x4b4eb4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x4B4EB4u;
    {
        const bool branch_taken_0x4b4eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4EB4u;
        // 0x4b4eb8: 0x8fa2018c  lw          $v0, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4eb4) {
            ctx->pc = 0x4B4E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b4e90;
        }
    }
    ctx->pc = 0x4B4EBCu;
label_4b4ebc:
    // 0x4b4ebc: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x4b4ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_4b4ec0:
    // 0x4b4ec0: 0x2861023  subu        $v0, $s4, $a2
    ctx->pc = 0x4b4ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x4b4ec4: 0x3c030098  lui         $v1, 0x98
    ctx->pc = 0x4b4ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)152 << 16));
    // 0x4b4ec8: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x4b4ec8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x4b4ecc: 0x3463967f  ori         $v1, $v1, 0x967F
    ctx->pc = 0x4b4eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)38527);
    // 0x4b4ed0: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x4b4ed0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x4b4ed4: 0xafa4018c  sw          $a0, 0x18C($sp)
    ctx->pc = 0x4b4ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 4));
    // 0x4b4ed8: 0x42023  negu        $a0, $a0
    ctx->pc = 0x4b4ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x4b4edc: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x4b4edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x4b4ee0: 0x89280b  movn        $a1, $a0, $t1
    ctx->pc = 0x4b4ee0u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x4b4ee4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B4EE4u;
    {
        const bool branch_taken_0x4b4ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4EE4u;
        // 0x4b4ee8: 0xafa5018c  sw          $a1, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4ee4) {
            ctx->pc = 0x4B4EF8u;
            goto label_4b4ef8;
        }
    }
    ctx->pc = 0x4B4EECu;
label_4b4eec:
    // 0x4b4eec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B4EECu;
    {
        const bool branch_taken_0x4b4eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4EECu;
        // 0x4b4ef0: 0xafa0018c  sw          $zero, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4eec) {
            ctx->pc = 0x4B4EF8u;
            goto label_4b4ef8;
        }
    }
    ctx->pc = 0x4B4EF4u;
label_4b4ef4:
    // 0x4b4ef4: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x4b4ef4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b4ef8:
    // 0x4b4ef8: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B4EF8u;
    {
        const bool branch_taken_0x4b4ef8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4EF8u;
        // 0x4b4efc: 0x8fa3018c  lw          $v1, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4ef8) {
            ctx->pc = 0x4B4F0Cu;
            goto label_4b4f0c;
        }
    }
    ctx->pc = 0x4B4F00u;
    // 0x4b4f00: 0x28a800b  movn        $s0, $s4, $t2
    ctx->pc = 0x4b4f00u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 20));
    // 0x4b4f04: 0x100002b1  b           . + 4 + (0x2B1 << 2)
    ctx->pc = 0x4B4F04u;
    {
        const bool branch_taken_0x4b4f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4F04u;
        // 0x4b4f08: 0x207a00a  movz        $s4, $s0, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4f04) {
            ctx->pc = 0x4B59CCu;
            goto label_4b59cc;
        }
    }
    ctx->pc = 0x4B4F0Cu;
label_4b4f0c:
    // 0x4b4f0c: 0x2a220011  slti        $v0, $s1, 0x11
    ctx->pc = 0x4b4f0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x4b4f10: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x4b4f10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4b4f14: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x4b4f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x4b4f18: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x4b4f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4b4f1c: 0x222980b  movn        $s3, $s1, $v0
    ctx->pc = 0x4b4f1cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 17));
    // 0x4b4f20: 0xafa3018c  sw          $v1, 0x18C($sp)
    ctx->pc = 0x4b4f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 3));
    // 0x4b4f24: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x4B4F24u;
    SET_GPR_U32(ctx, 31, 0x4B4F2Cu);
    ctx->pc = 0x4B4F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4F24u;
    // 0x4b4f28: 0x236b00a  movz        $s6, $s1, $s6 (Delay Slot)
    if (GPR_U64(ctx, 22) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x4B4F24u, 0x4B4F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4F2Cu;
label_4b4f2c:
    // 0x4b4f2c: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x4b4f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x4b4f30: 0x4810006  bgez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B4F30u;
    {
        const bool branch_taken_0x4b4f30 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4B4F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4F30u;
        // 0x4b4f34: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4f30) {
            ctx->pc = 0x4B4F4Cu;
            goto label_4b4f4c;
        }
    }
    ctx->pc = 0x4B4F38u;
    // 0x4b4f38: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x4b4f38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x4b4f3c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x4b4f3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x4b4f40: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4B4F40u;
    SET_GPR_U32(ctx, 31, 0x4B4F48u);
    ctx->pc = 0x4B4F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4F40u;
    // 0x4b4f44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4B4F40u, 0x4B4F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4F48u;
label_4b4f48:
    // 0x4b4f48: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4b4f48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b4f4c:
    // 0x4b4f4c: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x4b4f4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x4b4f50: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4B4F50u;
    {
        const bool branch_taken_0x4b4f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4F50u;
        // 0x4b4f54: 0x2a220010  slti        $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4f50) {
            ctx->pc = 0x4B4FB0u;
            goto label_4b4fb0;
        }
    }
    ctx->pc = 0x4B4F58u;
    // 0x4b4f58: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4b4f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4b4f5c: 0x2662fff7  addiu       $v0, $s3, -0x9
    ctx->pc = 0x4b4f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967287));
    // 0x4b4f60: 0x24630bb0  addiu       $v1, $v1, 0xBB0
    ctx->pc = 0x4b4f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2992));
    // 0x4b4f64: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4b4f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4b4f68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b4f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b4f6c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4b4f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4f70: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B4F70u;
    SET_GPR_U32(ctx, 31, 0x4B4F78u);
    ctx->pc = 0x4B4F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4F70u;
    // 0x4b4f74: 0xdc440000  ld          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B4F70u, 0x4B4F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4F78u;
label_4b4f78:
    // 0x4b4f78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b4f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4f7c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x4B4F7Cu;
    SET_GPR_U32(ctx, 31, 0x4B4F84u);
    ctx->pc = 0x4B4F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4F7Cu;
    // 0x4b4f80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x4B4F7Cu, 0x4B4F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4F84u;
label_4b4f84:
    // 0x4b4f84: 0x6410006  bgez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B4F84u;
    {
        const bool branch_taken_0x4b4f84 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x4B4F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4F84u;
        // 0x4b4f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4f84) {
            ctx->pc = 0x4B4FA0u;
            goto label_4b4fa0;
        }
    }
    ctx->pc = 0x4B4F8Cu;
    // 0x4b4f8c: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x4b4f8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x4b4f90: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x4b4f90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x4b4f94: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4B4F94u;
    SET_GPR_U32(ctx, 31, 0x4B4F9Cu);
    ctx->pc = 0x4B4F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4F94u;
    // 0x4b4f98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4B4F94u, 0x4B4F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4F9Cu;
label_4b4f9c:
    // 0x4b4f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b4f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b4fa0:
    // 0x4b4fa0: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4B4FA0u;
    SET_GPR_U32(ctx, 31, 0x4B4FA8u);
    ctx->pc = 0x4B4FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4FA0u;
    // 0x4b4fa4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4B4FA0u, 0x4B4FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4FA8u;
label_4b4fa8:
    // 0x4b4fa8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4b4fa8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4fac: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x4b4facu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
label_4b4fb0:
    // 0x4b4fb0: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x4B4FB0u;
    {
        const bool branch_taken_0x4b4fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4FB0u;
        // 0x4b4fb4: 0x8fa5018c  lw          $a1, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4fb0) {
            ctx->pc = 0x4B5074u;
            goto label_4b5074;
        }
    }
    ctx->pc = 0x4B4FB8u;
    // 0x4b4fb8: 0x10a00285  beqz        $a1, . + 4 + (0x285 << 2)
    ctx->pc = 0x4B4FB8u;
    {
        const bool branch_taken_0x4b4fb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4FB8u;
        // 0x4b4fbc: 0x8fa20188  lw          $v0, 0x188($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4fb8) {
            ctx->pc = 0x4B59D0u;
            goto label_4b59d0;
        }
    }
    ctx->pc = 0x4B4FC0u;
    // 0x4b4fc0: 0x18a00020  blez        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x4B4FC0u;
    {
        const bool branch_taken_0x4b4fc0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x4B4FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4FC0u;
        // 0x4b4fc4: 0x28a20017  slti        $v0, $a1, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4fc0) {
            ctx->pc = 0x4B5044u;
            goto label_4b5044;
        }
    }
    ctx->pc = 0x4B4FC8u;
    // 0x4b4fc8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B4FC8u;
    {
        const bool branch_taken_0x4b4fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4FC8u;
        // 0x4b4fcc: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4fc8) {
            ctx->pc = 0x4B4FE4u;
            goto label_4b4fe4;
        }
    }
    ctx->pc = 0x4B4FD0u;
    // 0x4b4fd0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x4b4fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x4b4fd4: 0x24420bb0  addiu       $v0, $v0, 0xBB0
    ctx->pc = 0x4b4fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2992));
    // 0x4b4fd8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b4fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4fdc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x4B4FDCu;
    {
        const bool branch_taken_0x4b4fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4FDCu;
        // 0x4b4fe0: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4fdc) {
            ctx->pc = 0x4B5034u;
            goto label_4b5034;
        }
    }
    ctx->pc = 0x4B4FE4u;
label_4b4fe4:
    // 0x4b4fe4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x4b4fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x4b4fe8: 0x713023  subu        $a2, $v1, $s1
    ctx->pc = 0x4b4fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x4b4fec: 0x8fa3018c  lw          $v1, 0x18C($sp)
    ctx->pc = 0x4b4fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x4b4ff0: 0x24c20016  addiu       $v0, $a2, 0x16
    ctx->pc = 0x4b4ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 22));
    // 0x4b4ff4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x4b4ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4b4ff8: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x4B4FF8u;
    {
        const bool branch_taken_0x4b4ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4FF8u;
        // 0x4b4ffc: 0x2331023  subu        $v0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4ff8) {
            ctx->pc = 0x4B507Cu;
            goto label_4b507c;
        }
    }
    ctx->pc = 0x4B5000u;
    // 0x4b5000: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x4b5000u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x4b5004: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x4b5004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x4b5008: 0x26100bb0  addiu       $s0, $s0, 0xBB0
    ctx->pc = 0x4b5008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2992));
    // 0x4b500c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x4b500cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4b5010: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4b5010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4b5014: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b5014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5018: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x4b5018u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b501c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B501Cu;
    SET_GPR_U32(ctx, 31, 0x4B5024u);
    ctx->pc = 0x4B5020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B501Cu;
    // 0x4b5020: 0xafa3018c  sw          $v1, 0x18C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B501Cu, 0x4B5024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5024u;
label_4b5024:
    // 0x4b5024: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x4b5024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x4b5028: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x4b5028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x4b502c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4b502cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4b5030: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b5030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b5034:
    // 0x4b5034: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B5034u;
    SET_GPR_U32(ctx, 31, 0x4B503Cu);
    ctx->pc = 0x4B5038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5034u;
    // 0x4b5038: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B5034u, 0x4B503Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B503Cu;
label_4b503c:
    // 0x4b503c: 0x10000263  b           . + 4 + (0x263 << 2)
    ctx->pc = 0x4B503Cu;
    {
        const bool branch_taken_0x4b503c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B503Cu;
        // 0x4b5040: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b503c) {
            ctx->pc = 0x4B59CCu;
            goto label_4b59cc;
        }
    }
    ctx->pc = 0x4B5044u;
label_4b5044:
    // 0x4b5044: 0x28a2ffea  slti        $v0, $a1, -0x16
    ctx->pc = 0x4b5044u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967274) ? 1 : 0);
    // 0x4b5048: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4B5048u;
    {
        const bool branch_taken_0x4b5048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B504Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5048u;
        // 0x4b504c: 0x8fa3018c  lw          $v1, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5048) {
            ctx->pc = 0x4B5078u;
            goto label_4b5078;
        }
    }
    ctx->pc = 0x4B5050u;
    // 0x4b5050: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b5050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b5054: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x4b5054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x4b5058: 0x24420bb0  addiu       $v0, $v0, 0xBB0
    ctx->pc = 0x4b5058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2992));
    // 0x4b505c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b505cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5060: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4b5060u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b5064: 0xc10b000  jal         func_42C000
    ctx->pc = 0x4B5064u;
    SET_GPR_U32(ctx, 31, 0x4B506Cu);
    ctx->pc = 0x4B5068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5064u;
    // 0x4b5068: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C000u, 0x4B5064u, 0x4B506Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B506Cu;
label_4b506c:
    // 0x4b506c: 0x10000257  b           . + 4 + (0x257 << 2)
    ctx->pc = 0x4B506Cu;
    {
        const bool branch_taken_0x4b506c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B506Cu;
        // 0x4b5070: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b506c) {
            ctx->pc = 0x4B59CCu;
            goto label_4b59cc;
        }
    }
    ctx->pc = 0x4B5074u;
label_4b5074:
    // 0x4b5074: 0x8fa3018c  lw          $v1, 0x18C($sp)
    ctx->pc = 0x4b5074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_4b5078:
    // 0x4b5078: 0x2331023  subu        $v0, $s1, $s3
    ctx->pc = 0x4b5078u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_4b507c:
    // 0x4b507c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x4b507cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b5080: 0x1a000055  blez        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x4B5080u;
    {
        const bool branch_taken_0x4b5080 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x4B5084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5080u;
        // 0x4b5084: 0x3206000f  andi        $a2, $s0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5080) {
            ctx->pc = 0x4B51D8u;
            goto label_4b51d8;
        }
    }
    ctx->pc = 0x4B5088u;
    // 0x4b5088: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B5088u;
    {
        const bool branch_taken_0x4b5088 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5088u;
        // 0x4b508c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5088) {
            ctx->pc = 0x4B50ACu;
            goto label_4b50ac;
        }
    }
    ctx->pc = 0x4B5090u;
    // 0x4b5090: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x4b5090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x4b5094: 0x24420bb0  addiu       $v0, $v0, 0xBB0
    ctx->pc = 0x4b5094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2992));
    // 0x4b5098: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b5098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b509c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b509cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b50a0: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B50A0u;
    SET_GPR_U32(ctx, 31, 0x4B50A8u);
    ctx->pc = 0x4B50A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B50A0u;
    // 0x4b50a4: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B50A0u, 0x4B50A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B50A8u;
label_4b50a8:
    // 0x4b50a8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4b50a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b50ac:
    // 0x4b50ac: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x4b50acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x4b50b0: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x4b50b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x4b50b4: 0x12000095  beqz        $s0, . + 4 + (0x95 << 2)
    ctx->pc = 0x4B50B4u;
    {
        const bool branch_taken_0x4b50b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B50B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B50B4u;
        // 0x4b50b8: 0x2a020135  slti        $v0, $s0, 0x135 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)309) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b50b4) {
            ctx->pc = 0x4B530Cu;
            goto label_4b530c;
        }
    }
    ctx->pc = 0x4B50BCu;
    // 0x4b50bc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B50BCu;
    {
        const bool branch_taken_0x4b50bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b50bc) {
            ctx->pc = 0x4B50C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B50BCu;
            // 0x4b50c0: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B50E0u;
            goto label_4b50e0;
        }
    }
    ctx->pc = 0x4B50C4u;
label_4b50c4:
    // 0x4b50c4: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B50C4u;
    SET_GPR_U32(ctx, 31, 0x4B50CCu);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B50C4u, 0x4B50CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B50CCu;
label_4b50cc:
    // 0x4b50cc: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x4b50ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x4b50d0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x4b50d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x4b50d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4b50d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4b50d8: 0x1000023c  b           . + 4 + (0x23C << 2)
    ctx->pc = 0x4B50D8u;
    {
        const bool branch_taken_0x4b50d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B50DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B50D8u;
        // 0x4b50dc: 0xdc950ed8  ld          $s5, 0xED8($a0) (Delay Slot)
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 4), 3800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b50d8) {
            ctx->pc = 0x4B59CCu;
            goto label_4b59cc;
        }
    }
    ctx->pc = 0x4B50E0u;
label_4b50e0:
    // 0x4b50e0: 0x1200008a  beqz        $s0, . + 4 + (0x8A << 2)
    ctx->pc = 0x4B50E0u;
    {
        const bool branch_taken_0x4b50e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B50E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B50E0u;
        // 0x4b50e4: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b50e0) {
            ctx->pc = 0x4B530Cu;
            goto label_4b530c;
        }
    }
    ctx->pc = 0x4B50E8u;
    // 0x4b50e8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4B50E8u;
    {
        const bool branch_taken_0x4b50e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B50ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B50E8u;
        // 0x4b50ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b50e8) {
            ctx->pc = 0x4B5134u;
            goto label_4b5134;
        }
    }
    ctx->pc = 0x4B50F0u;
    // 0x4b50f0: 0x3c130059  lui         $s3, 0x59
    ctx->pc = 0x4b50f0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)89 << 16));
    // 0x4b50f4: 0x0  nop
    ctx->pc = 0x4b50f4u;
    // NOP
label_4b50f8:
    // 0x4b50f8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x4b50f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x4b50fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B50FCu;
    {
        const bool branch_taken_0x4b50fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B50FCu;
        // 0x4b5100: 0x26630c68  addiu       $v1, $s3, 0xC68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 3176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b50fc) {
            ctx->pc = 0x4B511Cu;
            goto label_4b511c;
        }
    }
    ctx->pc = 0x4B5104u;
    // 0x4b5104: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x4b5104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x4b5108: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b5108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b510c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b510cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5110: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B5110u;
    SET_GPR_U32(ctx, 31, 0x4B5118u);
    ctx->pc = 0x4B5114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5110u;
    // 0x4b5114: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B5110u, 0x4B5118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5118u;
label_4b5118:
    // 0x4b5118: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4b5118u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b511c:
    // 0x4b511c: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x4b511cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x4b5120: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x4b5120u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4b5124: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4B5124u;
    {
        const bool branch_taken_0x4b5124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5124u;
        // 0x4b5128: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5124) {
            ctx->pc = 0x4B50F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b50f8;
        }
    }
    ctx->pc = 0x4B512Cu;
    // 0x4b512c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4B512Cu;
    {
        const bool branch_taken_0x4b512c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B512Cu;
        // 0x4b5130: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b512c) {
            ctx->pc = 0x4B513Cu;
            goto label_4b513c;
        }
    }
    ctx->pc = 0x4B5134u;
label_4b5134:
    // 0x4b5134: 0x3c130059  lui         $s3, 0x59
    ctx->pc = 0x4b5134u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)89 << 16));
    // 0x4b5138: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b5138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4b513c:
    // 0x4b513c: 0x3c05fcb0  lui         $a1, 0xFCB0
    ctx->pc = 0x4b513cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64688 << 16));
    // 0x4b5140: 0x4103f  dsra32      $v0, $a0, 0
    ctx->pc = 0x4b5140u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x4b5144: 0x26660c68  addiu       $a2, $s3, 0xC68
    ctx->pc = 0x4b5144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 3176));
    // 0x4b5148: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4b5148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4b514c: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x4b514cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x4b5150: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4b5150u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4b5154: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x4b5154u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x4b5158: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4b5158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4b515c: 0x902024  and         $a0, $a0, $s0
    ctx->pc = 0x4b515cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    // 0x4b5160: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4b5160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4b5164: 0x82a825  or          $s5, $a0, $v0
    ctx->pc = 0x4b5164u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4b5168: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x4b5168u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b516c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B516Cu;
    SET_GPR_U32(ctx, 31, 0x4B5174u);
    ctx->pc = 0x4B5170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B516Cu;
    // 0x4b5170: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B516Cu, 0x4B5174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5174u;
label_4b5174:
    // 0x4b5174: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4b5174u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5178: 0x3c047ff0  lui         $a0, 0x7FF0
    ctx->pc = 0x4b5178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32752 << 16));
    // 0x4b517c: 0x3c037ca0  lui         $v1, 0x7CA0
    ctx->pc = 0x4b517cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31904 << 16));
    // 0x4b5180: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4b5180u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b5184: 0x449024  and         $s2, $v0, $a0
    ctx->pc = 0x4b5184u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4b5188: 0x72182b  sltu        $v1, $v1, $s2
    ctx->pc = 0x4b5188u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x4b518c: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x4B518Cu;
    {
        const bool branch_taken_0x4b518c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B5190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B518Cu;
        // 0x4b5190: 0x3c027c90  lui         $v0, 0x7C90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31888 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b518c) {
            ctx->pc = 0x4B50C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b50c4;
        }
    }
    ctx->pc = 0x4B5194u;
    // 0x4b5194: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x4b5194u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x4b5198: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B5198u;
    {
        const bool branch_taken_0x4b5198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5198u;
        // 0x4b519c: 0x2f0b824  and         $s7, $s7, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5198) {
            ctx->pc = 0x4B51B8u;
            goto label_4b51b8;
        }
    }
    ctx->pc = 0x4B51A0u;
    // 0x4b51a0: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x4b51a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x4b51a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b51a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b51a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4b51a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4b51ac: 0x2e2b825  or          $s7, $s7, $v0
    ctx->pc = 0x4b51acu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    // 0x4b51b0: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x4B51B0u;
    {
        const bool branch_taken_0x4b51b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B51B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B51B0u;
        // 0x4b51b4: 0x2f0a825  or          $s5, $s7, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 23) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b51b0) {
            ctx->pc = 0x4B530Cu;
            goto label_4b530c;
        }
    }
    ctx->pc = 0x4B51B8u;
label_4b51b8:
    // 0x4b51b8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x4b51b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b51bc: 0x3c040350  lui         $a0, 0x350
    ctx->pc = 0x4b51bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)848 << 16));
    // 0x4b51c0: 0x2183f  dsra32      $v1, $v0, 0
    ctx->pc = 0x4b51c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b51c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4b51c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4b51c8: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4b51c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4b51cc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4b51ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4b51d0: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x4B51D0u;
    {
        const bool branch_taken_0x4b51d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B51D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B51D0u;
        // 0x4b51d4: 0x43a825  or          $s5, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b51d0) {
            ctx->pc = 0x4B530Cu;
            goto label_4b530c;
        }
    }
    ctx->pc = 0x4B51D8u;
label_4b51d8:
    // 0x4b51d8: 0x601004d  bgez        $s0, . + 4 + (0x4D << 2)
    ctx->pc = 0x4B51D8u;
    {
        const bool branch_taken_0x4b51d8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x4B51DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B51D8u;
        // 0x4b51dc: 0x8fa401a4  lw          $a0, 0x1A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b51d8) {
            ctx->pc = 0x4B5310u;
            goto label_4b5310;
        }
    }
    ctx->pc = 0x4B51E0u;
    // 0x4b51e0: 0x108023  negu        $s0, $s0
    ctx->pc = 0x4b51e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x4b51e4: 0x3206000f  andi        $a2, $s0, 0xF
    ctx->pc = 0x4b51e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x4b51e8: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B51E8u;
    {
        const bool branch_taken_0x4b51e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B51ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B51E8u;
        // 0x4b51ec: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b51e8) {
            ctx->pc = 0x4B520Cu;
            goto label_4b520c;
        }
    }
    ctx->pc = 0x4B51F0u;
    // 0x4b51f0: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x4b51f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x4b51f4: 0x24420bb0  addiu       $v0, $v0, 0xBB0
    ctx->pc = 0x4b51f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2992));
    // 0x4b51f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b51f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b51fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b51fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b5200: 0xc10b000  jal         func_42C000
    ctx->pc = 0x4B5200u;
    SET_GPR_U32(ctx, 31, 0x4B5208u);
    ctx->pc = 0x4B5204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5200u;
    // 0x4b5204: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C000u, 0x4B5200u, 0x4B5208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5208u;
label_4b5208:
    // 0x4b5208: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4b5208u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b520c:
    // 0x4b520c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x4b520cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x4b5210: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x4b5210u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x4b5214: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
    ctx->pc = 0x4B5214u;
    {
        const bool branch_taken_0x4b5214 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5214u;
        // 0x4b5218: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5214) {
            ctx->pc = 0x4B530Cu;
            goto label_4b530c;
        }
    }
    ctx->pc = 0x4B521Cu;
    // 0x4b521c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x4b521cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4b5220: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4B5220u;
    {
        const bool branch_taken_0x4b5220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B5224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5220u;
        // 0x4b5224: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5220) {
            ctx->pc = 0x4B526Cu;
            goto label_4b526c;
        }
    }
    ctx->pc = 0x4B5228u;
    // 0x4b5228: 0x3c130059  lui         $s3, 0x59
    ctx->pc = 0x4b5228u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)89 << 16));
    // 0x4b522c: 0x0  nop
    ctx->pc = 0x4b522cu;
    // NOP
label_4b5230:
    // 0x4b5230: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x4b5230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x4b5234: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B5234u;
    {
        const bool branch_taken_0x4b5234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5234u;
        // 0x4b5238: 0x26630c90  addiu       $v1, $s3, 0xC90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 3216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5234) {
            ctx->pc = 0x4B5254u;
            goto label_4b5254;
        }
    }
    ctx->pc = 0x4B523Cu;
    // 0x4b523c: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x4b523cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x4b5240: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b5240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b5244: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b5244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5248: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B5248u;
    SET_GPR_U32(ctx, 31, 0x4B5250u);
    ctx->pc = 0x4B524Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5248u;
    // 0x4b524c: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B5248u, 0x4B5250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5250u;
label_4b5250:
    // 0x4b5250: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4b5250u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b5254:
    // 0x4b5254: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x4b5254u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x4b5258: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x4b5258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4b525c: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4B525Cu;
    {
        const bool branch_taken_0x4b525c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B525Cu;
        // 0x4b5260: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b525c) {
            ctx->pc = 0x4B5230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b5230;
        }
    }
    ctx->pc = 0x4B5264u;
    // 0x4b5264: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4B5264u;
    {
        const bool branch_taken_0x4b5264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5264u;
        // 0x4b5268: 0x26630c90  addiu       $v1, $s3, 0xC90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 3216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5264) {
            ctx->pc = 0x4B5274u;
            goto label_4b5274;
        }
    }
    ctx->pc = 0x4B526Cu;
label_4b526c:
    // 0x4b526c: 0x3c130059  lui         $s3, 0x59
    ctx->pc = 0x4b526cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)89 << 16));
    // 0x4b5270: 0x26630c90  addiu       $v1, $s3, 0xC90
    ctx->pc = 0x4b5270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 3216));
label_4b5274:
    // 0x4b5274: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x4b5274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x4b5278: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b5278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b527c: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x4b527cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5280: 0xdc520000  ld          $s2, 0x0($v0)
    ctx->pc = 0x4b5280u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b5284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b5284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5288: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4b5288u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b528c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B528Cu;
    SET_GPR_U32(ctx, 31, 0x4B5294u);
    ctx->pc = 0x4B5290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B528Cu;
    // 0x4b5290: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B528Cu, 0x4B5294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5294u;
label_4b5294:
    // 0x4b5294: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4b5294u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5298: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4b5298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b529c: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B529Cu;
    SET_GPR_U32(ctx, 31, 0x4B52A4u);
    ctx->pc = 0x4B52A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B529Cu;
    // 0x4b52a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B529Cu, 0x4B52A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B52A4u;
label_4b52a4:
    // 0x4b52a4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4B52A4u;
    {
        const bool branch_taken_0x4b52a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B52A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B52A4u;
        // 0x4b52a8: 0x8fa401a4  lw          $a0, 0x1A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b52a4) {
            ctx->pc = 0x4B5310u;
            goto label_4b5310;
        }
    }
    ctx->pc = 0x4B52ACu;
    // 0x4b52ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b52acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b52b0: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4B52B0u;
    SET_GPR_U32(ctx, 31, 0x4B52B8u);
    ctx->pc = 0x4B52B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B52B0u;
    // 0x4b52b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4B52B0u, 0x4B52B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B52B8u;
label_4b52b8:
    // 0x4b52b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b52b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b52bc: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B52BCu;
    SET_GPR_U32(ctx, 31, 0x4B52C4u);
    ctx->pc = 0x4B52C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B52BCu;
    // 0x4b52c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B52BCu, 0x4B52C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B52C4u;
label_4b52c4:
    // 0x4b52c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b52c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b52c8: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B52C8u;
    SET_GPR_U32(ctx, 31, 0x4B52D0u);
    ctx->pc = 0x4B52CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B52C8u;
    // 0x4b52cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B52C8u, 0x4B52D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B52D0u;
label_4b52d0:
    // 0x4b52d0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x4B52D0u;
    {
        const bool branch_taken_0x4b52d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b52d0) {
            ctx->pc = 0x4B52D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B52D0u;
            // 0x4b52d4: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B5308u;
            goto label_4b5308;
        }
    }
    ctx->pc = 0x4B52D8u;
label_4b52d8:
    // 0x4b52d8: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B52D8u;
    SET_GPR_U32(ctx, 31, 0x4B52E0u);
    ctx->pc = 0x4B52DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B52D8u;
    // 0x4b52dc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B52D8u, 0x4B52E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B52E0u;
label_4b52e0:
    // 0x4b52e0: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x4b52e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x4b52e4: 0x100001b9  b           . + 4 + (0x1B9 << 2)
    ctx->pc = 0x4B52E4u;
    {
        const bool branch_taken_0x4b52e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B52E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B52E4u;
        // 0x4b52e8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b52e4) {
            ctx->pc = 0x4B59CCu;
            goto label_4b59cc;
        }
    }
    ctx->pc = 0x4B52ECu;
label_4b52ec:
    // 0x4b52ec: 0xc12d1b0  jal         func_4B46C0
    ctx->pc = 0x4B52ECu;
    SET_GPR_U32(ctx, 31, 0x4B52F4u);
    ctx->pc = 0x4B52F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B52ECu;
    // 0x4b52f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B46C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B46C0u, 0x4B52ECu, 0x4B52F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B52F4u;
label_4b52f4:
    // 0x4b52f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b52f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b52f8: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4B52F8u;
    SET_GPR_U32(ctx, 31, 0x4B5300u);
    ctx->pc = 0x4B52FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B52F8u;
    // 0x4b52fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4B52F8u, 0x4B5300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5300u;
label_4b5300:
    // 0x4b5300: 0x100001a6  b           . + 4 + (0x1A6 << 2)
    ctx->pc = 0x4B5300u;
    {
        const bool branch_taken_0x4b5300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5300u;
        // 0x4b5304: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5300) {
            ctx->pc = 0x4B599Cu;
            goto label_4b599c;
        }
    }
    ctx->pc = 0x4B5308u;
label_4b5308:
    // 0x4b5308: 0x3c0a82d  daddu       $s5, $fp, $zero
    ctx->pc = 0x4b5308u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4b530c:
    // 0x4b530c: 0x8fa401a4  lw          $a0, 0x1A4($sp)
    ctx->pc = 0x4b530cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
label_4b5310:
    // 0x4b5310: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4b5310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5314: 0x8fa50194  lw          $a1, 0x194($sp)
    ctx->pc = 0x4b5314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x4b5318: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4b5318u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b531c: 0xc12cf78  jal         func_4B3DE0
    ctx->pc = 0x4B531Cu;
    SET_GPR_U32(ctx, 31, 0x4B5324u);
    ctx->pc = 0x4B5320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B531Cu;
    // 0x4b5320: 0x8fa80198  lw          $t0, 0x198($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3DE0u, 0x4B531Cu, 0x4B5324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5324u;
label_4b5324:
    // 0x4b5324: 0xafa201a4  sw          $v0, 0x1A4($sp)
    ctx->pc = 0x4b5324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 2));
    // 0x4b5328: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x4b5328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x4b532c: 0xc12cf26  jal         func_4B3C98
    ctx->pc = 0x4B532Cu;
    SET_GPR_U32(ctx, 31, 0x4B5334u);
    ctx->pc = 0x4B5330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B532Cu;
    // 0x4b5330: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3C98u, 0x4B532Cu, 0x4B5334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5334u;
label_4b5334:
    // 0x4b5334: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x4b5334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x4b5338: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x4b5338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x4b533c: 0x27a50184  addiu       $a1, $sp, 0x184
    ctx->pc = 0x4b533cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x4b5340: 0xafa401e8  sw          $a0, 0x1E8($sp)
    ctx->pc = 0x4b5340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 4));
    // 0x4b5344: 0x10000127  b           . + 4 + (0x127 << 2)
    ctx->pc = 0x4B5344u;
    {
        const bool branch_taken_0x4b5344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5344u;
        // 0x4b5348: 0xafa501ec  sw          $a1, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5344) {
            ctx->pc = 0x4B57E4u;
            goto label_4b57e4;
        }
    }
    ctx->pc = 0x4B534Cu;
    // 0x4b534c: 0x0  nop
    ctx->pc = 0x4b534cu;
    // NOP
label_4b5350:
    // 0x4b5350: 0xc12d0d2  jal         func_4B4348
    ctx->pc = 0x4B5350u;
    SET_GPR_U32(ctx, 31, 0x4B5358u);
    ctx->pc = 0x4B5354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5350u;
    // 0x4b5354: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4348u, 0x4B5350u, 0x4B5358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5358u;
label_4b5358:
    // 0x4b5358: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x4b5358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
    // 0x4b535c: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x4b535cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x4b5360: 0xc12d132  jal         func_4B44C8
    ctx->pc = 0x4B5360u;
    SET_GPR_U32(ctx, 31, 0x4B5368u);
    ctx->pc = 0x4B5364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5360u;
    // 0x4b5364: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B44C8u, 0x4B5360u, 0x4B5368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5368u;
label_4b5368:
    // 0x4b5368: 0x1c400025  bgtz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x4B5368u;
    {
        const bool branch_taken_0x4b5368 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x4B536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5368u;
        // 0x4b536c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5368) {
            ctx->pc = 0x4B5400u;
            goto label_4b5400;
        }
    }
    ctx->pc = 0x4B5370u;
    // 0x4b5370: 0x1000018a  b           . + 4 + (0x18A << 2)
    ctx->pc = 0x4B5370u;
    {
        const bool branch_taken_0x4b5370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b5370) {
            ctx->pc = 0x4B599Cu;
            goto label_4b599c;
        }
    }
    ctx->pc = 0x4B5378u;
label_4b5378:
    // 0x4b5378: 0x14c00046  bnez        $a2, . + 4 + (0x46 << 2)
    ctx->pc = 0x4B5378u;
    {
        const bool branch_taken_0x4b5378 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5378u;
        // 0x4b537c: 0x8fa401b0  lw          $a0, 0x1B0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5378) {
            ctx->pc = 0x4B5494u;
            goto label_4b5494;
        }
    }
    ctx->pc = 0x4B5380u;
    // 0x4b5380: 0x12c00015  beqz        $s6, . + 4 + (0x15 << 2)
    ctx->pc = 0x4B5380u;
    {
        const bool branch_taken_0x4b5380 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5380u;
        // 0x4b5384: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5380) {
            ctx->pc = 0x4B53D8u;
            goto label_4b53d8;
        }
    }
    ctx->pc = 0x4B5388u;
    // 0x4b5388: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x4b5388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x4b538c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4b538cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4b5390: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b5390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b5394: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b5394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b5398: 0x1462002a  bne         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x4B5398u;
    {
        const bool branch_taken_0x4b5398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5398u;
        // 0x4b539c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5398) {
            ctx->pc = 0x4B5444u;
            goto label_4b5444;
        }
    }
    ctx->pc = 0x4B53A0u;
    // 0x4b53a0: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x4b53a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b53a4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4b53a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4b53a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4b53a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4b53ac: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4b53acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4b53b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b53b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b53b4: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x4B53B4u;
    {
        const bool branch_taken_0x4b53b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B53B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B53B4u;
        // 0x4b53b8: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b53b4) {
            ctx->pc = 0x4B5444u;
            goto label_4b5444;
        }
    }
    ctx->pc = 0x4B53BCu;
    // 0x4b53bc: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x4b53bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x4b53c0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4b53c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b53c4: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x4b53c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x4b53c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b53c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b53cc: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x4b53ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x4b53d0: 0x10000172  b           . + 4 + (0x172 << 2)
    ctx->pc = 0x4B53D0u;
    {
        const bool branch_taken_0x4b53d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B53D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B53D0u;
        // 0x4b53d4: 0x2a83c  dsll32      $s5, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b53d0) {
            ctx->pc = 0x4B599Cu;
            goto label_4b599c;
        }
    }
    ctx->pc = 0x4B53D8u;
label_4b53d8:
    // 0x4b53d8: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x4b53d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x4b53dc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4b53dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4b53e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b53e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b53e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b53e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b53e8: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x4B53E8u;
    {
        const bool branch_taken_0x4b53e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B53ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B53E8u;
        // 0x4b53ec: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b53e8) {
            ctx->pc = 0x4B5444u;
            goto label_4b5444;
        }
    }
    ctx->pc = 0x4B53F0u;
    // 0x4b53f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4b53f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4b53f4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4b53f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b53f8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4B53F8u;
    {
        const bool branch_taken_0x4b53f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B53FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B53F8u;
        // 0x4b53fc: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b53f8) {
            ctx->pc = 0x4B5444u;
            goto label_4b5444;
        }
    }
    ctx->pc = 0x4B5400u;
label_4b5400:
    // 0x4b5400: 0x3c047ff0  lui         $a0, 0x7FF0
    ctx->pc = 0x4b5400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32752 << 16));
    // 0x4b5404: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4b5404u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b5408: 0x3c05fff0  lui         $a1, 0xFFF0
    ctx->pc = 0x4b5408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65520 << 16));
    // 0x4b540c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4b540cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4b5410: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x4b5410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x4b5414: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b5414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b5418: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4b5418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4b541c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4b541cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4b5420: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4b5420u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4b5424: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x4b5424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x4b5428: 0xdfa301d8  ld          $v1, 0x1D8($sp)
    ctx->pc = 0x4b5428u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x4b542c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4b542cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4b5430: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4b5430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4b5434: 0xffa301d8  sd          $v1, 0x1D8($sp)
    ctx->pc = 0x4b5434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 3));
    // 0x4b5438: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4b5438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4b543c: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x4B543Cu;
    {
        const bool branch_taken_0x4b543c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B543Cu;
        // 0x4b5440: 0x64a825  or          $s5, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b543c) {
            ctx->pc = 0x4B599Cu;
            goto label_4b599c;
        }
    }
    ctx->pc = 0x4B5444u;
label_4b5444:
    // 0x4b5444: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4b5444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4b5448: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4b5448u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b544c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b544cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4b5450: 0x10400152  beqz        $v0, . + 4 + (0x152 << 2)
    ctx->pc = 0x4B5450u;
    {
        const bool branch_taken_0x4b5450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b5450) {
            ctx->pc = 0x4B599Cu;
            goto label_4b599c;
        }
    }
    ctx->pc = 0x4B5458u;
    // 0x4b5458: 0x16c0ffa4  bnez        $s6, . + 4 + (-0x5C << 2)
    ctx->pc = 0x4B5458u;
    {
        const bool branch_taken_0x4b5458 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b5458) {
            ctx->pc = 0x4B52ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b52ec;
        }
    }
    ctx->pc = 0x4B5460u;
    // 0x4b5460: 0xc12d1b0  jal         func_4B46C0
    ctx->pc = 0x4B5460u;
    SET_GPR_U32(ctx, 31, 0x4B5468u);
    ctx->pc = 0x4B5464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5460u;
    // 0x4b5464: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B46C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B46C0u, 0x4B5460u, 0x4B5468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5468u;
label_4b5468:
    // 0x4b5468: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b5468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b546c: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4B546Cu;
    SET_GPR_U32(ctx, 31, 0x4B5474u);
    ctx->pc = 0x4B5470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B546Cu;
    // 0x4b5470: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4B546Cu, 0x4B5474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5474u;
label_4b5474:
    // 0x4b5474: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4b5474u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5478: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b5478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b547c: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B547Cu;
    SET_GPR_U32(ctx, 31, 0x4B5484u);
    ctx->pc = 0x4B5480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B547Cu;
    // 0x4b5480: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B547Cu, 0x4B5484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5484u;
label_4b5484:
    // 0x4b5484: 0x1040ff94  beqz        $v0, . + 4 + (-0x6C << 2)
    ctx->pc = 0x4B5484u;
    {
        const bool branch_taken_0x4b5484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b5484) {
            ctx->pc = 0x4B52D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b52d8;
        }
    }
    ctx->pc = 0x4B548Cu;
    // 0x4b548c: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x4B548Cu;
    {
        const bool branch_taken_0x4b548c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b548c) {
            ctx->pc = 0x4B599Cu;
            goto label_4b599c;
        }
    }
    ctx->pc = 0x4B5494u;
label_4b5494:
    // 0x4b5494: 0xc12d27e  jal         func_4B49F8
    ctx->pc = 0x4B5494u;
    SET_GPR_U32(ctx, 31, 0x4B549Cu);
    ctx->pc = 0x4B5498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5494u;
    // 0x4b5498: 0x8fa501a8  lw          $a1, 0x1A8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B49F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B49F8u, 0x4B5494u, 0x4B549Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B549Cu;
label_4b549c:
    // 0x4b549c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b549cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b54a0: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x4b54a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x4b54a4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x4b54a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x4b54a8: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B54A8u;
    SET_GPR_U32(ctx, 31, 0x4B54B0u);
    ctx->pc = 0x4B54ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B54A8u;
    // 0x4b54ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B54A8u, 0x4B54B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B54B0u;
label_4b54b0:
    // 0x4b54b0: 0x1c400030  bgtz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x4B54B0u;
    {
        const bool branch_taken_0x4b54b0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x4b54b0) {
            ctx->pc = 0x4B5574u;
            goto label_4b5574;
        }
    }
    ctx->pc = 0x4B54B8u;
    // 0x4b54b8: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B54B8u;
    {
        const bool branch_taken_0x4b54b8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B54BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B54B8u;
        // 0x4b54bc: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b54b8) {
            ctx->pc = 0x4B54D0u;
            goto label_4b54d0;
        }
    }
    ctx->pc = 0x4B54C0u;
    // 0x4b54c0: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x4b54c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x4b54c4: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x4b54c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x4b54c8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x4B54C8u;
    {
        const bool branch_taken_0x4b54c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B54CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B54C8u;
        // 0x4b54cc: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b54c8) {
            ctx->pc = 0x4B55A0u;
            goto label_4b55a0;
        }
    }
    ctx->pc = 0x4B54D0u;
label_4b54d0:
    // 0x4b54d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4b54d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4b54d4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4b54d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b54d8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B54D8u;
    {
        const bool branch_taken_0x4b54d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B54DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B54D8u;
        // 0x4b54dc: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b54d8) {
            ctx->pc = 0x4B54FCu;
            goto label_4b54fc;
        }
    }
    ctx->pc = 0x4B54E0u;
    // 0x4b54e0: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x4b54e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b54e4: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x4b54e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x4b54e8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4b54e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4b54ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b54ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b54f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b54f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b54f4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x4B54F4u;
    {
        const bool branch_taken_0x4b54f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B54F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B54F4u;
        // 0x4b54f8: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b54f4) {
            ctx->pc = 0x4B5534u;
            goto label_4b5534;
        }
    }
    ctx->pc = 0x4B54FCu;
label_4b54fc:
    // 0x4b54fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b54fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b5500: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4b5500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4b5504: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4b5504u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b5508: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B5508u;
    {
        const bool branch_taken_0x4b5508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4B550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5508u;
        // 0x4b550c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5508) {
            ctx->pc = 0x4B551Cu;
            goto label_4b551c;
        }
    }
    ctx->pc = 0x4B5510u;
    // 0x4b5510: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4b5510u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b5514: 0x1040ff70  beqz        $v0, . + 4 + (-0x90 << 2)
    ctx->pc = 0x4B5514u;
    {
        const bool branch_taken_0x4b5514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b5514) {
            ctx->pc = 0x4B52D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b52d8;
        }
    }
    ctx->pc = 0x4B551Cu;
label_4b551c:
    // 0x4b551c: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x4b551cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x4b5520: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x4b5520u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x4b5524: 0x3411bff0  ori         $s1, $zero, 0xBFF0
    ctx->pc = 0x4b5524u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x4b5528: 0x118c3c  dsll32      $s1, $s1, 16
    ctx->pc = 0x4b5528u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4b552c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x4B552Cu;
    {
        const bool branch_taken_0x4b552c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B552Cu;
        // 0x4b5530: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b552c) {
            ctx->pc = 0x4B55A4u;
            goto label_4b55a4;
        }
    }
    ctx->pc = 0x4B5534u;
label_4b5534:
    // 0x4b5534: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x4b5534u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x4b5538: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x4b5538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x4b553c: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B553Cu;
    SET_GPR_U32(ctx, 31, 0x4B5544u);
    ctx->pc = 0x4B5540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B553Cu;
    // 0x4b5540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B553Cu, 0x4B5544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5544u;
label_4b5544:
    // 0x4b5544: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B5544u;
    {
        const bool branch_taken_0x4b5544 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4B5548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5544u;
        // 0x4b5548: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5544) {
            ctx->pc = 0x4B555Cu;
            goto label_4b555c;
        }
    }
    ctx->pc = 0x4B554Cu;
    // 0x4b554c: 0x3410ff80  ori         $s0, $zero, 0xFF80
    ctx->pc = 0x4b554cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x4b5550: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x4b5550u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x4b5554: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4B5554u;
    {
        const bool branch_taken_0x4b5554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b5554) {
            ctx->pc = 0x4B5594u;
            goto label_4b5594;
        }
    }
    ctx->pc = 0x4B555Cu;
label_4b555c:
    // 0x4b555c: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x4b555cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x4b5560: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x4b5560u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x4b5564: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B5564u;
    SET_GPR_U32(ctx, 31, 0x4B556Cu);
    ctx->pc = 0x4B5568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5564u;
    // 0x4b5568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B5564u, 0x4B556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B556Cu;
label_4b556c:
    // 0x4b556c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4B556Cu;
    {
        const bool branch_taken_0x4b556c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B556Cu;
        // 0x4b5570: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b556c) {
            ctx->pc = 0x4B5590u;
            goto label_4b5590;
        }
    }
    ctx->pc = 0x4B5574u;
label_4b5574:
    // 0x4b5574: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x4b5574u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x4b5578: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x4b5578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x4b557c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B557Cu;
    SET_GPR_U32(ctx, 31, 0x4B5584u);
    ctx->pc = 0x4B5580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B557Cu;
    // 0x4b5580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B557Cu, 0x4B5584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5584u;
label_4b5584:
    // 0x4b5584: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b5584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5588: 0x16c00005  bnez        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B5588u;
    {
        const bool branch_taken_0x4b5588 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5588u;
        // 0x4b558c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5588) {
            ctx->pc = 0x4B55A0u;
            goto label_4b55a0;
        }
    }
    ctx->pc = 0x4B5590u;
label_4b5590:
    // 0x4b5590: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b5590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b5594:
    // 0x4b5594: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4B5594u;
    SET_GPR_U32(ctx, 31, 0x4B559Cu);
    ctx->pc = 0x4B5598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5594u;
    // 0x4b5598: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4B5594u, 0x4B559Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B559Cu;
label_4b559c:
    // 0x4b559c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4b559cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b55a0:
    // 0x4b55a0: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x4b55a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4b55a4:
    // 0x4b55a4: 0x3c1e7ff0  lui         $fp, 0x7FF0
    ctx->pc = 0x4b55a4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)32752 << 16));
    // 0x4b55a8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4b55a8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4b55ac: 0x2a0b82d  daddu       $s7, $s5, $zero
    ctx->pc = 0x4b55acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b55b0: 0x7e1824  and         $v1, $v1, $fp
    ctx->pc = 0x4b55b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x4b55b4: 0x3c027fe0  lui         $v0, 0x7FE0
    ctx->pc = 0x4b55b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32736 << 16));
    // 0x4b55b8: 0x14620039  bne         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x4B55B8u;
    {
        const bool branch_taken_0x4b55b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B55BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B55B8u;
        // 0x4b55bc: 0xafa30198  sw          $v1, 0x198($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b55b8) {
            ctx->pc = 0x4B56A0u;
            goto label_4b56a0;
        }
    }
    ctx->pc = 0x4B55C0u;
    // 0x4b55c0: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x4b55c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b55c4: 0x3c04fcb0  lui         $a0, 0xFCB0
    ctx->pc = 0x4b55c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64688 << 16));
    // 0x4b55c8: 0x3103f  dsra32      $v0, $v1, 0
    ctx->pc = 0x4b55c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4b55cc: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4b55ccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4b55d0: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x4b55d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x4b55d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4b55d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4b55d8: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x4b55d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x4b55dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4b55dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4b55e0: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4b55e0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4b55e4: 0x62a825  or          $s5, $v1, $v0
    ctx->pc = 0x4b55e4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4b55e8: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x4b55e8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4b55ec: 0xc12d1b0  jal         func_4B46C0
    ctx->pc = 0x4B55ECu;
    SET_GPR_U32(ctx, 31, 0x4B55F4u);
    ctx->pc = 0x4B55F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B55ECu;
    // 0x4b55f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B46C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B46C0u, 0x4B55ECu, 0x4B55F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B55F4u;
label_4b55f4:
    // 0x4b55f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b55f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b55f8: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B55F8u;
    SET_GPR_U32(ctx, 31, 0x4B5600u);
    ctx->pc = 0x4B55FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B55F8u;
    // 0x4b55fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B55F8u, 0x4B5600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5600u;
label_4b5600:
    // 0x4b5600: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b5600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5604: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4B5604u;
    SET_GPR_U32(ctx, 31, 0x4B560Cu);
    ctx->pc = 0x4B5608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5604u;
    // 0x4b5608: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4B5604u, 0x4B560Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B560Cu;
label_4b560c:
    // 0x4b560c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4b560cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5610: 0x3c037c9f  lui         $v1, 0x7C9F
    ctx->pc = 0x4b5610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31903 << 16));
    // 0x4b5614: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b5614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b5618: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4b5618u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b561c: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x4b561cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x4b5620: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x4b5620u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4b5624: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x4B5624u;
    {
        const bool branch_taken_0x4b5624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5624u;
        // 0x4b5628: 0x2e0182d  daddu       $v1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5624) {
            ctx->pc = 0x4B5680u;
            goto label_4b5680;
        }
    }
    ctx->pc = 0x4B562Cu;
    // 0x4b562c: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x4b562cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x4b5630: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4b5630u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4b5634: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b5634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b5638: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B5638u;
    {
        const bool branch_taken_0x4b5638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5638u;
        // 0x4b563c: 0xdfa401e0  ld          $a0, 0x1E0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5638) {
            ctx->pc = 0x4B5654u;
            goto label_4b5654;
        }
    }
    ctx->pc = 0x4B5640u;
    // 0x4b5640: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x4b5640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5644: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4b5644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4b5648: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4b5648u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b564c: 0x1052fe9d  beq         $v0, $s2, . + 4 + (-0x163 << 2)
    ctx->pc = 0x4B564Cu;
    {
        const bool branch_taken_0x4b564c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x4b564c) {
            ctx->pc = 0x4B50C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b50c4;
        }
    }
    ctx->pc = 0x4B5654u;
label_4b5654:
    // 0x4b5654: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x4b5654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x4b5658: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b5658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b565c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4b565cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4b5660: 0x932024  and         $a0, $a0, $s3
    ctx->pc = 0x4b5660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 19));
    // 0x4b5664: 0xffa401e0  sd          $a0, 0x1E0($sp)
    ctx->pc = 0x4b5664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 4));
    // 0x4b5668: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4b5668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4b566c: 0xffa401e0  sd          $a0, 0x1E0($sp)
    ctx->pc = 0x4b566cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 4));
    // 0x4b5670: 0x932025  or          $a0, $a0, $s3
    ctx->pc = 0x4b5670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 19));
    // 0x4b5674: 0xffa401e0  sd          $a0, 0x1E0($sp)
    ctx->pc = 0x4b5674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 4));
    // 0x4b5678: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x4B5678u;
    {
        const bool branch_taken_0x4b5678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5678u;
        // 0x4b567c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5678) {
            ctx->pc = 0x4B57E4u;
            goto label_4b57e4;
        }
    }
    ctx->pc = 0x4B5680u;
label_4b5680:
    // 0x4b5680: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x4b5680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5684: 0x3c040350  lui         $a0, 0x350
    ctx->pc = 0x4b5684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)848 << 16));
    // 0x4b5688: 0x2183f  dsra32      $v1, $v0, 0
    ctx->pc = 0x4b5688u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b568c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4b568cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4b5690: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4b5690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4b5694: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4b5694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4b5698: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x4B5698u;
    {
        const bool branch_taken_0x4b5698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5698u;
        // 0x4b569c: 0x43a825  or          $s5, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5698) {
            ctx->pc = 0x4B5728u;
            goto label_4b5728;
        }
    }
    ctx->pc = 0x4B56A0u;
label_4b56a0:
    // 0x4b56a0: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x4b56a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x4b56a4: 0x3c020340  lui         $v0, 0x340
    ctx->pc = 0x4b56a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)832 << 16));
    // 0x4b56a8: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x4b56a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4b56ac: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4B56ACu;
    {
        const bool branch_taken_0x4b56ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b56ac) {
            ctx->pc = 0x4B5704u;
            goto label_4b5704;
        }
    }
    ctx->pc = 0x4B56B4u;
    // 0x4b56b4: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x4b56b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x4b56b8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x4b56b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x4b56bc: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B56BCu;
    SET_GPR_U32(ctx, 31, 0x4B56C4u);
    ctx->pc = 0x4B56C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B56BCu;
    // 0x4b56c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B56BCu, 0x4B56C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B56C4u;
label_4b56c4:
    // 0x4b56c4: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4B56C4u;
    {
        const bool branch_taken_0x4b56c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4b56c4) {
            ctx->pc = 0x4B5704u;
            goto label_4b5704;
        }
    }
    ctx->pc = 0x4B56CCu;
    // 0x4b56cc: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x4b56ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x4b56d0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x4b56d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x4b56d4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4B56D4u;
    SET_GPR_U32(ctx, 31, 0x4B56DCu);
    ctx->pc = 0x4B56D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B56D4u;
    // 0x4b56d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4B56D4u, 0x4B56DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B56DCu;
label_4b56dc:
    // 0x4b56dc: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x4B56DCu;
    SET_GPR_U32(ctx, 31, 0x4B56E4u);
    ctx->pc = 0x4B56E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B56DCu;
    // 0x4b56e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x4B56DCu, 0x4B56E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B56E4u;
label_4b56e4:
    // 0x4b56e4: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x4B56E4u;
    SET_GPR_U32(ctx, 31, 0x4B56ECu);
    ctx->pc = 0x4B56E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B56E4u;
    // 0x4b56e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x4B56E4u, 0x4B56ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B56ECu;
label_4b56ec:
    // 0x4b56ec: 0x16c00005  bnez        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B56ECu;
    {
        const bool branch_taken_0x4b56ec = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B56F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B56ECu;
        // 0x4b56f0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b56ec) {
            ctx->pc = 0x4B5704u;
            goto label_4b5704;
        }
    }
    ctx->pc = 0x4B56F4u;
    // 0x4b56f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4b56f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b56f8: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4B56F8u;
    SET_GPR_U32(ctx, 31, 0x4B5700u);
    ctx->pc = 0x4B56FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B56F8u;
    // 0x4b56fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4B56F8u, 0x4B5700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5700u;
label_4b5700:
    // 0x4b5700: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4b5700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b5704:
    // 0x4b5704: 0xc12d1b0  jal         func_4B46C0
    ctx->pc = 0x4B5704u;
    SET_GPR_U32(ctx, 31, 0x4B570Cu);
    ctx->pc = 0x4B5708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5704u;
    // 0x4b5708: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B46C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B46C0u, 0x4B5704u, 0x4B570Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B570Cu;
label_4b570c:
    // 0x4b570c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b570cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5710: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B5710u;
    SET_GPR_U32(ctx, 31, 0x4B5718u);
    ctx->pc = 0x4B5714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5710u;
    // 0x4b5714: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B5710u, 0x4B5718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5718u;
label_4b5718:
    // 0x4b5718: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b5718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b571c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4B571Cu;
    SET_GPR_U32(ctx, 31, 0x4B5724u);
    ctx->pc = 0x4B5720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B571Cu;
    // 0x4b5720: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4B571Cu, 0x4B5724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5724u;
label_4b5724:
    // 0x4b5724: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4b5724u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b5728:
    // 0x4b5728: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x4b5728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b572c: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x4b572cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x4b5730: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4b5730u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b5734: 0x439024  and         $s2, $v0, $v1
    ctx->pc = 0x4b5734u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b5738: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x4b5738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x4b573c: 0x1452002a  bne         $v0, $s2, . + 4 + (0x2A << 2)
    ctx->pc = 0x4B573Cu;
    {
        const bool branch_taken_0x4b573c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x4B5740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B573Cu;
        // 0x4b5740: 0x8fa401a0  lw          $a0, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b573c) {
            ctx->pc = 0x4B57E8u;
            goto label_4b57e8;
        }
    }
    ctx->pc = 0x4B5744u;
    // 0x4b5744: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x4B5744u;
    SET_GPR_U32(ctx, 31, 0x4B574Cu);
    ctx->pc = 0x4B5748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5744u;
    // 0x4b5748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x4B5744u, 0x4B574Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B574Cu;
label_4b574c:
    // 0x4b574c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x4B574Cu;
    SET_GPR_U32(ctx, 31, 0x4B5754u);
    ctx->pc = 0x4B5750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B574Cu;
    // 0x4b5750: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x4B574Cu, 0x4B5754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5754u;
label_4b5754:
    // 0x4b5754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b5754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5758: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4B5758u;
    SET_GPR_U32(ctx, 31, 0x4B5760u);
    ctx->pc = 0x4B575Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5758u;
    // 0x4b575c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4B5758u, 0x4B5760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5760u;
label_4b5760:
    // 0x4b5760: 0x16c0000c  bnez        $s6, . + 4 + (0xC << 2)
    ctx->pc = 0x4B5760u;
    {
        const bool branch_taken_0x4b5760 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B5764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5760u;
        // 0x4b5764: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5760) {
            ctx->pc = 0x4B5794u;
            goto label_4b5794;
        }
    }
    ctx->pc = 0x4B5768u;
    // 0x4b5768: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x4b5768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b576c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4b576cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4b5770: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4b5770u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b5774: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B5774u;
    {
        const bool branch_taken_0x4b5774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B5778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5774u;
        // 0x4b5778: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5774) {
            ctx->pc = 0x4B5794u;
            goto label_4b5794;
        }
    }
    ctx->pc = 0x4B577Cu;
    // 0x4b577c: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x4b577cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x4b5780: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4b5780u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4b5784: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b5784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b5788: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b5788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b578c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x4B578Cu;
    {
        const bool branch_taken_0x4b578c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b578c) {
            ctx->pc = 0x4B57CCu;
            goto label_4b57cc;
        }
    }
    ctx->pc = 0x4B5794u;
label_4b5794:
    // 0x4b5794: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4b5794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4b5798: 0xdc250d78  ld          $a1, 0xD78($at)
    ctx->pc = 0x4b5798u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x590D78u));
    // 0x4b579c: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B579Cu;
    SET_GPR_U32(ctx, 31, 0x4B57A4u);
    ctx->pc = 0x4B57A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B579Cu;
    // 0x4b57a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B579Cu, 0x4B57A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B57A4u;
label_4b57a4:
    // 0x4b57a4: 0x440007d  bltz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x4B57A4u;
    {
        const bool branch_taken_0x4b57a4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4b57a4) {
            ctx->pc = 0x4B599Cu;
            goto label_4b599c;
        }
    }
    ctx->pc = 0x4B57ACu;
    // 0x4b57ac: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4b57acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4b57b0: 0xdc250d80  ld          $a1, 0xD80($at)
    ctx->pc = 0x4b57b0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x590D80u));
    // 0x4b57b4: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B57B4u;
    SET_GPR_U32(ctx, 31, 0x4B57BCu);
    ctx->pc = 0x4B57B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B57B4u;
    // 0x4b57b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B57B4u, 0x4B57BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B57BCu;
label_4b57bc:
    // 0x4b57bc: 0x1c400077  bgtz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x4B57BCu;
    {
        const bool branch_taken_0x4b57bc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x4B57C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B57BCu;
        // 0x4b57c0: 0x8fa401a0  lw          $a0, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b57bc) {
            ctx->pc = 0x4B599Cu;
            goto label_4b599c;
        }
    }
    ctx->pc = 0x4B57C4u;
    // 0x4b57c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4B57C4u;
    {
        const bool branch_taken_0x4b57c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b57c4) {
            ctx->pc = 0x4B57E8u;
            goto label_4b57e8;
        }
    }
    ctx->pc = 0x4B57CCu;
label_4b57cc:
    // 0x4b57cc: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4b57ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4b57d0: 0xdc250d88  ld          $a1, 0xD88($at)
    ctx->pc = 0x4b57d0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x590D88u));
    // 0x4b57d4: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B57D4u;
    SET_GPR_U32(ctx, 31, 0x4B57DCu);
    ctx->pc = 0x4B57D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B57D4u;
    // 0x4b57d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B57D4u, 0x4B57DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B57DCu;
label_4b57dc:
    // 0x4b57dc: 0x440006f  bltz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x4B57DCu;
    {
        const bool branch_taken_0x4b57dc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4b57dc) {
            ctx->pc = 0x4B599Cu;
            goto label_4b599c;
        }
    }
    ctx->pc = 0x4B57E4u;
label_4b57e4:
    // 0x4b57e4: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x4b57e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_4b57e8:
    // 0x4b57e8: 0xc12cf14  jal         func_4B3C50
    ctx->pc = 0x4B57E8u;
    SET_GPR_U32(ctx, 31, 0x4B57F0u);
    ctx->pc = 0x4B57ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B57E8u;
    // 0x4b57ec: 0x8fa501a4  lw          $a1, 0x1A4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3C50u, 0x4B57E8u, 0x4B57F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B57F0u;
label_4b57f0:
    // 0x4b57f0: 0x8fa4019c  lw          $a0, 0x19C($sp)
    ctx->pc = 0x4b57f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x4b57f4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4b57f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b57f8: 0x8fa601e8  lw          $a2, 0x1E8($sp)
    ctx->pc = 0x4b57f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x4b57fc: 0xc12d222  jal         func_4B4888
    ctx->pc = 0x4B57FCu;
    SET_GPR_U32(ctx, 31, 0x4B5804u);
    ctx->pc = 0x4B5800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B57FCu;
    // 0x4b5800: 0x8fa701ec  lw          $a3, 0x1EC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4888u, 0x4B57FCu, 0x4B5804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5804u;
label_4b5804:
    // 0x4b5804: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x4b5804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x4b5808: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4b5808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b580c: 0xc12d018  jal         func_4B4060
    ctx->pc = 0x4B580Cu;
    SET_GPR_U32(ctx, 31, 0x4B5814u);
    ctx->pc = 0x4B5810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B580Cu;
    // 0x4b5810: 0xafa2019c  sw          $v0, 0x19C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4060u, 0x4B580Cu, 0x4B5814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5814u;
label_4b5814:
    // 0x4b5814: 0x8fa3018c  lw          $v1, 0x18C($sp)
    ctx->pc = 0x4b5814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x4b5818: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B5818u;
    {
        const bool branch_taken_0x4b5818 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4B581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5818u;
        // 0x4b581c: 0xafa201a8  sw          $v0, 0x1A8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5818) {
            ctx->pc = 0x4B5834u;
            goto label_4b5834;
        }
    }
    ctx->pc = 0x4B5820u;
    // 0x4b5820: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x4b5820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5824: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b5824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5828: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4b5828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b582c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4B582Cu;
    {
        const bool branch_taken_0x4b582c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B582Cu;
        // 0x4b5830: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b582c) {
            ctx->pc = 0x4B5848u;
            goto label_4b5848;
        }
    }
    ctx->pc = 0x4B5834u;
label_4b5834:
    // 0x4b5834: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x4b5834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x4b5838: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4b5838u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b583c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4b583cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5840: 0x48823  negu        $s1, $a0
    ctx->pc = 0x4b5840u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x4b5844: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4b5844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b5848:
    // 0x4b5848: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x4b5848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x4b584c: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B584Cu;
    {
        const bool branch_taken_0x4b584c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x4B5850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B584Cu;
        // 0x4b5850: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b584c) {
            ctx->pc = 0x4B585Cu;
            goto label_4b585c;
        }
    }
    ctx->pc = 0x4B5854u;
    // 0x4b5854: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B5854u;
    {
        const bool branch_taken_0x4b5854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5854u;
        // 0x4b5858: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5854) {
            ctx->pc = 0x4B5860u;
            goto label_4b5860;
        }
    }
    ctx->pc = 0x4B585Cu;
label_4b585c:
    // 0x4b585c: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x4b585cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_4b5860:
    // 0x4b5860: 0x8fa70184  lw          $a3, 0x184($sp)
    ctx->pc = 0x4b5860u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x4b5864: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4b5864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4b5868: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x4b5868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4b586c: 0x28c3fc02  slti        $v1, $a2, -0x3FE
    ctx->pc = 0x4b586cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x4b5870: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B5870u;
    {
        const bool branch_taken_0x4b5870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5870u;
        // 0x4b5874: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5870) {
            ctx->pc = 0x4B5880u;
            goto label_4b5880;
        }
    }
    ctx->pc = 0x4B5878u;
    // 0x4b5878: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4B5878u;
    {
        const bool branch_taken_0x4b5878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5878u;
        // 0x4b587c: 0x24920433  addiu       $s2, $a0, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1075));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5878) {
            ctx->pc = 0x4B5888u;
            goto label_4b5888;
        }
    }
    ctx->pc = 0x4B5880u;
label_4b5880:
    // 0x4b5880: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x4b5880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x4b5884: 0x479023  subu        $s2, $v0, $a3
    ctx->pc = 0x4b5884u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_4b5888:
    // 0x4b5888: 0x2123021  addu        $a2, $s0, $s2
    ctx->pc = 0x4b5888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x4b588c: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x4b588cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x4b5890: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4b5890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5894: 0x226102a  slt         $v0, $s1, $a2
    ctx->pc = 0x4b5894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x4b5898: 0x222300b  movn        $a2, $s1, $v0
    ctx->pc = 0x4b5898u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 17));
    // 0x4b589c: 0x266182a  slt         $v1, $s3, $a2
    ctx->pc = 0x4b589cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x4b58a0: 0x263300b  movn        $a2, $s3, $v1
    ctx->pc = 0x4b58a0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 19));
    // 0x4b58a4: 0x18c00004  blez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B58A4u;
    {
        const bool branch_taken_0x4b58a4 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x4b58a4) {
            ctx->pc = 0x4B58B8u;
            goto label_4b58b8;
        }
    }
    ctx->pc = 0x4B58ACu;
    // 0x4b58ac: 0x2669823  subu        $s3, $s3, $a2
    ctx->pc = 0x4b58acu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x4b58b0: 0x2268823  subu        $s1, $s1, $a2
    ctx->pc = 0x4b58b0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x4b58b4: 0x2068023  subu        $s0, $s0, $a2
    ctx->pc = 0x4b58b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_4b58b8:
    // 0x4b58b8: 0x18a0000b  blez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x4B58B8u;
    {
        const bool branch_taken_0x4b58b8 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x4b58b8) {
            ctx->pc = 0x4B58E8u;
            goto label_4b58e8;
        }
    }
    ctx->pc = 0x4B58C0u;
    // 0x4b58c0: 0xc12d0b4  jal         func_4B42D0
    ctx->pc = 0x4B58C0u;
    SET_GPR_U32(ctx, 31, 0x4B58C8u);
    ctx->pc = 0x4B58C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B58C0u;
    // 0x4b58c4: 0x8fa401a8  lw          $a0, 0x1A8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B42D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B42D0u, 0x4B58C0u, 0x4B58C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B58C8u;
label_4b58c8:
    // 0x4b58c8: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x4b58c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
    // 0x4b58cc: 0x8fa401ac  lw          $a0, 0x1AC($sp)
    ctx->pc = 0x4b58ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x4b58d0: 0x8fa6019c  lw          $a2, 0x19C($sp)
    ctx->pc = 0x4b58d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x4b58d4: 0xc12d026  jal         func_4B4098
    ctx->pc = 0x4B58D4u;
    SET_GPR_U32(ctx, 31, 0x4B58DCu);
    ctx->pc = 0x4B58D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B58D4u;
    // 0x4b58d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4098u, 0x4B58D4u, 0x4B58DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B58DCu;
label_4b58dc:
    // 0x4b58dc: 0x8fa5019c  lw          $a1, 0x19C($sp)
    ctx->pc = 0x4b58dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x4b58e0: 0xafa501ac  sw          $a1, 0x1AC($sp)
    ctx->pc = 0x4b58e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 5));
    // 0x4b58e4: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x4b58e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
label_4b58e8:
    // 0x4b58e8: 0x1a200004  blez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B58E8u;
    {
        const bool branch_taken_0x4b58e8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x4B58ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B58E8u;
        // 0x4b58ec: 0x8fa4019c  lw          $a0, 0x19C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b58e8) {
            ctx->pc = 0x4B58FCu;
            goto label_4b58fc;
        }
    }
    ctx->pc = 0x4B58F0u;
    // 0x4b58f0: 0xc12d0d2  jal         func_4B4348
    ctx->pc = 0x4B58F0u;
    SET_GPR_U32(ctx, 31, 0x4B58F8u);
    ctx->pc = 0x4B58F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B58F0u;
    // 0x4b58f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4348u, 0x4B58F0u, 0x4B58F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B58F8u;
label_4b58f8:
    // 0x4b58f8: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x4b58f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
label_4b58fc:
    // 0x4b58fc: 0x1ac00004  blez        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B58FCu;
    {
        const bool branch_taken_0x4b58fc = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x4B5900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B58FCu;
        // 0x4b5900: 0x8fa401a0  lw          $a0, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b58fc) {
            ctx->pc = 0x4B5910u;
            goto label_4b5910;
        }
    }
    ctx->pc = 0x4B5904u;
    // 0x4b5904: 0xc12d0b4  jal         func_4B42D0
    ctx->pc = 0x4B5904u;
    SET_GPR_U32(ctx, 31, 0x4B590Cu);
    ctx->pc = 0x4B5908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5904u;
    // 0x4b5908: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B42D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B42D0u, 0x4B5904u, 0x4B590Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B590Cu;
label_4b590c:
    // 0x4b590c: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x4b590cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
label_4b5910:
    // 0x4b5910: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B5910u;
    {
        const bool branch_taken_0x4b5910 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x4B5914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5910u;
        // 0x4b5914: 0x8fa401a0  lw          $a0, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5910) {
            ctx->pc = 0x4B5924u;
            goto label_4b5924;
        }
    }
    ctx->pc = 0x4B5918u;
    // 0x4b5918: 0xc12d0d2  jal         func_4B4348
    ctx->pc = 0x4B5918u;
    SET_GPR_U32(ctx, 31, 0x4B5920u);
    ctx->pc = 0x4B591Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5918u;
    // 0x4b591c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4348u, 0x4B5918u, 0x4B5920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5920u;
label_4b5920:
    // 0x4b5920: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x4b5920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
label_4b5924:
    // 0x4b5924: 0x1a600004  blez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B5924u;
    {
        const bool branch_taken_0x4b5924 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x4B5928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5924u;
        // 0x4b5928: 0x8fa401a8  lw          $a0, 0x1A8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5924) {
            ctx->pc = 0x4B5938u;
            goto label_4b5938;
        }
    }
    ctx->pc = 0x4B592Cu;
    // 0x4b592c: 0xc12d0d2  jal         func_4B4348
    ctx->pc = 0x4B592Cu;
    SET_GPR_U32(ctx, 31, 0x4B5934u);
    ctx->pc = 0x4B5930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B592Cu;
    // 0x4b5930: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4348u, 0x4B592Cu, 0x4B5934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5934u;
label_4b5934:
    // 0x4b5934: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x4b5934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
label_4b5938:
    // 0x4b5938: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x4b5938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x4b593c: 0x8fa5019c  lw          $a1, 0x19C($sp)
    ctx->pc = 0x4b593cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x4b5940: 0xc12d14c  jal         func_4B4530
    ctx->pc = 0x4B5940u;
    SET_GPR_U32(ctx, 31, 0x4B5948u);
    ctx->pc = 0x4B5944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5940u;
    // 0x4b5944: 0x8fa601a0  lw          $a2, 0x1A0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4530u, 0x4B5940u, 0x4B5948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5948u;
label_4b5948:
    // 0x4b5948: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x4b5948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
    // 0x4b594c: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x4b594cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x4b5950: 0x8456000e  lh          $s6, 0xE($v0)
    ctx->pc = 0x4b5950u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x4b5954: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b5954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5958: 0xc12d132  jal         func_4B44C8
    ctx->pc = 0x4B5958u;
    SET_GPR_U32(ctx, 31, 0x4B5960u);
    ctx->pc = 0x4B595Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5958u;
    // 0x4b595c: 0xa480000e  sh          $zero, 0xE($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B44C8u, 0x4B5958u, 0x4B5960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5960u;
label_4b5960:
    // 0x4b5960: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4b5960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5964: 0x4c1fe84  bgez        $a2, . + 4 + (-0x17C << 2)
    ctx->pc = 0x4B5964u;
    {
        const bool branch_taken_0x4b5964 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x4b5964) {
            ctx->pc = 0x4B5378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b5378;
        }
    }
    ctx->pc = 0x4B596Cu;
    // 0x4b596c: 0x16c0000b  bnez        $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x4B596Cu;
    {
        const bool branch_taken_0x4b596c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B5970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B596Cu;
        // 0x4b5970: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b596c) {
            ctx->pc = 0x4B599Cu;
            goto label_4b599c;
        }
    }
    ctx->pc = 0x4B5974u;
    // 0x4b5974: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4b5974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4b5978: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4b5978u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b597c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B597Cu;
    {
        const bool branch_taken_0x4b597c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B5980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B597Cu;
        // 0x4b5980: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b597c) {
            ctx->pc = 0x4B599Cu;
            goto label_4b599c;
        }
    }
    ctx->pc = 0x4B5984u;
    // 0x4b5984: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x4b5984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x4b5988: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4b5988u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4b598c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b598cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b5990: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b5990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b5994: 0x1060fe6e  beqz        $v1, . + 4 + (-0x192 << 2)
    ctx->pc = 0x4B5994u;
    {
        const bool branch_taken_0x4b5994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5994u;
        // 0x4b5998: 0x8fa401b0  lw          $a0, 0x1B0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5994) {
            ctx->pc = 0x4B5350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b5350;
        }
    }
    ctx->pc = 0x4B599Cu;
label_4b599c:
    // 0x4b599c: 0xc12cf0a  jal         func_4B3C28
    ctx->pc = 0x4B599Cu;
    SET_GPR_U32(ctx, 31, 0x4B59A4u);
    ctx->pc = 0x4B59A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B599Cu;
    // 0x4b59a0: 0x8fa4019c  lw          $a0, 0x19C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3C28u, 0x4B599Cu, 0x4B59A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B59A4u;
label_4b59a4:
    // 0x4b59a4: 0xc12cf0a  jal         func_4B3C28
    ctx->pc = 0x4B59A4u;
    SET_GPR_U32(ctx, 31, 0x4B59ACu);
    ctx->pc = 0x4B59A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B59A4u;
    // 0x4b59a8: 0x8fa401a0  lw          $a0, 0x1A0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3C28u, 0x4B59A4u, 0x4B59ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B59ACu;
label_4b59ac:
    // 0x4b59ac: 0xc12cf0a  jal         func_4B3C28
    ctx->pc = 0x4B59ACu;
    SET_GPR_U32(ctx, 31, 0x4B59B4u);
    ctx->pc = 0x4B59B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B59ACu;
    // 0x4b59b0: 0x8fa401a8  lw          $a0, 0x1A8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3C28u, 0x4B59ACu, 0x4B59B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B59B4u;
label_4b59b4:
    // 0x4b59b4: 0xc12cf0a  jal         func_4B3C28
    ctx->pc = 0x4B59B4u;
    SET_GPR_U32(ctx, 31, 0x4B59BCu);
    ctx->pc = 0x4B59B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B59B4u;
    // 0x4b59b8: 0x8fa401a4  lw          $a0, 0x1A4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3C28u, 0x4B59B4u, 0x4B59BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B59BCu;
label_4b59bc:
    // 0x4b59bc: 0xc12cf0a  jal         func_4B3C28
    ctx->pc = 0x4B59BCu;
    SET_GPR_U32(ctx, 31, 0x4B59C4u);
    ctx->pc = 0x4B59C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B59BCu;
    // 0x4b59c0: 0x8fa401b0  lw          $a0, 0x1B0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3C28u, 0x4B59BCu, 0x4B59C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B59C4u;
label_4b59c4:
    // 0x4b59c4: 0xc12cf0a  jal         func_4B3C28
    ctx->pc = 0x4B59C4u;
    SET_GPR_U32(ctx, 31, 0x4B59CCu);
    ctx->pc = 0x4B59C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B59C4u;
    // 0x4b59c8: 0x8fa401ac  lw          $a0, 0x1AC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3C28u, 0x4B59C4u, 0x4B59CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B59CCu;
label_4b59cc:
    // 0x4b59cc: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x4b59ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_4b59d0:
    // 0x4b59d0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4B59D0u;
    {
        const bool branch_taken_0x4b59d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b59d0) {
            ctx->pc = 0x4B59D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B59D0u;
            // 0x4b59d4: 0xac540000  sw          $s4, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B59D8u;
            goto label_4b59d8;
        }
    }
    ctx->pc = 0x4B59D8u;
label_4b59d8:
    // 0x4b59d8: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x4b59d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x4b59dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B59DCu;
    {
        const bool branch_taken_0x4b59dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B59DCu;
        // 0x4b59e0: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b59dc) {
            ctx->pc = 0x4B59F0u;
            goto label_4b59f0;
        }
    }
    ctx->pc = 0x4B59E4u;
    // 0x4b59e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4b59e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b59e8: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4B59E8u;
    SET_GPR_U32(ctx, 31, 0x4B59F0u);
    ctx->pc = 0x4B59ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B59E8u;
    // 0x4b59ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4B59E8u, 0x4B59F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B59F0u;
label_4b59f0:
    // 0x4b59f0: 0xdfbf0280  ld          $ra, 0x280($sp)
    ctx->pc = 0x4b59f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x4b59f4: 0xdfbe0270  ld          $fp, 0x270($sp)
    ctx->pc = 0x4b59f4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x4b59f8: 0xdfb70260  ld          $s7, 0x260($sp)
    ctx->pc = 0x4b59f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x4b59fc: 0xdfb60250  ld          $s6, 0x250($sp)
    ctx->pc = 0x4b59fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x4b5a00: 0xdfb50240  ld          $s5, 0x240($sp)
    ctx->pc = 0x4b5a00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x4b5a04: 0xdfb40230  ld          $s4, 0x230($sp)
    ctx->pc = 0x4b5a04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x4b5a08: 0xdfb30220  ld          $s3, 0x220($sp)
    ctx->pc = 0x4b5a08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x4b5a0c: 0xdfb20210  ld          $s2, 0x210($sp)
    ctx->pc = 0x4b5a0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x4b5a10: 0xdfb10200  ld          $s1, 0x200($sp)
    ctx->pc = 0x4b5a10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x4b5a14: 0xdfb001f0  ld          $s0, 0x1F0($sp)
    ctx->pc = 0x4b5a14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x4b5a18: 0x3e00008  jr          $ra
    ctx->pc = 0x4B5A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B5A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5A18u;
        // 0x4b5a1c: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B5A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B5A20u;
}
