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

// Function: sub_004F0ED0
// Address: 0x4f0ed0 - 0x4f0f90
void sub_004F0ED0_0x4f0ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F0ED0_0x4f0ed0");
#endif

    switch (ctx->pc) {
        case 0x4f0ed0u: goto label_4f0ed0;
        case 0x4f0ed4u: goto label_4f0ed4;
        case 0x4f0ed8u: goto label_4f0ed8;
        case 0x4f0edcu: goto label_4f0edc;
        case 0x4f0ee0u: goto label_4f0ee0;
        case 0x4f0ee4u: goto label_4f0ee4;
        case 0x4f0ee8u: goto label_4f0ee8;
        case 0x4f0eecu: goto label_4f0eec;
        case 0x4f0ef0u: goto label_4f0ef0;
        case 0x4f0ef4u: goto label_4f0ef4;
        case 0x4f0ef8u: goto label_4f0ef8;
        case 0x4f0efcu: goto label_4f0efc;
        case 0x4f0f00u: goto label_4f0f00;
        case 0x4f0f04u: goto label_4f0f04;
        case 0x4f0f08u: goto label_4f0f08;
        case 0x4f0f0cu: goto label_4f0f0c;
        case 0x4f0f10u: goto label_4f0f10;
        case 0x4f0f14u: goto label_4f0f14;
        case 0x4f0f18u: goto label_4f0f18;
        case 0x4f0f1cu: goto label_4f0f1c;
        case 0x4f0f20u: goto label_4f0f20;
        case 0x4f0f24u: goto label_4f0f24;
        case 0x4f0f28u: goto label_4f0f28;
        case 0x4f0f2cu: goto label_4f0f2c;
        case 0x4f0f30u: goto label_4f0f30;
        case 0x4f0f34u: goto label_4f0f34;
        case 0x4f0f38u: goto label_4f0f38;
        case 0x4f0f3cu: goto label_4f0f3c;
        case 0x4f0f40u: goto label_4f0f40;
        case 0x4f0f44u: goto label_4f0f44;
        case 0x4f0f48u: goto label_4f0f48;
        case 0x4f0f4cu: goto label_4f0f4c;
        case 0x4f0f50u: goto label_4f0f50;
        case 0x4f0f54u: goto label_4f0f54;
        case 0x4f0f58u: goto label_4f0f58;
        case 0x4f0f5cu: goto label_4f0f5c;
        case 0x4f0f60u: goto label_4f0f60;
        case 0x4f0f64u: goto label_4f0f64;
        case 0x4f0f68u: goto label_4f0f68;
        case 0x4f0f6cu: goto label_4f0f6c;
        case 0x4f0f70u: goto label_4f0f70;
        case 0x4f0f74u: goto label_4f0f74;
        case 0x4f0f78u: goto label_4f0f78;
        case 0x4f0f7cu: goto label_4f0f7c;
        case 0x4f0f80u: goto label_4f0f80;
        case 0x4f0f84u: goto label_4f0f84;
        case 0x4f0f88u: goto label_4f0f88;
        case 0x4f0f8cu: goto label_4f0f8c;
        default: break;
    }

    ctx->pc = 0x4f0ed0u;

label_4f0ed0:
    // 0x4f0ed0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4f0ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4f0ed4:
    // 0x4f0ed4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4f0ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4f0ed8:
    // 0x4f0ed8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4f0ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4f0edc:
    // 0x4f0edc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f0edcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f0ee0:
    // 0x4f0ee0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4f0ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4f0ee4:
    // 0x4f0ee4: 0x26300048  addiu       $s0, $s1, 0x48
    ctx->pc = 0x4f0ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
label_4f0ee8:
    // 0x4f0ee8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f0ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f0eec:
    // 0x4f0eec: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4f0eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4f0ef0:
    // 0x4f0ef0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_4f0ef4:
    if (ctx->pc == 0x4F0EF4u) {
        ctx->pc = 0x4F0EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0EF0u;
        // 0x4f0ef4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0EF8u;
        goto label_4f0ef8;
    }
    ctx->pc = 0x4F0EF0u;
    {
        const bool branch_taken_0x4f0ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0EF0u;
        // 0x4f0ef4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0ef0) {
            ctx->pc = 0x4F0F24u;
            goto label_4f0f24;
        }
    }
    ctx->pc = 0x4F0EF8u;
label_4f0ef8:
    // 0x4f0ef8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4f0ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4f0efc:
    // 0x4f0efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f0efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f0f00:
    // 0x4f0f00: 0xc13c38c  jal         func_4F0E30
label_4f0f04:
    if (ctx->pc == 0x4F0F04u) {
        ctx->pc = 0x4F0F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0F00u;
        // 0x4f0f04: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0F08u;
        goto label_4f0f08;
    }
    ctx->pc = 0x4F0F00u;
    SET_GPR_U32(ctx, 31, 0x4F0F08u);
    ctx->pc = 0x4F0F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0F00u;
    // 0x4f0f04: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F0E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F0E30u, 0x4F0F00u, 0x4F0F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0F08u;
label_4f0f08:
    // 0x4f0f08: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4f0f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4f0f0c:
    // 0x4f0f0c: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x4f0f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_4f0f10:
    // 0x4f0f10: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4f0f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4f0f14:
    // 0x4f0f14: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x4f0f14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_4f0f18:
    // 0x4f0f18: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4f0f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4f0f1c:
    // 0x4f0f1c: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x4f0f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
label_4f0f20:
    // 0x4f0f20: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x4f0f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_4f0f24:
    // 0x4f0f24: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x4f0f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4f0f28:
    // 0x4f0f28: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_4f0f2c:
    if (ctx->pc == 0x4F0F2Cu) {
        ctx->pc = 0x4F0F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0F28u;
        // 0x4f0f2c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0F30u;
        goto label_4f0f30;
    }
    ctx->pc = 0x4F0F28u;
    {
        const bool branch_taken_0x4f0f28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0F28u;
        // 0x4f0f2c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0f28) {
            ctx->pc = 0x4F0F58u;
            goto label_4f0f58;
        }
    }
    ctx->pc = 0x4F0F30u;
label_4f0f30:
    // 0x4f0f30: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x4f0f30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
label_4f0f34:
    // 0x4f0f34: 0x8c4327e4  lw          $v1, 0x27E4($v0)
    ctx->pc = 0x4f0f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4f0f38:
    // 0x4f0f38: 0x24c66ea0  addiu       $a2, $a2, 0x6EA0
    ctx->pc = 0x4f0f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28320));
label_4f0f3c:
    // 0x4f0f3c: 0x24070091  addiu       $a3, $zero, 0x91
    ctx->pc = 0x4f0f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
label_4f0f40:
    // 0x4f0f40: 0x8c68000c  lw          $t0, 0xC($v1)
    ctx->pc = 0x4f0f40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4f0f44:
    // 0x4f0f44: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f0f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f0f48:
    // 0x4f0f48: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f0f48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f0f4c:
    // 0x4f0f4c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f0f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f0f50:
    // 0x4f0f50: 0x60f809  jalr        $v1
label_4f0f54:
    if (ctx->pc == 0x4F0F54u) {
        ctx->pc = 0x4F0F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0F50u;
        // 0x4f0f54: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0F58u;
        goto label_4f0f58;
    }
    ctx->pc = 0x4F0F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F0F58u);
        ctx->pc = 0x4F0F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0F50u;
        // 0x4f0f54: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0F50u, 0x4F0F58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F0F58u;
label_4f0f58:
    // 0x4f0f58: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4f0f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4f0f5c:
    // 0x4f0f5c: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x4f0f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_4f0f60:
    // 0x4f0f60: 0x24424298  addiu       $v0, $v0, 0x4298
    ctx->pc = 0x4f0f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17048));
label_4f0f64:
    // 0x4f0f64: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_4f0f68:
    if (ctx->pc == 0x4F0F68u) {
        ctx->pc = 0x4F0F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0F64u;
        // 0x4f0f68: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0F6Cu;
        goto label_4f0f6c;
    }
    ctx->pc = 0x4F0F64u;
    {
        const bool branch_taken_0x4f0f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0F64u;
        // 0x4f0f68: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0f64) {
            ctx->pc = 0x4F0F74u;
            goto label_4f0f74;
        }
    }
    ctx->pc = 0x4F0F6Cu;
label_4f0f6c:
    // 0x4f0f6c: 0xc10b208  jal         func_42C820
label_4f0f70:
    if (ctx->pc == 0x4F0F70u) {
        ctx->pc = 0x4F0F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0F6Cu;
        // 0x4f0f70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0F74u;
        goto label_4f0f74;
    }
    ctx->pc = 0x4F0F6Cu;
    SET_GPR_U32(ctx, 31, 0x4F0F74u);
    ctx->pc = 0x4F0F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0F6Cu;
    // 0x4f0f70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4F0F6Cu, 0x4F0F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0F74u;
label_4f0f74:
    // 0x4f0f74: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4f0f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f0f78:
    // 0x4f0f78: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4f0f78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f0f7c:
    // 0x4f0f7c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4f0f7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f0f80:
    // 0x4f0f80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f0f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f0f84:
    // 0x4f0f84: 0x3e00008  jr          $ra
label_4f0f88:
    if (ctx->pc == 0x4F0F88u) {
        ctx->pc = 0x4F0F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0F84u;
        // 0x4f0f88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0F8Cu;
        goto label_4f0f8c;
    }
    ctx->pc = 0x4F0F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0F84u;
        // 0x4f0f88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F0F8Cu;
label_4f0f8c:
    // 0x4f0f8c: 0x0  nop
    ctx->pc = 0x4f0f8cu;
    // NOP
    ctx->pc = 0x4f0f90u;
}
