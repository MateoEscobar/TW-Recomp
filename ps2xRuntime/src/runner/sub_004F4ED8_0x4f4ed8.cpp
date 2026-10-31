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

// Function: sub_004F4ED8
// Address: 0x4f4ed8 - 0x4f4fc0
void sub_004F4ED8_0x4f4ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4ED8_0x4f4ed8");
#endif

    switch (ctx->pc) {
        case 0x4f4ed8u: goto label_4f4ed8;
        case 0x4f4edcu: goto label_4f4edc;
        case 0x4f4ee0u: goto label_4f4ee0;
        case 0x4f4ee4u: goto label_4f4ee4;
        case 0x4f4ee8u: goto label_4f4ee8;
        case 0x4f4eecu: goto label_4f4eec;
        case 0x4f4ef0u: goto label_4f4ef0;
        case 0x4f4ef4u: goto label_4f4ef4;
        case 0x4f4ef8u: goto label_4f4ef8;
        case 0x4f4efcu: goto label_4f4efc;
        case 0x4f4f00u: goto label_4f4f00;
        case 0x4f4f04u: goto label_4f4f04;
        case 0x4f4f08u: goto label_4f4f08;
        case 0x4f4f0cu: goto label_4f4f0c;
        case 0x4f4f10u: goto label_4f4f10;
        case 0x4f4f14u: goto label_4f4f14;
        case 0x4f4f18u: goto label_4f4f18;
        case 0x4f4f1cu: goto label_4f4f1c;
        case 0x4f4f20u: goto label_4f4f20;
        case 0x4f4f24u: goto label_4f4f24;
        case 0x4f4f28u: goto label_4f4f28;
        case 0x4f4f2cu: goto label_4f4f2c;
        case 0x4f4f30u: goto label_4f4f30;
        case 0x4f4f34u: goto label_4f4f34;
        case 0x4f4f38u: goto label_4f4f38;
        case 0x4f4f3cu: goto label_4f4f3c;
        case 0x4f4f40u: goto label_4f4f40;
        case 0x4f4f44u: goto label_4f4f44;
        case 0x4f4f48u: goto label_4f4f48;
        case 0x4f4f4cu: goto label_4f4f4c;
        case 0x4f4f50u: goto label_4f4f50;
        case 0x4f4f54u: goto label_4f4f54;
        case 0x4f4f58u: goto label_4f4f58;
        case 0x4f4f5cu: goto label_4f4f5c;
        case 0x4f4f60u: goto label_4f4f60;
        case 0x4f4f64u: goto label_4f4f64;
        case 0x4f4f68u: goto label_4f4f68;
        case 0x4f4f6cu: goto label_4f4f6c;
        case 0x4f4f70u: goto label_4f4f70;
        case 0x4f4f74u: goto label_4f4f74;
        case 0x4f4f78u: goto label_4f4f78;
        case 0x4f4f7cu: goto label_4f4f7c;
        case 0x4f4f80u: goto label_4f4f80;
        case 0x4f4f84u: goto label_4f4f84;
        case 0x4f4f88u: goto label_4f4f88;
        case 0x4f4f8cu: goto label_4f4f8c;
        case 0x4f4f90u: goto label_4f4f90;
        case 0x4f4f94u: goto label_4f4f94;
        case 0x4f4f98u: goto label_4f4f98;
        case 0x4f4f9cu: goto label_4f4f9c;
        case 0x4f4fa0u: goto label_4f4fa0;
        case 0x4f4fa4u: goto label_4f4fa4;
        case 0x4f4fa8u: goto label_4f4fa8;
        case 0x4f4facu: goto label_4f4fac;
        case 0x4f4fb0u: goto label_4f4fb0;
        case 0x4f4fb4u: goto label_4f4fb4;
        case 0x4f4fb8u: goto label_4f4fb8;
        case 0x4f4fbcu: goto label_4f4fbc;
        default: break;
    }

    ctx->pc = 0x4f4ed8u;

label_4f4ed8:
    // 0x4f4ed8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4f4ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4f4edc:
    // 0x4f4edc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x4f4edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4f4ee0:
    // 0x4f4ee0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4f4ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4f4ee4:
    // 0x4f4ee4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4f4ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4f4ee8:
    // 0x4f4ee8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4f4ee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f4eec:
    // 0x4f4eec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f4eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f4ef0:
    // 0x4f4ef0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4f4ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4f4ef4:
    // 0x4f4ef4: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x4f4ef4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4f4ef8:
    // 0x4f4ef8: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x4f4ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4f4efc:
    // 0x4f4efc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x4f4efcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_4f4f00:
    // 0x4f4f00: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_4f4f04:
    if (ctx->pc == 0x4F4F04u) {
        ctx->pc = 0x4F4F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4F00u;
        // 0x4f4f04: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4F08u;
        goto label_4f4f08;
    }
    ctx->pc = 0x4F4F00u;
    {
        const bool branch_taken_0x4f4f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F4F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4F00u;
        // 0x4f4f04: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4f00) {
            ctx->pc = 0x4F4F2Cu;
            goto label_4f4f2c;
        }
    }
    ctx->pc = 0x4F4F08u;
label_4f4f08:
    // 0x4f4f08: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4f4f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_4f4f0c:
    // 0x4f4f0c: 0x0  nop
    ctx->pc = 0x4f4f0cu;
    // NOP
label_4f4f10:
    // 0x4f4f10: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x4f4f10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_4f4f14:
    // 0x4f4f14: 0x0  nop
    ctx->pc = 0x4f4f14u;
    // NOP
label_4f4f18:
    // 0x4f4f18: 0x0  nop
    ctx->pc = 0x4f4f18u;
    // NOP
label_4f4f1c:
    // 0x4f4f1c: 0x0  nop
    ctx->pc = 0x4f4f1cu;
    // NOP
label_4f4f20:
    // 0x4f4f20: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_4f4f24:
    if (ctx->pc == 0x4F4F24u) {
        ctx->pc = 0x4F4F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4F20u;
        // 0x4f4f24: 0x31840  sll         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4F28u;
        goto label_4f4f28;
    }
    ctx->pc = 0x4F4F20u;
    {
        const bool branch_taken_0x4f4f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f4f20) {
            ctx->pc = 0x4F4F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F4F20u;
            // 0x4f4f24: 0x31840  sll         $v1, $v1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F4F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f4f10;
        }
    }
    ctx->pc = 0x4F4F28u;
label_4f4f28:
    // 0x4f4f28: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f4f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f4f2c:
    // 0x4f4f2c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x4f4f2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4f4f30:
    // 0x4f4f30: 0x8c4cb9c0  lw          $t4, -0x4640($v0)
    ctx->pc = 0x4f4f30u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4f4f34:
    // 0x4f4f34: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4f4f34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_4f4f38:
    // 0x4f4f38: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x4f4f38u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
label_4f4f3c:
    // 0x4f4f3c: 0x3c0a0059  lui         $t2, 0x59
    ctx->pc = 0x4f4f3cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)89 << 16));
label_4f4f40:
    // 0x4f4f40: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4f4f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_4f4f44:
    // 0x4f4f44: 0x24a58a48  addiu       $a1, $a1, -0x75B8
    ctx->pc = 0x4f4f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937160));
label_4f4f48:
    // 0x4f4f48: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x4f4f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_4f4f4c:
    // 0x4f4f4c: 0x25088a50  addiu       $t0, $t0, -0x75B0
    ctx->pc = 0x4f4f4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294937168));
label_4f4f50:
    // 0x4f4f50: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4f4f50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4f4f54:
    // 0x4f4f54: 0x254a8a78  addiu       $t2, $t2, -0x7588
    ctx->pc = 0x4f4f54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294937208));
label_4f4f58:
    // 0x4f4f58: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4f4f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4f4f5c:
    // 0x4f4f5c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4f4f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4f4f60:
    // 0x4f4f60: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4f4f60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4f4f64:
    // 0x4f4f64: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4f4f64u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f4f68:
    // 0x4f4f68: 0x40f809  jalr        $v0
label_4f4f6c:
    if (ctx->pc == 0x4F4F6Cu) {
        ctx->pc = 0x4F4F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4F68u;
        // 0x4f4f6c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4F70u;
        goto label_4f4f70;
    }
    ctx->pc = 0x4F4F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F4F70u);
        ctx->pc = 0x4F4F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4F68u;
        // 0x4f4f6c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4F68u, 0x4F4F70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F4F70u;
label_4f4f70:
    // 0x4f4f70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4f4f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f4f74:
    // 0x4f4f74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4f4f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f4f78:
    // 0x4f4f78: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x4f4f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_4f4f7c:
    // 0x4f4f7c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x4f4f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_4f4f80:
    // 0x4f4f80: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x4f4f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_4f4f84:
    // 0x4f4f84: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4f4f84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4f4f88:
    // 0x4f4f88: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_4f4f8c:
    if (ctx->pc == 0x4F4F8Cu) {
        ctx->pc = 0x4F4F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4F88u;
        // 0x4f4f8c: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4F90u;
        goto label_4f4f90;
    }
    ctx->pc = 0x4F4F88u;
    {
        const bool branch_taken_0x4f4f88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F4F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4F88u;
        // 0x4f4f8c: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4f88) {
            ctx->pc = 0x4F4F98u;
            goto label_4f4f98;
        }
    }
    ctx->pc = 0x4F4F90u;
label_4f4f90:
    // 0x4f4f90: 0xc13d3a6  jal         func_4F4E98
label_4f4f94:
    if (ctx->pc == 0x4F4F94u) {
        ctx->pc = 0x4F4F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4F90u;
        // 0x4f4f94: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4F98u;
        goto label_4f4f98;
    }
    ctx->pc = 0x4F4F90u;
    SET_GPR_U32(ctx, 31, 0x4F4F98u);
    ctx->pc = 0x4F4F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F4F90u;
    // 0x4f4f94: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F4E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F4E98u, 0x4F4F90u, 0x4F4F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F4F98u;
label_4f4f98:
    // 0x4f4f98: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4f4f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4f4f9c:
    // 0x4f4f9c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x4f4f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4f4fa0:
    // 0x4f4fa0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4f4fa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f4fa4:
    // 0x4f4fa4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f4fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4f4fa8:
    // 0x4f4fa8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4f4fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f4fac:
    // 0x4f4fac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4f4facu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f4fb0:
    // 0x4f4fb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f4fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f4fb4:
    // 0x4f4fb4: 0x3e00008  jr          $ra
label_4f4fb8:
    if (ctx->pc == 0x4F4FB8u) {
        ctx->pc = 0x4F4FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4FB4u;
        // 0x4f4fb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4FBCu;
        goto label_4f4fbc;
    }
    ctx->pc = 0x4F4FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4FB4u;
        // 0x4f4fb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F4FBCu;
label_4f4fbc:
    // 0x4f4fbc: 0x0  nop
    ctx->pc = 0x4f4fbcu;
    // NOP
    ctx->pc = 0x4f4fc0u;
}
