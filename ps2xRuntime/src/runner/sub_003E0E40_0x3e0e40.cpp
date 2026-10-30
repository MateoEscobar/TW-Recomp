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

// Function: sub_003E0E40
// Address: 0x3e0e40 - 0x3e0f50
void sub_003E0E40_0x3e0e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0E40_0x3e0e40");
#endif

    switch (ctx->pc) {
        case 0x3e0e40u: goto label_3e0e40;
        case 0x3e0e44u: goto label_3e0e44;
        case 0x3e0e48u: goto label_3e0e48;
        case 0x3e0e4cu: goto label_3e0e4c;
        case 0x3e0e50u: goto label_3e0e50;
        case 0x3e0e54u: goto label_3e0e54;
        case 0x3e0e58u: goto label_3e0e58;
        case 0x3e0e5cu: goto label_3e0e5c;
        case 0x3e0e60u: goto label_3e0e60;
        case 0x3e0e64u: goto label_3e0e64;
        case 0x3e0e68u: goto label_3e0e68;
        case 0x3e0e6cu: goto label_3e0e6c;
        case 0x3e0e70u: goto label_3e0e70;
        case 0x3e0e74u: goto label_3e0e74;
        case 0x3e0e78u: goto label_3e0e78;
        case 0x3e0e7cu: goto label_3e0e7c;
        case 0x3e0e80u: goto label_3e0e80;
        case 0x3e0e84u: goto label_3e0e84;
        case 0x3e0e88u: goto label_3e0e88;
        case 0x3e0e8cu: goto label_3e0e8c;
        case 0x3e0e90u: goto label_3e0e90;
        case 0x3e0e94u: goto label_3e0e94;
        case 0x3e0e98u: goto label_3e0e98;
        case 0x3e0e9cu: goto label_3e0e9c;
        case 0x3e0ea0u: goto label_3e0ea0;
        case 0x3e0ea4u: goto label_3e0ea4;
        case 0x3e0ea8u: goto label_3e0ea8;
        case 0x3e0eacu: goto label_3e0eac;
        case 0x3e0eb0u: goto label_3e0eb0;
        case 0x3e0eb4u: goto label_3e0eb4;
        case 0x3e0eb8u: goto label_3e0eb8;
        case 0x3e0ebcu: goto label_3e0ebc;
        case 0x3e0ec0u: goto label_3e0ec0;
        case 0x3e0ec4u: goto label_3e0ec4;
        case 0x3e0ec8u: goto label_3e0ec8;
        case 0x3e0eccu: goto label_3e0ecc;
        case 0x3e0ed0u: goto label_3e0ed0;
        case 0x3e0ed4u: goto label_3e0ed4;
        case 0x3e0ed8u: goto label_3e0ed8;
        case 0x3e0edcu: goto label_3e0edc;
        case 0x3e0ee0u: goto label_3e0ee0;
        case 0x3e0ee4u: goto label_3e0ee4;
        case 0x3e0ee8u: goto label_3e0ee8;
        case 0x3e0eecu: goto label_3e0eec;
        case 0x3e0ef0u: goto label_3e0ef0;
        case 0x3e0ef4u: goto label_3e0ef4;
        case 0x3e0ef8u: goto label_3e0ef8;
        case 0x3e0efcu: goto label_3e0efc;
        case 0x3e0f00u: goto label_3e0f00;
        case 0x3e0f04u: goto label_3e0f04;
        case 0x3e0f08u: goto label_3e0f08;
        case 0x3e0f0cu: goto label_3e0f0c;
        case 0x3e0f10u: goto label_3e0f10;
        case 0x3e0f14u: goto label_3e0f14;
        case 0x3e0f18u: goto label_3e0f18;
        case 0x3e0f1cu: goto label_3e0f1c;
        case 0x3e0f20u: goto label_3e0f20;
        case 0x3e0f24u: goto label_3e0f24;
        case 0x3e0f28u: goto label_3e0f28;
        case 0x3e0f2cu: goto label_3e0f2c;
        case 0x3e0f30u: goto label_3e0f30;
        case 0x3e0f34u: goto label_3e0f34;
        case 0x3e0f38u: goto label_3e0f38;
        case 0x3e0f3cu: goto label_3e0f3c;
        case 0x3e0f40u: goto label_3e0f40;
        case 0x3e0f44u: goto label_3e0f44;
        case 0x3e0f48u: goto label_3e0f48;
        case 0x3e0f4cu: goto label_3e0f4c;
        default: break;
    }

    ctx->pc = 0x3e0e40u;

label_3e0e40:
    // 0x3e0e40: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x3e0e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
label_3e0e44:
    // 0x3e0e44: 0x7fb00430  sq          $s0, 0x430($sp)
    ctx->pc = 0x3e0e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 16));
label_3e0e48:
    // 0x3e0e48: 0x7fb10420  sq          $s1, 0x420($sp)
    ctx->pc = 0x3e0e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 17));
label_3e0e4c:
    // 0x3e0e4c: 0xffbf0410  sd          $ra, 0x410($sp)
    ctx->pc = 0x3e0e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
label_3e0e50:
    // 0x3e0e50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e0e50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e0e54:
    // 0x3e0e54: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e0e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e0e58:
    // 0x3e0e58: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e0e58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e0e5c:
    // 0x3e0e5c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e0e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e0e60:
    // 0x3e0e60: 0x40f809  jalr        $v0
label_3e0e64:
    if (ctx->pc == 0x3E0E64u) {
        ctx->pc = 0x3E0E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0E60u;
        // 0x3e0e64: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0E68u;
        goto label_3e0e68;
    }
    ctx->pc = 0x3E0E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E0E68u);
        ctx->pc = 0x3E0E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0E60u;
        // 0x3e0e64: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0E60u, 0x3E0E68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E0E68u;
label_3e0e68:
    // 0x3e0e68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e0e68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0e6c:
    // 0x3e0e6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e0e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e0e70:
    // 0x3e0e70: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3e0e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e0e74:
    // 0x3e0e74: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3e0e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3e0e78:
    // 0x3e0e78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e0e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3e0e7c:
    // 0x3e0e7c: 0x0  nop
    ctx->pc = 0x3e0e7cu;
    // NOP
label_3e0e80:
    // 0x3e0e80: 0x0  nop
    ctx->pc = 0x3e0e80u;
    // NOP
label_3e0e84:
    // 0x3e0e84: 0x0  nop
    ctx->pc = 0x3e0e84u;
    // NOP
label_3e0e88:
    // 0x3e0e88: 0x0  nop
    ctx->pc = 0x3e0e88u;
    // NOP
label_3e0e8c:
    // 0x3e0e8c: 0x0  nop
    ctx->pc = 0x3e0e8cu;
    // NOP
label_3e0e90:
    // 0x3e0e90: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3e0e94:
    if (ctx->pc == 0x3E0E94u) {
        ctx->pc = 0x3E0E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0E90u;
        // 0x3e0e94: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0E98u;
        goto label_3e0e98;
    }
    ctx->pc = 0x3E0E90u;
    {
        const bool branch_taken_0x3e0e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E0E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0E90u;
        // 0x3e0e94: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0e90) {
            ctx->pc = 0x3E0E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0e80;
        }
    }
    ctx->pc = 0x3E0E98u;
label_3e0e98:
    // 0x3e0e98: 0xc138ddc  jal         func_4E3770
label_3e0e9c:
    if (ctx->pc == 0x3E0E9Cu) {
        ctx->pc = 0x3E0EA0u;
        goto label_3e0ea0;
    }
    ctx->pc = 0x3E0E98u;
    SET_GPR_U32(ctx, 31, 0x3E0EA0u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3E0E98u, 0x3E0EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0EA0u;
label_3e0ea0:
    // 0x3e0ea0: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3e0ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3e0ea4:
    // 0x3e0ea4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x3e0ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_3e0ea8:
    // 0x3e0ea8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e0ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3e0eac:
    // 0x3e0eac: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_3e0eb0:
    if (ctx->pc == 0x3E0EB0u) {
        ctx->pc = 0x3E0EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0EACu;
        // 0x3e0eb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0EB4u;
        goto label_3e0eb4;
    }
    ctx->pc = 0x3E0EACu;
    {
        const bool branch_taken_0x3e0eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0EACu;
        // 0x3e0eb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0eac) {
            ctx->pc = 0x3E0F38u;
            goto label_3e0f38;
        }
    }
    ctx->pc = 0x3E0EB4u;
label_3e0eb4:
    // 0x3e0eb4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e0eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e0eb8:
    // 0x3e0eb8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_3e0ebc:
    if (ctx->pc == 0x3E0EBCu) {
        ctx->pc = 0x3E0EC0u;
        goto label_3e0ec0;
    }
    ctx->pc = 0x3E0EB8u;
    {
        const bool branch_taken_0x3e0eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0eb8) {
            ctx->pc = 0x3E0EDCu;
            goto label_3e0edc;
        }
    }
    ctx->pc = 0x3E0EC0u;
label_3e0ec0:
    // 0x3e0ec0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3e0ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e0ec4:
    // 0x3e0ec4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3e0ec4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3e0ec8:
    // 0x3e0ec8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3e0ecc:
    if (ctx->pc == 0x3E0ECCu) {
        ctx->pc = 0x3E0ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0EC8u;
        // 0x3e0ecc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0ED0u;
        goto label_3e0ed0;
    }
    ctx->pc = 0x3E0EC8u;
    {
        const bool branch_taken_0x3e0ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0EC8u;
        // 0x3e0ecc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0ec8) {
            ctx->pc = 0x3E0F0Cu;
            goto label_3e0f0c;
        }
    }
    ctx->pc = 0x3E0ED0u;
label_3e0ed0:
    // 0x3e0ed0: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x3e0ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
label_3e0ed4:
    // 0x3e0ed4: 0x1000000a  b           . + 4 + (0xA << 2)
label_3e0ed8:
    if (ctx->pc == 0x3E0ED8u) {
        ctx->pc = 0x3E0ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0ED4u;
        // 0x3e0ed8: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0EDCu;
        goto label_3e0edc;
    }
    ctx->pc = 0x3E0ED4u;
    {
        const bool branch_taken_0x3e0ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0ED4u;
        // 0x3e0ed8: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0ed4) {
            ctx->pc = 0x3E0F00u;
            goto label_3e0f00;
        }
    }
    ctx->pc = 0x3E0EDCu;
label_3e0edc:
    // 0x3e0edc: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
label_3e0ee0:
    if (ctx->pc == 0x3E0EE0u) {
        ctx->pc = 0x3E0EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0EDCu;
        // 0x3e0ee0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0EE4u;
        goto label_3e0ee4;
    }
    ctx->pc = 0x3E0EDCu;
    {
        const bool branch_taken_0x3e0edc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e0edc) {
            ctx->pc = 0x3E0EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0EDCu;
            // 0x3e0ee0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0F28u;
            goto label_3e0f28;
        }
    }
    ctx->pc = 0x3E0EE4u;
label_3e0ee4:
    // 0x3e0ee4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3e0ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e0ee8:
    // 0x3e0ee8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e0ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e0eec:
    // 0x3e0eec: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_3e0ef0:
    if (ctx->pc == 0x3E0EF0u) {
        ctx->pc = 0x3E0EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0EECu;
        // 0x3e0ef0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0EF4u;
        goto label_3e0ef4;
    }
    ctx->pc = 0x3E0EECu;
    {
        const bool branch_taken_0x3e0eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E0EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0EECu;
        // 0x3e0ef0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0eec) {
            ctx->pc = 0x3E0F00u;
            goto label_3e0f00;
        }
    }
    ctx->pc = 0x3E0EF4u;
label_3e0ef4:
    // 0x3e0ef4: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_3e0ef8:
    if (ctx->pc == 0x3E0EF8u) {
        ctx->pc = 0x3E0EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0EF4u;
        // 0x3e0ef8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0EFCu;
        goto label_3e0efc;
    }
    ctx->pc = 0x3E0EF4u;
    {
        const bool branch_taken_0x3e0ef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0ef4) {
            ctx->pc = 0x3E0EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0EF4u;
            // 0x3e0ef8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0F08u;
            goto label_3e0f08;
        }
    }
    ctx->pc = 0x3E0EFCu;
label_3e0efc:
    // 0x3e0efc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3e0efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3e0f00:
    // 0x3e0f00: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x3e0f00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
label_3e0f04:
    // 0x3e0f04: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e0f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e0f08:
    // 0x3e0f08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e0f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3e0f0c:
    // 0x3e0f0c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x3e0f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_3e0f10:
    // 0x3e0f10: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3e0f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e0f14:
    // 0x3e0f14: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3e0f14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_3e0f18:
    // 0x3e0f18: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3e0f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3e0f1c:
    // 0x3e0f1c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3e0f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e0f20:
    // 0x3e0f20: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3e0f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3e0f24:
    // 0x3e0f24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e0f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e0f28:
    // 0x3e0f28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3e0f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e0f2c:
    // 0x3e0f2c: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_3e0f30:
    if (ctx->pc == 0x3E0F30u) {
        ctx->pc = 0x3E0F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0F2Cu;
        // 0x3e0f30: 0xae200084  sw          $zero, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0F34u;
        goto label_3e0f34;
    }
    ctx->pc = 0x3E0F2Cu;
    {
        const bool branch_taken_0x3e0f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3e0f2c) {
            ctx->pc = 0x3E0F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0F2Cu;
            // 0x3e0f30: 0xae200084  sw          $zero, 0x84($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0F34u;
            goto label_3e0f34;
        }
    }
    ctx->pc = 0x3E0F34u;
label_3e0f34:
    // 0x3e0f34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e0f34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e0f38:
    // 0x3e0f38: 0x7bb00430  lq          $s0, 0x430($sp)
    ctx->pc = 0x3e0f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3e0f3c:
    // 0x3e0f3c: 0x7bb10420  lq          $s1, 0x420($sp)
    ctx->pc = 0x3e0f3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3e0f40:
    // 0x3e0f40: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x3e0f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_3e0f44:
    // 0x3e0f44: 0x3e00008  jr          $ra
label_3e0f48:
    if (ctx->pc == 0x3E0F48u) {
        ctx->pc = 0x3E0F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0F44u;
        // 0x3e0f48: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0F4Cu;
        goto label_3e0f4c;
    }
    ctx->pc = 0x3E0F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0F44u;
        // 0x3e0f48: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E0F4Cu;
label_3e0f4c:
    // 0x3e0f4c: 0x0  nop
    ctx->pc = 0x3e0f4cu;
    // NOP
    ctx->pc = 0x3e0f50u;
}
