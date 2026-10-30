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

// Function: sub_001FAF18
// Address: 0x1faf18 - 0x1fb060
void sub_001FAF18_0x1faf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAF18_0x1faf18");
#endif

    switch (ctx->pc) {
        case 0x1faf18u: goto label_1faf18;
        case 0x1faf1cu: goto label_1faf1c;
        case 0x1faf20u: goto label_1faf20;
        case 0x1faf24u: goto label_1faf24;
        case 0x1faf28u: goto label_1faf28;
        case 0x1faf2cu: goto label_1faf2c;
        case 0x1faf30u: goto label_1faf30;
        case 0x1faf34u: goto label_1faf34;
        case 0x1faf38u: goto label_1faf38;
        case 0x1faf3cu: goto label_1faf3c;
        case 0x1faf40u: goto label_1faf40;
        case 0x1faf44u: goto label_1faf44;
        case 0x1faf48u: goto label_1faf48;
        case 0x1faf4cu: goto label_1faf4c;
        case 0x1faf50u: goto label_1faf50;
        case 0x1faf54u: goto label_1faf54;
        case 0x1faf58u: goto label_1faf58;
        case 0x1faf5cu: goto label_1faf5c;
        case 0x1faf60u: goto label_1faf60;
        case 0x1faf64u: goto label_1faf64;
        case 0x1faf68u: goto label_1faf68;
        case 0x1faf6cu: goto label_1faf6c;
        case 0x1faf70u: goto label_1faf70;
        case 0x1faf74u: goto label_1faf74;
        case 0x1faf78u: goto label_1faf78;
        case 0x1faf7cu: goto label_1faf7c;
        case 0x1faf80u: goto label_1faf80;
        case 0x1faf84u: goto label_1faf84;
        case 0x1faf88u: goto label_1faf88;
        case 0x1faf8cu: goto label_1faf8c;
        case 0x1faf90u: goto label_1faf90;
        case 0x1faf94u: goto label_1faf94;
        case 0x1faf98u: goto label_1faf98;
        case 0x1faf9cu: goto label_1faf9c;
        case 0x1fafa0u: goto label_1fafa0;
        case 0x1fafa4u: goto label_1fafa4;
        case 0x1fafa8u: goto label_1fafa8;
        case 0x1fafacu: goto label_1fafac;
        case 0x1fafb0u: goto label_1fafb0;
        case 0x1fafb4u: goto label_1fafb4;
        case 0x1fafb8u: goto label_1fafb8;
        case 0x1fafbcu: goto label_1fafbc;
        case 0x1fafc0u: goto label_1fafc0;
        case 0x1fafc4u: goto label_1fafc4;
        case 0x1fafc8u: goto label_1fafc8;
        case 0x1fafccu: goto label_1fafcc;
        case 0x1fafd0u: goto label_1fafd0;
        case 0x1fafd4u: goto label_1fafd4;
        case 0x1fafd8u: goto label_1fafd8;
        case 0x1fafdcu: goto label_1fafdc;
        case 0x1fafe0u: goto label_1fafe0;
        case 0x1fafe4u: goto label_1fafe4;
        case 0x1fafe8u: goto label_1fafe8;
        case 0x1fafecu: goto label_1fafec;
        case 0x1faff0u: goto label_1faff0;
        case 0x1faff4u: goto label_1faff4;
        case 0x1faff8u: goto label_1faff8;
        case 0x1faffcu: goto label_1faffc;
        case 0x1fb000u: goto label_1fb000;
        case 0x1fb004u: goto label_1fb004;
        case 0x1fb008u: goto label_1fb008;
        case 0x1fb00cu: goto label_1fb00c;
        case 0x1fb010u: goto label_1fb010;
        case 0x1fb014u: goto label_1fb014;
        case 0x1fb018u: goto label_1fb018;
        case 0x1fb01cu: goto label_1fb01c;
        case 0x1fb020u: goto label_1fb020;
        case 0x1fb024u: goto label_1fb024;
        case 0x1fb028u: goto label_1fb028;
        case 0x1fb02cu: goto label_1fb02c;
        case 0x1fb030u: goto label_1fb030;
        case 0x1fb034u: goto label_1fb034;
        case 0x1fb038u: goto label_1fb038;
        case 0x1fb03cu: goto label_1fb03c;
        case 0x1fb040u: goto label_1fb040;
        case 0x1fb044u: goto label_1fb044;
        case 0x1fb048u: goto label_1fb048;
        case 0x1fb04cu: goto label_1fb04c;
        case 0x1fb050u: goto label_1fb050;
        case 0x1fb054u: goto label_1fb054;
        case 0x1fb058u: goto label_1fb058;
        case 0x1fb05cu: goto label_1fb05c;
        default: break;
    }

    ctx->pc = 0x1faf18u;

label_1faf18:
    // 0x1faf18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1faf18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1faf1c:
    // 0x1faf1c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1faf1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1faf20:
    // 0x1faf20: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1faf20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1faf24:
    // 0x1faf24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1faf24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1faf28:
    // 0x1faf28: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1faf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1faf2c:
    // 0x1faf2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1faf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1faf30:
    // 0x1faf30: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1faf30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1faf34:
    // 0x1faf34: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1faf34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1faf38:
    // 0x1faf38: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1faf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1faf3c:
    // 0x1faf3c: 0x40f809  jalr        $v0
label_1faf40:
    if (ctx->pc == 0x1FAF40u) {
        ctx->pc = 0x1FAF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF3Cu;
        // 0x1faf40: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAF44u;
        goto label_1faf44;
    }
    ctx->pc = 0x1FAF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FAF44u);
        ctx->pc = 0x1FAF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF3Cu;
        // 0x1faf40: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAF3Cu, 0x1FAF44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FAF44u;
label_1faf44:
    // 0x1faf44: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_1faf48:
    if (ctx->pc == 0x1FAF48u) {
        ctx->pc = 0x1FAF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF44u;
        // 0x1faf48: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAF4Cu;
        goto label_1faf4c;
    }
    ctx->pc = 0x1FAF44u;
    {
        const bool branch_taken_0x1faf44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF44u;
        // 0x1faf48: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf44) {
            ctx->pc = 0x1FB04Cu;
            goto label_1fb04c;
        }
    }
    ctx->pc = 0x1FAF4Cu;
label_1faf4c:
    // 0x1faf4c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1faf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1faf50:
    // 0x1faf50: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1faf50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1faf54:
    // 0x1faf54: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1faf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1faf58:
    // 0x1faf58: 0x40f809  jalr        $v0
label_1faf5c:
    if (ctx->pc == 0x1FAF5Cu) {
        ctx->pc = 0x1FAF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF58u;
        // 0x1faf5c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAF60u;
        goto label_1faf60;
    }
    ctx->pc = 0x1FAF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FAF60u);
        ctx->pc = 0x1FAF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF58u;
        // 0x1faf5c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAF58u, 0x1FAF60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FAF60u;
label_1faf60:
    // 0x1faf60: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_1faf64:
    if (ctx->pc == 0x1FAF64u) {
        ctx->pc = 0x1FAF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF60u;
        // 0x1faf64: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAF68u;
        goto label_1faf68;
    }
    ctx->pc = 0x1FAF60u;
    {
        const bool branch_taken_0x1faf60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF60u;
        // 0x1faf64: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf60) {
            ctx->pc = 0x1FB04Cu;
            goto label_1fb04c;
        }
    }
    ctx->pc = 0x1FAF68u;
label_1faf68:
    // 0x1faf68: 0xc0579d2  jal         func_15E748
label_1faf6c:
    if (ctx->pc == 0x1FAF6Cu) {
        ctx->pc = 0x1FAF70u;
        goto label_1faf70;
    }
    ctx->pc = 0x1FAF68u;
    SET_GPR_U32(ctx, 31, 0x1FAF70u);
    ctx->pc = 0x15E748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E748u, 0x1FAF68u, 0x1FAF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAF70u;
label_1faf70:
    // 0x1faf70: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x1faf70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_1faf74:
    // 0x1faf74: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_1faf78:
    if (ctx->pc == 0x1FAF78u) {
        ctx->pc = 0x1FAF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF74u;
        // 0x1faf78: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAF7Cu;
        goto label_1faf7c;
    }
    ctx->pc = 0x1FAF74u;
    {
        const bool branch_taken_0x1faf74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF74u;
        // 0x1faf78: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf74) {
            ctx->pc = 0x1FB04Cu;
            goto label_1fb04c;
        }
    }
    ctx->pc = 0x1FAF7Cu;
label_1faf7c:
    // 0x1faf7c: 0x922200e5  lbu         $v0, 0xE5($s1)
    ctx->pc = 0x1faf7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 229)));
label_1faf80:
    // 0x1faf80: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1faf84:
    if (ctx->pc == 0x1FAF84u) {
        ctx->pc = 0x1FAF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF80u;
        // 0x1faf84: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAF88u;
        goto label_1faf88;
    }
    ctx->pc = 0x1FAF80u;
    {
        const bool branch_taken_0x1faf80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF80u;
        // 0x1faf84: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf80) {
            ctx->pc = 0x1FAFC8u;
            goto label_1fafc8;
        }
    }
    ctx->pc = 0x1FAF88u;
label_1faf88:
    // 0x1faf88: 0x26320090  addiu       $s2, $s1, 0x90
    ctx->pc = 0x1faf88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_1faf8c:
    // 0x1faf8c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1faf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1faf90:
    // 0x1faf90: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1faf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1faf94:
    // 0x1faf94: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1faf94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1faf98:
    // 0x1faf98: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1faf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1faf9c:
    // 0x1faf9c: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x1faf9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_1fafa0:
    // 0x1fafa0: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1fafa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1fafa4:
    // 0x1fafa4: 0x40f809  jalr        $v0
label_1fafa8:
    if (ctx->pc == 0x1FAFA8u) {
        ctx->pc = 0x1FAFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAFA4u;
        // 0x1fafa8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAFACu;
        goto label_1fafac;
    }
    ctx->pc = 0x1FAFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FAFACu);
        ctx->pc = 0x1FAFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAFA4u;
        // 0x1fafa8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAFA4u, 0x1FAFACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FAFACu;
label_1fafac:
    // 0x1fafac: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1fafacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fafb0:
    // 0x1fafb0: 0x922200e5  lbu         $v0, 0xE5($s1)
    ctx->pc = 0x1fafb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 229)));
label_1fafb4:
    // 0x1fafb4: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1fafb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1fafb8:
    // 0x1fafb8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1fafb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1fafbc:
    // 0x1fafbc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1fafc0:
    if (ctx->pc == 0x1FAFC0u) {
        ctx->pc = 0x1FAFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAFBCu;
        // 0x1fafc0: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAFC4u;
        goto label_1fafc4;
    }
    ctx->pc = 0x1FAFBCu;
    {
        const bool branch_taken_0x1fafbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAFBCu;
        // 0x1fafc0: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fafbc) {
            ctx->pc = 0x1FAF90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1faf90;
        }
    }
    ctx->pc = 0x1FAFC4u;
label_1fafc4:
    // 0x1fafc4: 0x922200e5  lbu         $v0, 0xE5($s1)
    ctx->pc = 0x1fafc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 229)));
label_1fafc8:
    // 0x1fafc8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fafc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1fafcc:
    // 0x1fafcc: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
label_1fafd0:
    if (ctx->pc == 0x1FAFD0u) {
        ctx->pc = 0x1FAFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAFCCu;
        // 0x1fafd0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAFD4u;
        goto label_1fafd4;
    }
    ctx->pc = 0x1FAFCCu;
    {
        const bool branch_taken_0x1fafcc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1FAFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAFCCu;
        // 0x1fafd0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fafcc) {
            ctx->pc = 0x1FB018u;
            goto label_1fb018;
        }
    }
    ctx->pc = 0x1FAFD4u;
label_1fafd4:
    // 0x1fafd4: 0x263200b8  addiu       $s2, $s1, 0xB8
    ctx->pc = 0x1fafd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
label_1fafd8:
    // 0x1fafd8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1fafd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1fafdc:
    // 0x1fafdc: 0x0  nop
    ctx->pc = 0x1fafdcu;
    // NOP
label_1fafe0:
    // 0x1fafe0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1fafe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1fafe4:
    // 0x1fafe4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1fafe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fafe8:
    // 0x1fafe8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fafe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fafec:
    // 0x1fafec: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x1fafecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_1faff0:
    // 0x1faff0: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1faff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1faff4:
    // 0x1faff4: 0x40f809  jalr        $v0
label_1faff8:
    if (ctx->pc == 0x1FAFF8u) {
        ctx->pc = 0x1FAFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAFF4u;
        // 0x1faff8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAFFCu;
        goto label_1faffc;
    }
    ctx->pc = 0x1FAFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FAFFCu);
        ctx->pc = 0x1FAFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAFF4u;
        // 0x1faff8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAFF4u, 0x1FAFFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FAFFCu;
label_1faffc:
    // 0x1faffc: 0x922300e5  lbu         $v1, 0xE5($s1)
    ctx->pc = 0x1faffcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 229)));
label_1fb000:
    // 0x1fb000: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1fb000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fb004:
    // 0x1fb004: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1fb004u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1fb008:
    // 0x1fb008: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fb008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1fb00c:
    // 0x1fb00c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1fb00cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1fb010:
    // 0x1fb010: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_1fb014:
    if (ctx->pc == 0x1FB014u) {
        ctx->pc = 0x1FB014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB010u;
        // 0x1fb014: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB018u;
        goto label_1fb018;
    }
    ctx->pc = 0x1FB010u;
    {
        const bool branch_taken_0x1fb010 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB010u;
        // 0x1fb014: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb010) {
            ctx->pc = 0x1FAFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fafe0;
        }
    }
    ctx->pc = 0x1FB018u;
label_1fb018:
    // 0x1fb018: 0x8e2500dc  lw          $a1, 0xDC($s1)
    ctx->pc = 0x1fb018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_1fb01c:
    // 0x1fb01c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fb01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fb020:
    // 0x1fb020: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1fb020u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1fb024:
    // 0x1fb024: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1fb024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1fb028:
    // 0x1fb028: 0x60f809  jalr        $v1
label_1fb02c:
    if (ctx->pc == 0x1FB02Cu) {
        ctx->pc = 0x1FB02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB028u;
        // 0x1fb02c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB030u;
        goto label_1fb030;
    }
    ctx->pc = 0x1FB028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FB030u);
        ctx->pc = 0x1FB02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB028u;
        // 0x1fb02c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB028u, 0x1FB030u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FB030u;
label_1fb030:
    // 0x1fb030: 0x8e2500e0  lw          $a1, 0xE0($s1)
    ctx->pc = 0x1fb030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_1fb034:
    // 0x1fb034: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fb034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fb038:
    // 0x1fb038: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1fb038u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1fb03c:
    // 0x1fb03c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1fb03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1fb040:
    // 0x1fb040: 0x60f809  jalr        $v1
label_1fb044:
    if (ctx->pc == 0x1FB044u) {
        ctx->pc = 0x1FB044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB040u;
        // 0x1fb044: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB048u;
        goto label_1fb048;
    }
    ctx->pc = 0x1FB040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FB048u);
        ctx->pc = 0x1FB044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB040u;
        // 0x1fb044: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB040u, 0x1FB048u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FB048u;
label_1fb048:
    // 0x1fb048: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1fb048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fb04c:
    // 0x1fb04c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fb04cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fb050:
    // 0x1fb050: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1fb050u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fb054:
    // 0x1fb054: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fb054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb058:
    // 0x1fb058: 0x3e00008  jr          $ra
label_1fb05c:
    if (ctx->pc == 0x1FB05Cu) {
        ctx->pc = 0x1FB05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB058u;
        // 0x1fb05c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB060u;
        goto label_fallthrough_0x1fb058;
    }
    ctx->pc = 0x1FB058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB058u;
        // 0x1fb05c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fb058:
    ctx->pc = 0x1FB060u;
}
