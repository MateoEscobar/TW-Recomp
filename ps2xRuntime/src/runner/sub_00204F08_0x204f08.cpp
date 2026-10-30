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

// Function: sub_00204F08
// Address: 0x204f08 - 0x205010
void sub_00204F08_0x204f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204F08_0x204f08");
#endif

    switch (ctx->pc) {
        case 0x204f08u: goto label_204f08;
        case 0x204f0cu: goto label_204f0c;
        case 0x204f10u: goto label_204f10;
        case 0x204f14u: goto label_204f14;
        case 0x204f18u: goto label_204f18;
        case 0x204f1cu: goto label_204f1c;
        case 0x204f20u: goto label_204f20;
        case 0x204f24u: goto label_204f24;
        case 0x204f28u: goto label_204f28;
        case 0x204f2cu: goto label_204f2c;
        case 0x204f30u: goto label_204f30;
        case 0x204f34u: goto label_204f34;
        case 0x204f38u: goto label_204f38;
        case 0x204f3cu: goto label_204f3c;
        case 0x204f40u: goto label_204f40;
        case 0x204f44u: goto label_204f44;
        case 0x204f48u: goto label_204f48;
        case 0x204f4cu: goto label_204f4c;
        case 0x204f50u: goto label_204f50;
        case 0x204f54u: goto label_204f54;
        case 0x204f58u: goto label_204f58;
        case 0x204f5cu: goto label_204f5c;
        case 0x204f60u: goto label_204f60;
        case 0x204f64u: goto label_204f64;
        case 0x204f68u: goto label_204f68;
        case 0x204f6cu: goto label_204f6c;
        case 0x204f70u: goto label_204f70;
        case 0x204f74u: goto label_204f74;
        case 0x204f78u: goto label_204f78;
        case 0x204f7cu: goto label_204f7c;
        case 0x204f80u: goto label_204f80;
        case 0x204f84u: goto label_204f84;
        case 0x204f88u: goto label_204f88;
        case 0x204f8cu: goto label_204f8c;
        case 0x204f90u: goto label_204f90;
        case 0x204f94u: goto label_204f94;
        case 0x204f98u: goto label_204f98;
        case 0x204f9cu: goto label_204f9c;
        case 0x204fa0u: goto label_204fa0;
        case 0x204fa4u: goto label_204fa4;
        case 0x204fa8u: goto label_204fa8;
        case 0x204facu: goto label_204fac;
        case 0x204fb0u: goto label_204fb0;
        case 0x204fb4u: goto label_204fb4;
        case 0x204fb8u: goto label_204fb8;
        case 0x204fbcu: goto label_204fbc;
        case 0x204fc0u: goto label_204fc0;
        case 0x204fc4u: goto label_204fc4;
        case 0x204fc8u: goto label_204fc8;
        case 0x204fccu: goto label_204fcc;
        case 0x204fd0u: goto label_204fd0;
        case 0x204fd4u: goto label_204fd4;
        case 0x204fd8u: goto label_204fd8;
        case 0x204fdcu: goto label_204fdc;
        case 0x204fe0u: goto label_204fe0;
        case 0x204fe4u: goto label_204fe4;
        case 0x204fe8u: goto label_204fe8;
        case 0x204fecu: goto label_204fec;
        case 0x204ff0u: goto label_204ff0;
        case 0x204ff4u: goto label_204ff4;
        case 0x204ff8u: goto label_204ff8;
        case 0x204ffcu: goto label_204ffc;
        case 0x205000u: goto label_205000;
        case 0x205004u: goto label_205004;
        case 0x205008u: goto label_205008;
        case 0x20500cu: goto label_20500c;
        default: break;
    }

    ctx->pc = 0x204f08u;

label_204f08:
    // 0x204f08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x204f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_204f0c:
    // 0x204f0c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x204f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_204f10:
    // 0x204f10: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x204f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_204f14:
    // 0x204f14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x204f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_204f18:
    // 0x204f18: 0xc06a38c  jal         func_1A8E30
label_204f1c:
    if (ctx->pc == 0x204F1Cu) {
        ctx->pc = 0x204F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204F18u;
        // 0x204f1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204F20u;
        goto label_204f20;
    }
    ctx->pc = 0x204F18u;
    SET_GPR_U32(ctx, 31, 0x204F20u);
    ctx->pc = 0x204F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204F18u;
    // 0x204f1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x204F18u, 0x204F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F20u;
label_204f20:
    // 0x204f20: 0x26110078  addiu       $s1, $s0, 0x78
    ctx->pc = 0x204f20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_204f24:
    // 0x204f24: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x204f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_204f28:
    // 0x204f28: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x204f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_204f2c:
    // 0x204f2c: 0x24638778  addiu       $v1, $v1, -0x7888
    ctx->pc = 0x204f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936440));
label_204f30:
    // 0x204f30: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x204f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_204f34:
    // 0x204f34: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x204f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_204f38:
    // 0x204f38: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x204f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_204f3c:
    // 0x204f3c: 0x24428510  addiu       $v0, $v0, -0x7AF0
    ctx->pc = 0x204f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935824));
label_204f40:
    // 0x204f40: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x204f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_204f44:
    // 0x204f44: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x204f44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_204f48:
    // 0x204f48: 0x2463cc88  addiu       $v1, $v1, -0x3378
    ctx->pc = 0x204f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954120));
label_204f4c:
    // 0x204f4c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x204f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_204f50:
    // 0x204f50: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x204f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_204f54:
    // 0x204f54: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x204f54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_204f58:
    // 0x204f58: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x204f58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_204f5c:
    // 0x204f5c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x204f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_204f60:
    // 0x204f60: 0x3c080056  lui         $t0, 0x56
    ctx->pc = 0x204f60u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)86 << 16));
label_204f64:
    // 0x204f64: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x204f64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_204f68:
    // 0x204f68: 0x3c0a0056  lui         $t2, 0x56
    ctx->pc = 0x204f68u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)86 << 16));
label_204f6c:
    // 0x204f6c: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x204f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_204f70:
    // 0x204f70: 0x24a586c8  addiu       $a1, $a1, -0x7938
    ctx->pc = 0x204f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936264));
label_204f74:
    // 0x204f74: 0x8c4cb9c0  lw          $t4, -0x4640($v0)
    ctx->pc = 0x204f74u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_204f78:
    // 0x204f78: 0x250886d0  addiu       $t0, $t0, -0x7930
    ctx->pc = 0x204f78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294936272));
label_204f7c:
    // 0x204f7c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x204f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_204f80:
    // 0x204f80: 0x254a86f8  addiu       $t2, $t2, -0x7908
    ctx->pc = 0x204f80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294936312));
label_204f84:
    // 0x204f84: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x204f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_204f88:
    // 0x204f88: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x204f88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_204f8c:
    // 0x204f8c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x204f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_204f90:
    // 0x204f90: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x204f90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_204f94:
    // 0x204f94: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x204f94u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204f98:
    // 0x204f98: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x204f98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_204f9c:
    // 0x204f9c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x204f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_204fa0:
    // 0x204fa0: 0x40f809  jalr        $v0
label_204fa4:
    if (ctx->pc == 0x204FA4u) {
        ctx->pc = 0x204FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204FA0u;
        // 0x204fa4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204FA8u;
        goto label_204fa8;
    }
    ctx->pc = 0x204FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x204FA8u);
        ctx->pc = 0x204FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204FA0u;
        // 0x204fa4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204FA0u, 0x204FA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x204FA8u;
label_204fa8:
    // 0x204fa8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x204fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_204fac:
    // 0x204fac: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x204facu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
label_204fb0:
    // 0x204fb0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x204fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_204fb4:
    // 0x204fb4: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x204fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_204fb8:
    // 0x204fb8: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x204fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
label_204fbc:
    // 0x204fbc: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x204fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_204fc0:
    // 0x204fc0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x204fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_204fc4:
    // 0x204fc4: 0x24e7dbe8  addiu       $a3, $a3, -0x2418
    ctx->pc = 0x204fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958056));
label_204fc8:
    // 0x204fc8: 0x24c6dc10  addiu       $a2, $a2, -0x23F0
    ctx->pc = 0x204fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958096));
label_204fcc:
    // 0x204fcc: 0x24a5dc40  addiu       $a1, $a1, -0x23C0
    ctx->pc = 0x204fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958144));
label_204fd0:
    // 0x204fd0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x204fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_204fd4:
    // 0x204fd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x204fd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_204fd8:
    // 0x204fd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x204fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_204fdc:
    // 0x204fdc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x204fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_204fe0:
    // 0x204fe0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x204fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_204fe4:
    // 0x204fe4: 0xac630008  sw          $v1, 0x8($v1)
    ctx->pc = 0x204fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 3));
label_204fe8:
    // 0x204fe8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x204fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_204fec:
    // 0x204fec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x204fecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_204ff0:
    // 0x204ff0: 0xac84000c  sw          $a0, 0xC($a0)
    ctx->pc = 0x204ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 4));
label_204ff4:
    // 0x204ff4: 0xae07006c  sw          $a3, 0x6C($s0)
    ctx->pc = 0x204ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 7));
label_204ff8:
    // 0x204ff8: 0xae060088  sw          $a2, 0x88($s0)
    ctx->pc = 0x204ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 6));
label_204ffc:
    // 0x204ffc: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x204ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_205000:
    // 0x205000: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x205000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_205004:
    // 0x205004: 0x3e00008  jr          $ra
label_205008:
    if (ctx->pc == 0x205008u) {
        ctx->pc = 0x205008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205004u;
        // 0x205008: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20500Cu;
        goto label_20500c;
    }
    ctx->pc = 0x205004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205004u;
        // 0x205008: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20500Cu;
label_20500c:
    // 0x20500c: 0x0  nop
    ctx->pc = 0x20500cu;
    // NOP
    ctx->pc = 0x205010u;
}
