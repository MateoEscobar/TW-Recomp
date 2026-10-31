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

// Function: sub_00217DD8
// Address: 0x217dd8 - 0x217ec8
void sub_00217DD8_0x217dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217DD8_0x217dd8");
#endif

    switch (ctx->pc) {
        case 0x217dd8u: goto label_217dd8;
        case 0x217ddcu: goto label_217ddc;
        case 0x217de0u: goto label_217de0;
        case 0x217de4u: goto label_217de4;
        case 0x217de8u: goto label_217de8;
        case 0x217decu: goto label_217dec;
        case 0x217df0u: goto label_217df0;
        case 0x217df4u: goto label_217df4;
        case 0x217df8u: goto label_217df8;
        case 0x217dfcu: goto label_217dfc;
        case 0x217e00u: goto label_217e00;
        case 0x217e04u: goto label_217e04;
        case 0x217e08u: goto label_217e08;
        case 0x217e0cu: goto label_217e0c;
        case 0x217e10u: goto label_217e10;
        case 0x217e14u: goto label_217e14;
        case 0x217e18u: goto label_217e18;
        case 0x217e1cu: goto label_217e1c;
        case 0x217e20u: goto label_217e20;
        case 0x217e24u: goto label_217e24;
        case 0x217e28u: goto label_217e28;
        case 0x217e2cu: goto label_217e2c;
        case 0x217e30u: goto label_217e30;
        case 0x217e34u: goto label_217e34;
        case 0x217e38u: goto label_217e38;
        case 0x217e3cu: goto label_217e3c;
        case 0x217e40u: goto label_217e40;
        case 0x217e44u: goto label_217e44;
        case 0x217e48u: goto label_217e48;
        case 0x217e4cu: goto label_217e4c;
        case 0x217e50u: goto label_217e50;
        case 0x217e54u: goto label_217e54;
        case 0x217e58u: goto label_217e58;
        case 0x217e5cu: goto label_217e5c;
        case 0x217e60u: goto label_217e60;
        case 0x217e64u: goto label_217e64;
        case 0x217e68u: goto label_217e68;
        case 0x217e6cu: goto label_217e6c;
        case 0x217e70u: goto label_217e70;
        case 0x217e74u: goto label_217e74;
        case 0x217e78u: goto label_217e78;
        case 0x217e7cu: goto label_217e7c;
        case 0x217e80u: goto label_217e80;
        case 0x217e84u: goto label_217e84;
        case 0x217e88u: goto label_217e88;
        case 0x217e8cu: goto label_217e8c;
        case 0x217e90u: goto label_217e90;
        case 0x217e94u: goto label_217e94;
        case 0x217e98u: goto label_217e98;
        case 0x217e9cu: goto label_217e9c;
        case 0x217ea0u: goto label_217ea0;
        case 0x217ea4u: goto label_217ea4;
        case 0x217ea8u: goto label_217ea8;
        case 0x217eacu: goto label_217eac;
        case 0x217eb0u: goto label_217eb0;
        case 0x217eb4u: goto label_217eb4;
        case 0x217eb8u: goto label_217eb8;
        case 0x217ebcu: goto label_217ebc;
        case 0x217ec0u: goto label_217ec0;
        case 0x217ec4u: goto label_217ec4;
        default: break;
    }

    ctx->pc = 0x217dd8u;

label_217dd8:
    // 0x217dd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x217dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_217ddc:
    // 0x217ddc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x217ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_217de0:
    // 0x217de0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x217de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_217de4:
    // 0x217de4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x217de4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_217de8:
    // 0x217de8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x217de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_217dec:
    // 0x217dec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_217df0:
    // 0x217df0: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x217df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_217df4:
    // 0x217df4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_217df8:
    if (ctx->pc == 0x217DF8u) {
        ctx->pc = 0x217DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217DF4u;
        // 0x217df8: 0xde2200e0  ld          $v0, 0xE0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217DFCu;
        goto label_217dfc;
    }
    ctx->pc = 0x217DF4u;
    {
        const bool branch_taken_0x217df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217df4) {
            ctx->pc = 0x217DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217DF4u;
            // 0x217df8: 0xde2200e0  ld          $v0, 0xE0($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217E04u;
            goto label_217e04;
        }
    }
    ctx->pc = 0x217DFCu;
label_217dfc:
    // 0x217dfc: 0x1000002b  b           . + 4 + (0x2B << 2)
label_217e00:
    if (ctx->pc == 0x217E00u) {
        ctx->pc = 0x217E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217DFCu;
        // 0x217e00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217E04u;
        goto label_217e04;
    }
    ctx->pc = 0x217DFCu;
    {
        const bool branch_taken_0x217dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217DFCu;
        // 0x217e00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217dfc) {
            ctx->pc = 0x217EACu;
            goto label_217eac;
        }
    }
    ctx->pc = 0x217E04u;
label_217e04:
    // 0x217e04: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x217e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_217e08:
    // 0x217e08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_217e0c:
    // 0x217e0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x217e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217e10:
    // 0x217e10: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x217e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_217e14:
    // 0x217e14: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x217e14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217e18:
    // 0x217e18: 0xfe2200e0  sd          $v0, 0xE0($s1)
    ctx->pc = 0x217e18u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
label_217e1c:
    // 0x217e1c: 0xc08c0ca  jal         func_230328
label_217e20:
    if (ctx->pc == 0x217E20u) {
        ctx->pc = 0x217E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217E1Cu;
        // 0x217e20: 0x263003c8  addiu       $s0, $s1, 0x3C8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217E24u;
        goto label_217e24;
    }
    ctx->pc = 0x217E1Cu;
    SET_GPR_U32(ctx, 31, 0x217E24u);
    ctx->pc = 0x217E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217E1Cu;
    // 0x217e20: 0x263003c8  addiu       $s0, $s1, 0x3C8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230328u, 0x217E1Cu, 0x217E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E24u;
label_217e24:
    // 0x217e24: 0xc08c1ba  jal         func_2306E8
label_217e28:
    if (ctx->pc == 0x217E28u) {
        ctx->pc = 0x217E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217E24u;
        // 0x217e28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217E2Cu;
        goto label_217e2c;
    }
    ctx->pc = 0x217E24u;
    SET_GPR_U32(ctx, 31, 0x217E2Cu);
    ctx->pc = 0x217E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217E24u;
    // 0x217e28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2306E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2306E8u, 0x217E24u, 0x217E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E2Cu;
label_217e2c:
    // 0x217e2c: 0x0  nop
    ctx->pc = 0x217e2cu;
    // NOP
label_217e30:
    // 0x217e30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_217e34:
    // 0x217e34: 0xc042f3e  jal         func_10BCF8
label_217e38:
    if (ctx->pc == 0x217E38u) {
        ctx->pc = 0x217E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217E34u;
        // 0x217e38: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217E3Cu;
        goto label_217e3c;
    }
    ctx->pc = 0x217E34u;
    SET_GPR_U32(ctx, 31, 0x217E3Cu);
    ctx->pc = 0x217E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217E34u;
    // 0x217e38: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BCF8u, 0x217E34u, 0x217E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E3Cu;
label_217e3c:
    // 0x217e3c: 0x2e420007  sltiu       $v0, $s2, 0x7
    ctx->pc = 0x217e3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_217e40:
    // 0x217e40: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_217e44:
    if (ctx->pc == 0x217E44u) {
        ctx->pc = 0x217E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217E40u;
        // 0x217e44: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217E48u;
        goto label_217e48;
    }
    ctx->pc = 0x217E40u;
    {
        const bool branch_taken_0x217e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217E40u;
        // 0x217e44: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217e40) {
            ctx->pc = 0x217E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217e30;
        }
    }
    ctx->pc = 0x217E48u;
label_217e48:
    // 0x217e48: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x217e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_217e4c:
    // 0x217e4c: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x217e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_217e50:
    // 0x217e50: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x217e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
label_217e54:
    // 0x217e54: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x217e54u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_217e58:
    // 0x217e58: 0xc05df80  jal         func_177E00
label_217e5c:
    if (ctx->pc == 0x217E5Cu) {
        ctx->pc = 0x217E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217E58u;
        // 0x217e5c: 0x261016c0  addiu       $s0, $s0, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217E60u;
        goto label_217e60;
    }
    ctx->pc = 0x217E58u;
    SET_GPR_U32(ctx, 31, 0x217E60u);
    ctx->pc = 0x217E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217E58u;
    // 0x217e5c: 0x261016c0  addiu       $s0, $s0, 0x16C0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177E00u, 0x217E58u, 0x217E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E60u;
label_217e60:
    // 0x217e60: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x217e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_217e64:
    // 0x217e64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x217e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_217e68:
    // 0x217e68: 0xae2000d8  sw          $zero, 0xD8($s1)
    ctx->pc = 0x217e68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
label_217e6c:
    // 0x217e6c: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x217e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
label_217e70:
    // 0x217e70: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x217e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_217e74:
    // 0x217e74: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x217e74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_217e78:
    // 0x217e78: 0xae2003a0  sw          $zero, 0x3A0($s1)
    ctx->pc = 0x217e78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 928), GPR_U32(ctx, 0));
label_217e7c:
    // 0x217e7c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x217e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_217e80:
    // 0x217e80: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x217e80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_217e84:
    // 0x217e84: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x217e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_217e88:
    // 0x217e88: 0x60f809  jalr        $v1
label_217e8c:
    if (ctx->pc == 0x217E8Cu) {
        ctx->pc = 0x217E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217E88u;
        // 0x217e8c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217E90u;
        goto label_217e90;
    }
    ctx->pc = 0x217E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x217E90u);
        ctx->pc = 0x217E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217E88u;
        // 0x217e8c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217E88u, 0x217E90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x217E90u;
label_217e90:
    // 0x217e90: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x217e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_217e94:
    // 0x217e94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x217e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_217e98:
    // 0x217e98: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x217e98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_217e9c:
    // 0x217e9c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x217e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_217ea0:
    // 0x217ea0: 0x60f809  jalr        $v1
label_217ea4:
    if (ctx->pc == 0x217EA4u) {
        ctx->pc = 0x217EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217EA0u;
        // 0x217ea4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217EA8u;
        goto label_217ea8;
    }
    ctx->pc = 0x217EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x217EA8u);
        ctx->pc = 0x217EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217EA0u;
        // 0x217ea4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217EA0u, 0x217EA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x217EA8u;
label_217ea8:
    // 0x217ea8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217eac:
    // 0x217eac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x217eacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_217eb0:
    // 0x217eb0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x217eb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_217eb4:
    // 0x217eb4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x217eb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_217eb8:
    // 0x217eb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_217ebc:
    // 0x217ebc: 0x3e00008  jr          $ra
label_217ec0:
    if (ctx->pc == 0x217EC0u) {
        ctx->pc = 0x217EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217EBCu;
        // 0x217ec0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217EC4u;
        goto label_217ec4;
    }
    ctx->pc = 0x217EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217EBCu;
        // 0x217ec0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217EC4u;
label_217ec4:
    // 0x217ec4: 0x0  nop
    ctx->pc = 0x217ec4u;
    // NOP
    ctx->pc = 0x217ec8u;
}
