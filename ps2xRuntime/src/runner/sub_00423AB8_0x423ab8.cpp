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

// Function: sub_00423AB8
// Address: 0x423ab8 - 0x423b88
void sub_00423AB8_0x423ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00423AB8_0x423ab8");
#endif

    switch (ctx->pc) {
        case 0x423ab8u: goto label_423ab8;
        case 0x423abcu: goto label_423abc;
        case 0x423ac0u: goto label_423ac0;
        case 0x423ac4u: goto label_423ac4;
        case 0x423ac8u: goto label_423ac8;
        case 0x423accu: goto label_423acc;
        case 0x423ad0u: goto label_423ad0;
        case 0x423ad4u: goto label_423ad4;
        case 0x423ad8u: goto label_423ad8;
        case 0x423adcu: goto label_423adc;
        case 0x423ae0u: goto label_423ae0;
        case 0x423ae4u: goto label_423ae4;
        case 0x423ae8u: goto label_423ae8;
        case 0x423aecu: goto label_423aec;
        case 0x423af0u: goto label_423af0;
        case 0x423af4u: goto label_423af4;
        case 0x423af8u: goto label_423af8;
        case 0x423afcu: goto label_423afc;
        case 0x423b00u: goto label_423b00;
        case 0x423b04u: goto label_423b04;
        case 0x423b08u: goto label_423b08;
        case 0x423b0cu: goto label_423b0c;
        case 0x423b10u: goto label_423b10;
        case 0x423b14u: goto label_423b14;
        case 0x423b18u: goto label_423b18;
        case 0x423b1cu: goto label_423b1c;
        case 0x423b20u: goto label_423b20;
        case 0x423b24u: goto label_423b24;
        case 0x423b28u: goto label_423b28;
        case 0x423b2cu: goto label_423b2c;
        case 0x423b30u: goto label_423b30;
        case 0x423b34u: goto label_423b34;
        case 0x423b38u: goto label_423b38;
        case 0x423b3cu: goto label_423b3c;
        case 0x423b40u: goto label_423b40;
        case 0x423b44u: goto label_423b44;
        case 0x423b48u: goto label_423b48;
        case 0x423b4cu: goto label_423b4c;
        case 0x423b50u: goto label_423b50;
        case 0x423b54u: goto label_423b54;
        case 0x423b58u: goto label_423b58;
        case 0x423b5cu: goto label_423b5c;
        case 0x423b60u: goto label_423b60;
        case 0x423b64u: goto label_423b64;
        case 0x423b68u: goto label_423b68;
        case 0x423b6cu: goto label_423b6c;
        case 0x423b70u: goto label_423b70;
        case 0x423b74u: goto label_423b74;
        case 0x423b78u: goto label_423b78;
        case 0x423b7cu: goto label_423b7c;
        case 0x423b80u: goto label_423b80;
        case 0x423b84u: goto label_423b84;
        default: break;
    }

    ctx->pc = 0x423ab8u;

label_423ab8:
    // 0x423ab8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x423ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_423abc:
    // 0x423abc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x423abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_423ac0:
    // 0x423ac0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x423ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_423ac4:
    // 0x423ac4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x423ac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_423ac8:
    // 0x423ac8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x423ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_423acc:
    // 0x423acc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x423accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_423ad0:
    // 0x423ad0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x423ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_423ad4:
    // 0x423ad4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_423ad8:
    if (ctx->pc == 0x423AD8u) {
        ctx->pc = 0x423AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423AD4u;
        // 0x423ad8: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423ADCu;
        goto label_423adc;
    }
    ctx->pc = 0x423AD4u;
    {
        const bool branch_taken_0x423ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x423AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423AD4u;
        // 0x423ad8: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423ad4) {
            ctx->pc = 0x423AE4u;
            goto label_423ae4;
        }
    }
    ctx->pc = 0x423ADCu;
label_423adc:
    // 0x423adc: 0xc108ee2  jal         func_423B88
label_423ae0:
    if (ctx->pc == 0x423AE0u) {
        ctx->pc = 0x423AE4u;
        goto label_423ae4;
    }
    ctx->pc = 0x423ADCu;
    SET_GPR_U32(ctx, 31, 0x423AE4u);
    ctx->pc = 0x423B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423B88u, 0x423ADCu, 0x423AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x423AE4u;
label_423ae4:
    // 0x423ae4: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x423ae4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_423ae8:
    // 0x423ae8: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x423ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_423aec:
    // 0x423aec: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x423aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_423af0:
    // 0x423af0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x423af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_423af4:
    // 0x423af4: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x423af4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_423af8:
    // 0x423af8: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x423af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_423afc:
    // 0x423afc: 0x60f809  jalr        $v1
label_423b00:
    if (ctx->pc == 0x423B00u) {
        ctx->pc = 0x423B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423AFCu;
        // 0x423b00: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423B04u;
        goto label_423b04;
    }
    ctx->pc = 0x423AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x423B04u);
        ctx->pc = 0x423B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423AFCu;
        // 0x423b00: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423AFCu, 0x423B04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x423B04u;
label_423b04:
    // 0x423b04: 0x8e0c27e4  lw          $t4, 0x27E4($s0)
    ctx->pc = 0x423b04u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_423b08:
    // 0x423b08: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x423b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_423b0c:
    // 0x423b0c: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x423b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_423b10:
    // 0x423b10: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x423b10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_423b14:
    // 0x423b14: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x423b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_423b18:
    // 0x423b18: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x423b18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
label_423b1c:
    // 0x423b1c: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x423b1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_423b20:
    // 0x423b20: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x423b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_423b24:
    // 0x423b24: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x423b24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_423b28:
    // 0x423b28: 0x24090037  addiu       $t1, $zero, 0x37
    ctx->pc = 0x423b28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_423b2c:
    // 0x423b2c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x423b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_423b30:
    // 0x423b30: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x423b30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_423b34:
    // 0x423b34: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x423b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
label_423b38:
    // 0x423b38: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x423b38u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_423b3c:
    // 0x423b3c: 0x3012  mflo        $a2
    ctx->pc = 0x423b3cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_423b40:
    // 0x423b40: 0x2508bb20  addiu       $t0, $t0, -0x44E0
    ctx->pc = 0x423b40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949664));
label_423b44:
    // 0x423b44: 0x40f809  jalr        $v0
label_423b48:
    if (ctx->pc == 0x423B48u) {
        ctx->pc = 0x423B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423B44u;
        // 0x423b48: 0x24a5bb10  addiu       $a1, $a1, -0x44F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423B4Cu;
        goto label_423b4c;
    }
    ctx->pc = 0x423B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x423B4Cu);
        ctx->pc = 0x423B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423B44u;
        // 0x423b48: 0x24a5bb10  addiu       $a1, $a1, -0x44F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949648));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423B44u, 0x423B4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x423B4Cu;
label_423b4c:
    // 0x423b4c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x423b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_423b50:
    // 0x423b50: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x423b50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_423b54:
    // 0x423b54: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x423b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_423b58:
    // 0x423b58: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x423b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_423b5c:
    // 0x423b5c: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x423b5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_423b60:
    // 0x423b60: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x423b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_423b64:
    // 0x423b64: 0x60f809  jalr        $v1
label_423b68:
    if (ctx->pc == 0x423B68u) {
        ctx->pc = 0x423B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423B64u;
        // 0x423b68: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423B6Cu;
        goto label_423b6c;
    }
    ctx->pc = 0x423B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x423B6Cu);
        ctx->pc = 0x423B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423B64u;
        // 0x423b68: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423B64u, 0x423B6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x423B6Cu;
label_423b6c:
    // 0x423b6c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x423b6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_423b70:
    // 0x423b70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x423b70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_423b74:
    // 0x423b74: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x423b74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_423b78:
    // 0x423b78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x423b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_423b7c:
    // 0x423b7c: 0x3e00008  jr          $ra
label_423b80:
    if (ctx->pc == 0x423B80u) {
        ctx->pc = 0x423B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423B7Cu;
        // 0x423b80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x423B84u;
        goto label_423b84;
    }
    ctx->pc = 0x423B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x423B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423B7Cu;
        // 0x423b80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x423B84u;
label_423b84:
    // 0x423b84: 0x0  nop
    ctx->pc = 0x423b84u;
    // NOP
    ctx->pc = 0x423b88u;
}
