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

// Function: sub_00174E70
// Address: 0x174e70 - 0x174f40
void sub_00174E70_0x174e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174E70_0x174e70");
#endif

    switch (ctx->pc) {
        case 0x174e94u: goto label_174e94;
        case 0x174eccu: goto label_174ecc;
        case 0x174ef4u: goto label_174ef4;
        case 0x174f04u: goto label_174f04;
        case 0x174f18u: goto label_174f18;
        default: break;
    }

    ctx->pc = 0x174e70u;

    // 0x174e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x174e74: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x174e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x174e78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x174e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x174e7c: 0x24428ad0  addiu       $v0, $v0, -0x7530
    ctx->pc = 0x174e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937296));
    // 0x174e80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174e88: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x174e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x174e8c: 0xc05fd94  jal         func_17F650
    ctx->pc = 0x174E8Cu;
    SET_GPR_U32(ctx, 31, 0x174E94u);
    ctx->pc = 0x174E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174E8Cu;
    // 0x174e90: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F650u, 0x174E8Cu, 0x174E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174E94u;
label_174e94:
    // 0x174e94: 0xae0002a8  sw          $zero, 0x2A8($s0)
    ctx->pc = 0x174e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 0));
    // 0x174e98: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x174e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x174e9c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x174e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x174ea0: 0x24428a50  addiu       $v0, $v0, -0x75B0
    ctx->pc = 0x174ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937168));
    // 0x174ea4: 0xc60c02a8  lwc1        $f12, 0x2A8($s0)
    ctx->pc = 0x174ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x174ea8: 0x24638a78  addiu       $v1, $v1, -0x7588
    ctx->pc = 0x174ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937208));
    // 0x174eac: 0xa60002ac  sh          $zero, 0x2AC($s0)
    ctx->pc = 0x174eacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 684), (uint16_t)GPR_U32(ctx, 0));
    // 0x174eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x174eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174eb4: 0xa60002ae  sh          $zero, 0x2AE($s0)
    ctx->pc = 0x174eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 686), (uint16_t)GPR_U32(ctx, 0));
    // 0x174eb8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x174eb8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x174ebc: 0xae0002b8  sw          $zero, 0x2B8($s0)
    ctx->pc = 0x174ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
    // 0x174ec0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x174ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x174ec4: 0xc05d716  jal         func_175C58
    ctx->pc = 0x174EC4u;
    SET_GPR_U32(ctx, 31, 0x174ECCu);
    ctx->pc = 0x174EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174EC4u;
    // 0x174ec8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175C58u, 0x174EC4u, 0x174ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174ECCu;
label_174ecc:
    // 0x174ecc: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x174eccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x174ed0: 0x260402bc  addiu       $a0, $s0, 0x2BC
    ctx->pc = 0x174ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 700));
    // 0x174ed4: 0x24e71780  addiu       $a3, $a3, 0x1780
    ctx->pc = 0x174ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6016));
    // 0x174ed8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174edc: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x174edcu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x511780u));
    // 0x174ee0: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x174ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x174ee4: 0x7e030050  sq          $v1, 0x50($s0)
    ctx->pc = 0x174ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 3));
    // 0x174ee8: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x174ee8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x511780u));
    // 0x174eec: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x174EECu;
    SET_GPR_U32(ctx, 31, 0x174EF4u);
    ctx->pc = 0x174EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174EECu;
    // 0x174ef0: 0x7e020060  sq          $v0, 0x60($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x174EECu, 0x174EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174EF4u;
label_174ef4:
    // 0x174ef4: 0x26040304  addiu       $a0, $s0, 0x304
    ctx->pc = 0x174ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 772));
    // 0x174ef8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174efc: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x174EFCu;
    SET_GPR_U32(ctx, 31, 0x174F04u);
    ctx->pc = 0x174F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174EFCu;
    // 0x174f00: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x174EFCu, 0x174F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174F04u;
label_174f04:
    // 0x174f04: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x174f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
    // 0x174f08: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x174f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x174f0c: 0x24638420  addiu       $v1, $v1, -0x7BE0
    ctx->pc = 0x174f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935584));
    // 0x174f10: 0xc0402a0  jal         func_100A80
    ctx->pc = 0x174F10u;
    SET_GPR_U32(ctx, 31, 0x174F18u);
    ctx->pc = 0x174F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174F10u;
    // 0x174f14: 0xae030070  sw          $v1, 0x70($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100A80u, 0x174F10u, 0x174F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174F18u;
label_174f18:
    // 0x174f18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x174f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x174f1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x174f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174f20: 0xa60202b0  sh          $v0, 0x2B0($s0)
    ctx->pc = 0x174f20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 688), (uint16_t)GPR_U32(ctx, 2));
    // 0x174f24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x174f24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174f28: 0xae0302b4  sw          $v1, 0x2B4($s0)
    ctx->pc = 0x174f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 3));
    // 0x174f2c: 0xa60002b2  sh          $zero, 0x2B2($s0)
    ctx->pc = 0x174f2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 690), (uint16_t)GPR_U32(ctx, 0));
    // 0x174f30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x174f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174f34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174f38: 0x3e00008  jr          $ra
    ctx->pc = 0x174F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174F38u;
        // 0x174f3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174F40u;
}
