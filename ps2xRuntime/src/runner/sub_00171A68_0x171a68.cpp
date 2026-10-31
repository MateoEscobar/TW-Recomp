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

// Function: sub_00171A68
// Address: 0x171a68 - 0x171b18
void sub_00171A68_0x171a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171A68_0x171a68");
#endif

    switch (ctx->pc) {
        case 0x171a68u: goto label_171a68;
        case 0x171a6cu: goto label_171a6c;
        case 0x171a70u: goto label_171a70;
        case 0x171a74u: goto label_171a74;
        case 0x171a78u: goto label_171a78;
        case 0x171a7cu: goto label_171a7c;
        case 0x171a80u: goto label_171a80;
        case 0x171a84u: goto label_171a84;
        case 0x171a88u: goto label_171a88;
        case 0x171a8cu: goto label_171a8c;
        case 0x171a90u: goto label_171a90;
        case 0x171a94u: goto label_171a94;
        case 0x171a98u: goto label_171a98;
        case 0x171a9cu: goto label_171a9c;
        case 0x171aa0u: goto label_171aa0;
        case 0x171aa4u: goto label_171aa4;
        case 0x171aa8u: goto label_171aa8;
        case 0x171aacu: goto label_171aac;
        case 0x171ab0u: goto label_171ab0;
        case 0x171ab4u: goto label_171ab4;
        case 0x171ab8u: goto label_171ab8;
        case 0x171abcu: goto label_171abc;
        case 0x171ac0u: goto label_171ac0;
        case 0x171ac4u: goto label_171ac4;
        case 0x171ac8u: goto label_171ac8;
        case 0x171accu: goto label_171acc;
        case 0x171ad0u: goto label_171ad0;
        case 0x171ad4u: goto label_171ad4;
        case 0x171ad8u: goto label_171ad8;
        case 0x171adcu: goto label_171adc;
        case 0x171ae0u: goto label_171ae0;
        case 0x171ae4u: goto label_171ae4;
        case 0x171ae8u: goto label_171ae8;
        case 0x171aecu: goto label_171aec;
        case 0x171af0u: goto label_171af0;
        case 0x171af4u: goto label_171af4;
        case 0x171af8u: goto label_171af8;
        case 0x171afcu: goto label_171afc;
        case 0x171b00u: goto label_171b00;
        case 0x171b04u: goto label_171b04;
        case 0x171b08u: goto label_171b08;
        case 0x171b0cu: goto label_171b0c;
        case 0x171b10u: goto label_171b10;
        case 0x171b14u: goto label_171b14;
        default: break;
    }

    ctx->pc = 0x171a68u;

label_171a68:
    // 0x171a68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x171a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_171a6c:
    // 0x171a6c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x171a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_171a70:
    // 0x171a70: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x171a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_171a74:
    // 0x171a74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x171a74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_171a78:
    // 0x171a78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x171a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_171a7c:
    // 0x171a7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_171a80:
    // 0x171a80: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x171a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_171a84:
    // 0x171a84: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_171a88:
    if (ctx->pc == 0x171A88u) {
        ctx->pc = 0x171A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171A84u;
        // 0x171a88: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171A8Cu;
        goto label_171a8c;
    }
    ctx->pc = 0x171A84u;
    {
        const bool branch_taken_0x171a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171A84u;
        // 0x171a88: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171a84) {
            ctx->pc = 0x171AF0u;
            goto label_171af0;
        }
    }
    ctx->pc = 0x171A8Cu;
label_171a8c:
    // 0x171a8c: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x171a8cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_171a90:
    // 0x171a90: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x171a90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_171a94:
    // 0x171a94: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x171a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_171a98:
    // 0x171a98: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x171a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_171a9c:
    // 0x171a9c: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x171a9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_171aa0:
    // 0x171aa0: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x171aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_171aa4:
    // 0x171aa4: 0x60f809  jalr        $v1
label_171aa8:
    if (ctx->pc == 0x171AA8u) {
        ctx->pc = 0x171AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171AA4u;
        // 0x171aa8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171AACu;
        goto label_171aac;
    }
    ctx->pc = 0x171AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x171AACu);
        ctx->pc = 0x171AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171AA4u;
        // 0x171aa8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171AA4u, 0x171AACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x171AACu;
label_171aac:
    // 0x171aac: 0x8e0827e4  lw          $t0, 0x27E4($s0)
    ctx->pc = 0x171aacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_171ab0:
    // 0x171ab0: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x171ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_171ab4:
    // 0x171ab4: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x171ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_171ab8:
    // 0x171ab8: 0x24c61aa0  addiu       $a2, $a2, 0x1AA0
    ctx->pc = 0x171ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6816));
label_171abc:
    // 0x171abc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x171abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_171ac0:
    // 0x171ac0: 0x240700b8  addiu       $a3, $zero, 0xB8
    ctx->pc = 0x171ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
label_171ac4:
    // 0x171ac4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x171ac4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_171ac8:
    // 0x171ac8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x171ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_171acc:
    // 0x171acc: 0x60f809  jalr        $v1
label_171ad0:
    if (ctx->pc == 0x171AD0u) {
        ctx->pc = 0x171AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171ACCu;
        // 0x171ad0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171AD4u;
        goto label_171ad4;
    }
    ctx->pc = 0x171ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x171AD4u);
        ctx->pc = 0x171AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171ACCu;
        // 0x171ad0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171ACCu, 0x171AD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x171AD4u;
label_171ad4:
    // 0x171ad4: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x171ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_171ad8:
    // 0x171ad8: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x171ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_171adc:
    // 0x171adc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x171adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_171ae0:
    // 0x171ae0: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x171ae0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_171ae4:
    // 0x171ae4: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x171ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_171ae8:
    // 0x171ae8: 0x60f809  jalr        $v1
label_171aec:
    if (ctx->pc == 0x171AECu) {
        ctx->pc = 0x171AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171AE8u;
        // 0x171aec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171AF0u;
        goto label_171af0;
    }
    ctx->pc = 0x171AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x171AF0u);
        ctx->pc = 0x171AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171AE8u;
        // 0x171aec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171AE8u, 0x171AF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x171AF0u;
label_171af0:
    // 0x171af0: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x171af0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_171af4:
    // 0x171af4: 0xc05c694  jal         func_171A50
label_171af8:
    if (ctx->pc == 0x171AF8u) {
        ctx->pc = 0x171AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171AF4u;
        // 0x171af8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171AFCu;
        goto label_171afc;
    }
    ctx->pc = 0x171AF4u;
    SET_GPR_U32(ctx, 31, 0x171AFCu);
    ctx->pc = 0x171AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171AF4u;
    // 0x171af8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171A50u, 0x171AF4u, 0x171AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171AFCu;
label_171afc:
    // 0x171afc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x171afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_171b00:
    // 0x171b00: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x171b00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_171b04:
    // 0x171b04: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x171b04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_171b08:
    // 0x171b08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_171b0c:
    // 0x171b0c: 0x3e00008  jr          $ra
label_171b10:
    if (ctx->pc == 0x171B10u) {
        ctx->pc = 0x171B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171B0Cu;
        // 0x171b10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171B14u;
        goto label_171b14;
    }
    ctx->pc = 0x171B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171B0Cu;
        // 0x171b10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171B14u;
label_171b14:
    // 0x171b14: 0x0  nop
    ctx->pc = 0x171b14u;
    // NOP
    ctx->pc = 0x171b18u;
}
