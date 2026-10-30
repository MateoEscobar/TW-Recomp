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

// Function: sub_00482F18
// Address: 0x482f18 - 0x483110
void sub_00482F18_0x482f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482F18_0x482f18");
#endif

    switch (ctx->pc) {
        case 0x482f40u: goto label_482f40;
        case 0x482f60u: goto label_482f60;
        case 0x482f80u: goto label_482f80;
        case 0x482fa0u: goto label_482fa0;
        case 0x482fc0u: goto label_482fc0;
        case 0x482fe0u: goto label_482fe0;
        case 0x483000u: goto label_483000;
        case 0x483020u: goto label_483020;
        case 0x483040u: goto label_483040;
        case 0x483060u: goto label_483060;
        case 0x483080u: goto label_483080;
        case 0x4830a0u: goto label_4830a0;
        case 0x4830a8u: goto label_4830a8;
        case 0x4830c8u: goto label_4830c8;
        case 0x4830e8u: goto label_4830e8;
        default: break;
    }

    ctx->pc = 0x482f18u;

    // 0x482f18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x482f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x482f1c: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x482f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x482f20: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x482f20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x482f24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x482f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x482f28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x482f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x482f2c: 0x24c6c008  addiu       $a2, $a2, -0x3FF8
    ctx->pc = 0x482f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950920));
    // 0x482f30: 0x24e7c038  addiu       $a3, $a3, -0x3FC8
    ctx->pc = 0x482f30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950968));
    // 0x482f34: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x482f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x482f38: 0xc120d9a  jal         func_483668
    ctx->pc = 0x482F38u;
    SET_GPR_U32(ctx, 31, 0x482F40u);
    ctx->pc = 0x482F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x482F38u;
    // 0x482f3c: 0x2405040f  addiu       $a1, $zero, 0x40F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483668u, 0x482F38u, 0x482F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482F40u;
label_482f40:
    // 0x482f40: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x482f40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x482f44: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x482f44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x482f48: 0x24c60218  addiu       $a2, $a2, 0x218
    ctx->pc = 0x482f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 536));
    // 0x482f4c: 0x24e70270  addiu       $a3, $a3, 0x270
    ctx->pc = 0x482f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 624));
    // 0x482f50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x482f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482f54: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x482f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x482f58: 0xc120d9a  jal         func_483668
    ctx->pc = 0x482F58u;
    SET_GPR_U32(ctx, 31, 0x482F60u);
    ctx->pc = 0x482F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x482F58u;
    // 0x482f5c: 0x24050401  addiu       $a1, $zero, 0x401 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483668u, 0x482F58u, 0x482F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482F60u;
label_482f60:
    // 0x482f60: 0x3c06004b  lui         $a2, 0x4B
    ctx->pc = 0x482f60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)75 << 16));
    // 0x482f64: 0x3c07004b  lui         $a3, 0x4B
    ctx->pc = 0x482f64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)75 << 16));
    // 0x482f68: 0x24c69498  addiu       $a2, $a2, -0x6B68
    ctx->pc = 0x482f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939800));
    // 0x482f6c: 0x24e794b0  addiu       $a3, $a3, -0x6B50
    ctx->pc = 0x482f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939824));
    // 0x482f70: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x482f70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x482f74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x482f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482f78: 0xc120d9a  jal         func_483668
    ctx->pc = 0x482F78u;
    SET_GPR_U32(ctx, 31, 0x482F80u);
    ctx->pc = 0x482F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x482F78u;
    // 0x482f7c: 0x2405040d  addiu       $a1, $zero, 0x40D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1037));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483668u, 0x482F78u, 0x482F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482F80u;
label_482f80:
    // 0x482f80: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x482f80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x482f84: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x482f84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x482f88: 0x24c6d6f0  addiu       $a2, $a2, -0x2910
    ctx->pc = 0x482f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956784));
    // 0x482f8c: 0x24e7d7a8  addiu       $a3, $a3, -0x2858
    ctx->pc = 0x482f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956968));
    // 0x482f90: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x482f90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x482f94: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x482f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x482f98: 0xc120d9a  jal         func_483668
    ctx->pc = 0x482F98u;
    SET_GPR_U32(ctx, 31, 0x482FA0u);
    ctx->pc = 0x482F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x482F98u;
    // 0x482f9c: 0x24050402  addiu       $a1, $zero, 0x402 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483668u, 0x482F98u, 0x482FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482FA0u;
label_482fa0:
    // 0x482fa0: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x482fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x482fa4: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x482fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x482fa8: 0x24c644b0  addiu       $a2, $a2, 0x44B0
    ctx->pc = 0x482fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17584));
    // 0x482fac: 0x24e74448  addiu       $a3, $a3, 0x4448
    ctx->pc = 0x482facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17480));
    // 0x482fb0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x482fb0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x482fb4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x482fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x482fb8: 0xc120d9a  jal         func_483668
    ctx->pc = 0x482FB8u;
    SET_GPR_U32(ctx, 31, 0x482FC0u);
    ctx->pc = 0x482FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x482FB8u;
    // 0x482fbc: 0x24050403  addiu       $a1, $zero, 0x403 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1027));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483668u, 0x482FB8u, 0x482FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482FC0u;
label_482fc0:
    // 0x482fc0: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x482fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x482fc4: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x482fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x482fc8: 0x24c6f3b8  addiu       $a2, $a2, -0xC48
    ctx->pc = 0x482fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964152));
    // 0x482fcc: 0x24e7f430  addiu       $a3, $a3, -0xBD0
    ctx->pc = 0x482fccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964272));
    // 0x482fd0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x482fd0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x482fd4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x482fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x482fd8: 0xc120d9a  jal         func_483668
    ctx->pc = 0x482FD8u;
    SET_GPR_U32(ctx, 31, 0x482FE0u);
    ctx->pc = 0x482FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x482FD8u;
    // 0x482fdc: 0x24050404  addiu       $a1, $zero, 0x404 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483668u, 0x482FD8u, 0x482FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482FE0u;
label_482fe0:
    // 0x482fe0: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x482fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x482fe4: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x482fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x482fe8: 0x24c62d70  addiu       $a2, $a2, 0x2D70
    ctx->pc = 0x482fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11632));
    // 0x482fec: 0x24e72d08  addiu       $a3, $a3, 0x2D08
    ctx->pc = 0x482fecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11528));
    // 0x482ff0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x482ff0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x482ff4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x482ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x482ff8: 0xc120d9a  jal         func_483668
    ctx->pc = 0x482FF8u;
    SET_GPR_U32(ctx, 31, 0x483000u);
    ctx->pc = 0x482FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x482FF8u;
    // 0x482ffc: 0x24050405  addiu       $a1, $zero, 0x405 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1029));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483668u, 0x482FF8u, 0x483000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483000u;
label_483000:
    // 0x483000: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x483000u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x483004: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x483004u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x483008: 0x24c64638  addiu       $a2, $a2, 0x4638
    ctx->pc = 0x483008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17976));
    // 0x48300c: 0x24e747d8  addiu       $a3, $a3, 0x47D8
    ctx->pc = 0x48300cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18392));
    // 0x483010: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x483010u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x483014: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x483014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    // 0x483018: 0xc120d9a  jal         func_483668
    ctx->pc = 0x483018u;
    SET_GPR_U32(ctx, 31, 0x483020u);
    ctx->pc = 0x48301Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x483018u;
    // 0x48301c: 0x24050406  addiu       $a1, $zero, 0x406 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1030));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483668u, 0x483018u, 0x483020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483020u;
label_483020:
    // 0x483020: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x483020u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x483024: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x483024u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x483028: 0x24c66038  addiu       $a2, $a2, 0x6038
    ctx->pc = 0x483028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24632));
    // 0x48302c: 0x24e76558  addiu       $a3, $a3, 0x6558
    ctx->pc = 0x48302cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25944));
    // 0x483030: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x483030u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x483034: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x483034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x483038: 0xc120d9a  jal         func_483668
    ctx->pc = 0x483038u;
    SET_GPR_U32(ctx, 31, 0x483040u);
    ctx->pc = 0x48303Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x483038u;
    // 0x48303c: 0x24050407  addiu       $a1, $zero, 0x407 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1031));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483668u, 0x483038u, 0x483040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483040u;
label_483040:
    // 0x483040: 0x3c060049  lui         $a2, 0x49
    ctx->pc = 0x483040u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)73 << 16));
    // 0x483044: 0x3c070049  lui         $a3, 0x49
    ctx->pc = 0x483044u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
    // 0x483048: 0x24c68700  addiu       $a2, $a2, -0x7900
    ctx->pc = 0x483048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936320));
    // 0x48304c: 0x24e78568  addiu       $a3, $a3, -0x7A98
    ctx->pc = 0x48304cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935912));
    // 0x483050: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x483050u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x483054: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x483054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x483058: 0xc120d9a  jal         func_483668
    ctx->pc = 0x483058u;
    SET_GPR_U32(ctx, 31, 0x483060u);
    ctx->pc = 0x48305Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x483058u;
    // 0x48305c: 0x24050408  addiu       $a1, $zero, 0x408 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483668u, 0x483058u, 0x483060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483060u;
label_483060:
    // 0x483060: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x483060u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x483064: 0x3c07004a  lui         $a3, 0x4A
    ctx->pc = 0x483064u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)74 << 16));
    // 0x483068: 0x24c65188  addiu       $a2, $a2, 0x5188
    ctx->pc = 0x483068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20872));
    // 0x48306c: 0x24e751b8  addiu       $a3, $a3, 0x51B8
    ctx->pc = 0x48306cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20920));
    // 0x483070: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x483070u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x483074: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x483074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x483078: 0xc120d9a  jal         func_483668
    ctx->pc = 0x483078u;
    SET_GPR_U32(ctx, 31, 0x483080u);
    ctx->pc = 0x48307Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x483078u;
    // 0x48307c: 0x24050409  addiu       $a1, $zero, 0x409 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483668u, 0x483078u, 0x483080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483080u;
label_483080:
    // 0x483080: 0x3c06004b  lui         $a2, 0x4B
    ctx->pc = 0x483080u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)75 << 16));
    // 0x483084: 0x3c07004b  lui         $a3, 0x4B
    ctx->pc = 0x483084u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)75 << 16));
    // 0x483088: 0x24c694c8  addiu       $a2, $a2, -0x6B38
    ctx->pc = 0x483088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939848));
    // 0x48308c: 0x24e79540  addiu       $a3, $a3, -0x6AC0
    ctx->pc = 0x48308cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939968));
    // 0x483090: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x483090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x483094: 0x24050412  addiu       $a1, $zero, 0x412
    ctx->pc = 0x483094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x483098: 0xc120d9a  jal         func_483668
    ctx->pc = 0x483098u;
    SET_GPR_U32(ctx, 31, 0x4830A0u);
    ctx->pc = 0x48309Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x483098u;
    // 0x48309c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483668u, 0x483098u, 0x4830A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4830A0u;
label_4830a0:
    // 0x4830a0: 0xc129478  jal         func_4A51E0
    ctx->pc = 0x4830A0u;
    SET_GPR_U32(ctx, 31, 0x4830A8u);
    ctx->pc = 0x4830A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4830A0u;
    // 0x4830a4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A51E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A51E0u, 0x4830A0u, 0x4830A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4830A8u;
label_4830a8:
    // 0x4830a8: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x4830a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x4830ac: 0x3c07004a  lui         $a3, 0x4A
    ctx->pc = 0x4830acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)74 << 16));
    // 0x4830b0: 0x24c64e00  addiu       $a2, $a2, 0x4E00
    ctx->pc = 0x4830b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19968));
    // 0x4830b4: 0x24e74ec0  addiu       $a3, $a3, 0x4EC0
    ctx->pc = 0x4830b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20160));
    // 0x4830b8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x4830b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x4830bc: 0x2404007c  addiu       $a0, $zero, 0x7C
    ctx->pc = 0x4830bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x4830c0: 0xc120d9a  jal         func_483668
    ctx->pc = 0x4830C0u;
    SET_GPR_U32(ctx, 31, 0x4830C8u);
    ctx->pc = 0x4830C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4830C0u;
    // 0x4830c4: 0x2405040a  addiu       $a1, $zero, 0x40A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1034));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483668u, 0x4830C0u, 0x4830C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4830C8u;
label_4830c8:
    // 0x4830c8: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x4830c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x4830cc: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x4830ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x4830d0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x4830d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x4830d4: 0x24c6e4e8  addiu       $a2, $a2, -0x1B18
    ctx->pc = 0x4830d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960360));
    // 0x4830d8: 0x24e7ea78  addiu       $a3, $a3, -0x1588
    ctx->pc = 0x4830d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961784));
    // 0x4830dc: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x4830dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x4830e0: 0xc120d9a  jal         func_483668
    ctx->pc = 0x4830E0u;
    SET_GPR_U32(ctx, 31, 0x4830E8u);
    ctx->pc = 0x4830E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4830E0u;
    // 0x4830e4: 0x2405040b  addiu       $a1, $zero, 0x40B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483668u, 0x4830E0u, 0x4830E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4830E8u;
label_4830e8:
    // 0x4830e8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x4830e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x4830ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4830ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4830f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4830f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4830f4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4830f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4830f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4830f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4830fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4830FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x483100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4830FCu;
        // 0x483100: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4830FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x483104u;
    // 0x483104: 0x0  nop
    ctx->pc = 0x483104u;
    // NOP
    // 0x483108: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x483108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48310c: 0x0  nop
    ctx->pc = 0x48310cu;
    // NOP
    ctx->pc = 0x483110u;
}
