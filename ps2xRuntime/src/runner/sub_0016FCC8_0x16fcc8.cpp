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

// Function: sub_0016FCC8
// Address: 0x16fcc8 - 0x16fd90
void sub_0016FCC8_0x16fcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FCC8_0x16fcc8");
#endif

    switch (ctx->pc) {
        case 0x16fcc8u: goto label_16fcc8;
        case 0x16fcccu: goto label_16fccc;
        case 0x16fcd0u: goto label_16fcd0;
        case 0x16fcd4u: goto label_16fcd4;
        case 0x16fcd8u: goto label_16fcd8;
        case 0x16fcdcu: goto label_16fcdc;
        case 0x16fce0u: goto label_16fce0;
        case 0x16fce4u: goto label_16fce4;
        case 0x16fce8u: goto label_16fce8;
        case 0x16fcecu: goto label_16fcec;
        case 0x16fcf0u: goto label_16fcf0;
        case 0x16fcf4u: goto label_16fcf4;
        case 0x16fcf8u: goto label_16fcf8;
        case 0x16fcfcu: goto label_16fcfc;
        case 0x16fd00u: goto label_16fd00;
        case 0x16fd04u: goto label_16fd04;
        case 0x16fd08u: goto label_16fd08;
        case 0x16fd0cu: goto label_16fd0c;
        case 0x16fd10u: goto label_16fd10;
        case 0x16fd14u: goto label_16fd14;
        case 0x16fd18u: goto label_16fd18;
        case 0x16fd1cu: goto label_16fd1c;
        case 0x16fd20u: goto label_16fd20;
        case 0x16fd24u: goto label_16fd24;
        case 0x16fd28u: goto label_16fd28;
        case 0x16fd2cu: goto label_16fd2c;
        case 0x16fd30u: goto label_16fd30;
        case 0x16fd34u: goto label_16fd34;
        case 0x16fd38u: goto label_16fd38;
        case 0x16fd3cu: goto label_16fd3c;
        case 0x16fd40u: goto label_16fd40;
        case 0x16fd44u: goto label_16fd44;
        case 0x16fd48u: goto label_16fd48;
        case 0x16fd4cu: goto label_16fd4c;
        case 0x16fd50u: goto label_16fd50;
        case 0x16fd54u: goto label_16fd54;
        case 0x16fd58u: goto label_16fd58;
        case 0x16fd5cu: goto label_16fd5c;
        case 0x16fd60u: goto label_16fd60;
        case 0x16fd64u: goto label_16fd64;
        case 0x16fd68u: goto label_16fd68;
        case 0x16fd6cu: goto label_16fd6c;
        case 0x16fd70u: goto label_16fd70;
        case 0x16fd74u: goto label_16fd74;
        case 0x16fd78u: goto label_16fd78;
        case 0x16fd7cu: goto label_16fd7c;
        case 0x16fd80u: goto label_16fd80;
        case 0x16fd84u: goto label_16fd84;
        case 0x16fd88u: goto label_16fd88;
        case 0x16fd8cu: goto label_16fd8c;
        default: break;
    }

    ctx->pc = 0x16fcc8u;

label_16fcc8:
    // 0x16fcc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16fcc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16fccc:
    // 0x16fccc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16fcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_16fcd0:
    // 0x16fcd0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x16fcd0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_16fcd4:
    // 0x16fcd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16fcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16fcd8:
    // 0x16fcd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16fcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16fcdc:
    // 0x16fcdc: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x16fcdcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_16fce0:
    // 0x16fce0: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x16fce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_16fce4:
    // 0x16fce4: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x16fce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_16fce8:
    // 0x16fce8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x16fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16fcec:
    // 0x16fcec: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x16fcecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_16fcf0:
    // 0x16fcf0: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x16fcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_16fcf4:
    // 0x16fcf4: 0x60f809  jalr        $v1
label_16fcf8:
    if (ctx->pc == 0x16FCF8u) {
        ctx->pc = 0x16FCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FCF4u;
        // 0x16fcf8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FCFCu;
        goto label_16fcfc;
    }
    ctx->pc = 0x16FCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16FCFCu);
        ctx->pc = 0x16FCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FCF4u;
        // 0x16fcf8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FCF4u, 0x16FCFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16FCFCu;
label_16fcfc:
    // 0x16fcfc: 0x8e0b27e4  lw          $t3, 0x27E4($s0)
    ctx->pc = 0x16fcfcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_16fd00:
    // 0x16fd00: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x16fd00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_16fd04:
    // 0x16fd04: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x16fd04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_16fd08:
    // 0x16fd08: 0x24a519e8  addiu       $a1, $a1, 0x19E8
    ctx->pc = 0x16fd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6632));
label_16fd0c:
    // 0x16fd0c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x16fd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_16fd10:
    // 0x16fd10: 0x250819f8  addiu       $t0, $t0, 0x19F8
    ctx->pc = 0x16fd10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6648));
label_16fd14:
    // 0x16fd14: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x16fd14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_16fd18:
    // 0x16fd18: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x16fd18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_16fd1c:
    // 0x16fd1c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x16fd1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_16fd20:
    // 0x16fd20: 0x24090043  addiu       $t1, $zero, 0x43
    ctx->pc = 0x16fd20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_16fd24:
    // 0x16fd24: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x16fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_16fd28:
    // 0x16fd28: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x16fd28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fd2c:
    // 0x16fd2c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x16fd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_16fd30:
    // 0x16fd30: 0x40f809  jalr        $v0
label_16fd34:
    if (ctx->pc == 0x16FD34u) {
        ctx->pc = 0x16FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FD30u;
        // 0x16fd34: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FD38u;
        goto label_16fd38;
    }
    ctx->pc = 0x16FD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16FD38u);
        ctx->pc = 0x16FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FD30u;
        // 0x16fd34: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FD30u, 0x16FD38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16FD38u;
label_16fd38:
    // 0x16fd38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16fd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16fd3c:
    // 0x16fd3c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_16fd40:
    if (ctx->pc == 0x16FD40u) {
        ctx->pc = 0x16FD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FD3Cu;
        // 0x16fd40: 0x8e0627e4  lw          $a2, 0x27E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FD44u;
        goto label_16fd44;
    }
    ctx->pc = 0x16FD3Cu;
    {
        const bool branch_taken_0x16fd3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FD3Cu;
        // 0x16fd40: 0x8e0627e4  lw          $a2, 0x27E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fd3c) {
            ctx->pc = 0x16FD54u;
            goto label_16fd54;
        }
    }
    ctx->pc = 0x16FD44u;
label_16fd44:
    // 0x16fd44: 0xc05c0c0  jal         func_170300
label_16fd48:
    if (ctx->pc == 0x16FD48u) {
        ctx->pc = 0x16FD4Cu;
        goto label_16fd4c;
    }
    ctx->pc = 0x16FD44u;
    SET_GPR_U32(ctx, 31, 0x16FD4Cu);
    ctx->pc = 0x170300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170300u, 0x16FD44u, 0x16FD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FD4Cu;
label_16fd4c:
    // 0x16fd4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16fd4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16fd50:
    // 0x16fd50: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x16fd50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_16fd54:
    // 0x16fd54: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x16fd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_16fd58:
    // 0x16fd58: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x16fd58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_16fd5c:
    // 0x16fd5c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x16fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16fd60:
    // 0x16fd60: 0xac4471a0  sw          $a0, 0x71A0($v0)
    ctx->pc = 0x16fd60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29088), GPR_U32(ctx, 4));
label_16fd64:
    // 0x16fd64: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x16fd64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_16fd68:
    // 0x16fd68: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x16fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_16fd6c:
    // 0x16fd6c: 0x40f809  jalr        $v0
label_16fd70:
    if (ctx->pc == 0x16FD70u) {
        ctx->pc = 0x16FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FD6Cu;
        // 0x16fd70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FD74u;
        goto label_16fd74;
    }
    ctx->pc = 0x16FD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16FD74u);
        ctx->pc = 0x16FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FD6Cu;
        // 0x16fd70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FD6Cu, 0x16FD74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16FD74u;
label_16fd74:
    // 0x16fd74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16fd74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16fd78:
    // 0x16fd78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16fd78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16fd7c:
    // 0x16fd7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16fd7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16fd80:
    // 0x16fd80: 0x3e00008  jr          $ra
label_16fd84:
    if (ctx->pc == 0x16FD84u) {
        ctx->pc = 0x16FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FD80u;
        // 0x16fd84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16FD88u;
        goto label_16fd88;
    }
    ctx->pc = 0x16FD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FD80u;
        // 0x16fd84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FD80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FD88u;
label_16fd88:
    // 0x16fd88: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16fd88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_16fd8c:
    // 0x16fd8c: 0x0  nop
    ctx->pc = 0x16fd8cu;
    // NOP
    ctx->pc = 0x16fd90u;
}
