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

// Function: sub_00177E00
// Address: 0x177e00 - 0x177eb8
void sub_00177E00_0x177e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177E00_0x177e00");
#endif

    switch (ctx->pc) {
        case 0x177e00u: goto label_177e00;
        case 0x177e04u: goto label_177e04;
        case 0x177e08u: goto label_177e08;
        case 0x177e0cu: goto label_177e0c;
        case 0x177e10u: goto label_177e10;
        case 0x177e14u: goto label_177e14;
        case 0x177e18u: goto label_177e18;
        case 0x177e1cu: goto label_177e1c;
        case 0x177e20u: goto label_177e20;
        case 0x177e24u: goto label_177e24;
        case 0x177e28u: goto label_177e28;
        case 0x177e2cu: goto label_177e2c;
        case 0x177e30u: goto label_177e30;
        case 0x177e34u: goto label_177e34;
        case 0x177e38u: goto label_177e38;
        case 0x177e3cu: goto label_177e3c;
        case 0x177e40u: goto label_177e40;
        case 0x177e44u: goto label_177e44;
        case 0x177e48u: goto label_177e48;
        case 0x177e4cu: goto label_177e4c;
        case 0x177e50u: goto label_177e50;
        case 0x177e54u: goto label_177e54;
        case 0x177e58u: goto label_177e58;
        case 0x177e5cu: goto label_177e5c;
        case 0x177e60u: goto label_177e60;
        case 0x177e64u: goto label_177e64;
        case 0x177e68u: goto label_177e68;
        case 0x177e6cu: goto label_177e6c;
        case 0x177e70u: goto label_177e70;
        case 0x177e74u: goto label_177e74;
        case 0x177e78u: goto label_177e78;
        case 0x177e7cu: goto label_177e7c;
        case 0x177e80u: goto label_177e80;
        case 0x177e84u: goto label_177e84;
        case 0x177e88u: goto label_177e88;
        case 0x177e8cu: goto label_177e8c;
        case 0x177e90u: goto label_177e90;
        case 0x177e94u: goto label_177e94;
        case 0x177e98u: goto label_177e98;
        case 0x177e9cu: goto label_177e9c;
        case 0x177ea0u: goto label_177ea0;
        case 0x177ea4u: goto label_177ea4;
        case 0x177ea8u: goto label_177ea8;
        case 0x177eacu: goto label_177eac;
        case 0x177eb0u: goto label_177eb0;
        case 0x177eb4u: goto label_177eb4;
        default: break;
    }

    ctx->pc = 0x177e00u;

label_177e00:
    // 0x177e00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x177e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_177e04:
    // 0x177e04: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x177e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_177e08:
    // 0x177e08: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x177e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_177e0c:
    // 0x177e0c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x177e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_177e10:
    // 0x177e10: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x177e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_177e14:
    // 0x177e14: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x177e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_177e18:
    // 0x177e18: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x177e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_177e1c:
    // 0x177e1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_177e20:
    // 0x177e20: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x177e20u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_177e24:
    // 0x177e24: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x177e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_177e28:
    // 0x177e28: 0x3c12006f  lui         $s2, 0x6F
    ctx->pc = 0x177e28u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
label_177e2c:
    // 0x177e2c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x177e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_177e30:
    // 0x177e30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x177e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_177e34:
    // 0x177e34: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x177e34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_177e38:
    // 0x177e38: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x177e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_177e3c:
    // 0x177e3c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x177e3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_177e40:
    // 0x177e40: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x177e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_177e44:
    // 0x177e44: 0x40f809  jalr        $v0
label_177e48:
    if (ctx->pc == 0x177E48u) {
        ctx->pc = 0x177E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E44u;
        // 0x177e48: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177E4Cu;
        goto label_177e4c;
    }
    ctx->pc = 0x177E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x177E4Cu);
        ctx->pc = 0x177E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E44u;
        // 0x177e48: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177E44u, 0x177E4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x177E4Cu;
label_177e4c:
    // 0x177e4c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x177e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_177e50:
    // 0x177e50: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x177e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_177e54:
    // 0x177e54: 0x8e45b9b8  lw          $a1, -0x4648($s2)
    ctx->pc = 0x177e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949304)));
label_177e58:
    // 0x177e58: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x177e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_177e5c:
    // 0x177e5c: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x177e5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_177e60:
    // 0x177e60: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x177e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_177e64:
    // 0x177e64: 0x60f809  jalr        $v1
label_177e68:
    if (ctx->pc == 0x177E68u) {
        ctx->pc = 0x177E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E64u;
        // 0x177e68: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177E6Cu;
        goto label_177e6c;
    }
    ctx->pc = 0x177E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x177E6Cu);
        ctx->pc = 0x177E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E64u;
        // 0x177e68: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177E64u, 0x177E6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x177E6Cu;
label_177e6c:
    // 0x177e6c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x177e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_177e70:
    // 0x177e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_177e74:
    // 0x177e74: 0x240607ef  addiu       $a2, $zero, 0x7EF
    ctx->pc = 0x177e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2031));
label_177e78:
    // 0x177e78: 0xc137b14  jal         func_4DEC50
label_177e7c:
    if (ctx->pc == 0x177E7Cu) {
        ctx->pc = 0x177E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E78u;
        // 0x177e7c: 0x24a51d40  addiu       $a1, $a1, 0x1D40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177E80u;
        goto label_177e80;
    }
    ctx->pc = 0x177E78u;
    SET_GPR_U32(ctx, 31, 0x177E80u);
    ctx->pc = 0x177E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177E78u;
    // 0x177e7c: 0x24a51d40  addiu       $a1, $a1, 0x1D40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DEC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DEC50u, 0x177E78u, 0x177E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177E80u;
label_177e80:
    // 0x177e80: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x177e80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_177e84:
    // 0x177e84: 0x8e45b9b8  lw          $a1, -0x4648($s2)
    ctx->pc = 0x177e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949304)));
label_177e88:
    // 0x177e88: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x177e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_177e8c:
    // 0x177e8c: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x177e8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_177e90:
    // 0x177e90: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x177e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_177e94:
    // 0x177e94: 0x60f809  jalr        $v1
label_177e98:
    if (ctx->pc == 0x177E98u) {
        ctx->pc = 0x177E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E94u;
        // 0x177e98: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177E9Cu;
        goto label_177e9c;
    }
    ctx->pc = 0x177E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x177E9Cu);
        ctx->pc = 0x177E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E94u;
        // 0x177e98: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177E94u, 0x177E9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x177E9Cu;
label_177e9c:
    // 0x177e9c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x177e9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_177ea0:
    // 0x177ea0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x177ea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_177ea4:
    // 0x177ea4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x177ea4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_177ea8:
    // 0x177ea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_177eac:
    // 0x177eac: 0x3e00008  jr          $ra
label_177eb0:
    if (ctx->pc == 0x177EB0u) {
        ctx->pc = 0x177EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177EACu;
        // 0x177eb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177EB4u;
        goto label_177eb4;
    }
    ctx->pc = 0x177EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177EACu;
        // 0x177eb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177EB4u;
label_177eb4:
    // 0x177eb4: 0x0  nop
    ctx->pc = 0x177eb4u;
    // NOP
    ctx->pc = 0x177eb8u;
}
