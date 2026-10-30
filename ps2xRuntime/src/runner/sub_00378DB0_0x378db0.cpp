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

// Function: sub_00378DB0
// Address: 0x378db0 - 0x379128
void sub_00378DB0_0x378db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378DB0_0x378db0");
#endif

    switch (ctx->pc) {
        case 0x378df0u: goto label_378df0;
        case 0x378df8u: goto label_378df8;
        case 0x378e0cu: goto label_378e0c;
        case 0x378e14u: goto label_378e14;
        case 0x378e28u: goto label_378e28;
        case 0x378e30u: goto label_378e30;
        case 0x378e44u: goto label_378e44;
        case 0x378e4cu: goto label_378e4c;
        case 0x378e70u: goto label_378e70;
        case 0x378e88u: goto label_378e88;
        case 0x378e90u: goto label_378e90;
        case 0x378ea8u: goto label_378ea8;
        case 0x378ec0u: goto label_378ec0;
        case 0x378ec8u: goto label_378ec8;
        case 0x378ee0u: goto label_378ee0;
        case 0x378ef8u: goto label_378ef8;
        case 0x378f00u: goto label_378f00;
        case 0x378f18u: goto label_378f18;
        case 0x378f30u: goto label_378f30;
        case 0x378f38u: goto label_378f38;
        case 0x378f50u: goto label_378f50;
        case 0x378f68u: goto label_378f68;
        case 0x378f70u: goto label_378f70;
        case 0x378fa8u: goto label_378fa8;
        case 0x378fb4u: goto label_378fb4;
        case 0x378fccu: goto label_378fcc;
        case 0x378fd8u: goto label_378fd8;
        case 0x378fe0u: goto label_378fe0;
        case 0x378ff0u: goto label_378ff0;
        case 0x379004u: goto label_379004;
        case 0x379018u: goto label_379018;
        case 0x379028u: goto label_379028;
        case 0x37903cu: goto label_37903c;
        case 0x379050u: goto label_379050;
        case 0x379060u: goto label_379060;
        case 0x379074u: goto label_379074;
        case 0x379088u: goto label_379088;
        case 0x379098u: goto label_379098;
        case 0x3790acu: goto label_3790ac;
        case 0x3790c0u: goto label_3790c0;
        case 0x3790d0u: goto label_3790d0;
        case 0x3790e4u: goto label_3790e4;
        default: break;
    }

    ctx->pc = 0x378db0u;

    // 0x378db0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x378db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x378db4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x378db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378db8: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x378db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x378dbc: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x378dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x378dc0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x378dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378dc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x378dc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378dc8: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x378dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x378dcc: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x378dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x378dd0: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x378dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x378dd4: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x378dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x378dd8: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x378dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x378ddc: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x378ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x378de0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x378de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x378de4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x378de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x378de8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x378DE8u;
    SET_GPR_U32(ctx, 31, 0x378DF0u);
    ctx->pc = 0x378DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378DE8u;
    // 0x378dec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x378DE8u, 0x378DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378DF0u;
label_378df0:
    // 0x378df0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x378DF0u;
    SET_GPR_U32(ctx, 31, 0x378DF8u);
    ctx->pc = 0x378DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378DF0u;
    // 0x378df4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x378DF0u, 0x378DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378DF8u;
label_378df8:
    // 0x378df8: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x378df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x378dfc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x378dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378e00: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x378e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x378e04: 0xc102472  jal         func_4091C8
    ctx->pc = 0x378E04u;
    SET_GPR_U32(ctx, 31, 0x378E0Cu);
    ctx->pc = 0x378E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378E04u;
    // 0x378e08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x378E04u, 0x378E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378E0Cu;
label_378e0c:
    // 0x378e0c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x378E0Cu;
    SET_GPR_U32(ctx, 31, 0x378E14u);
    ctx->pc = 0x378E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378E0Cu;
    // 0x378e10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x378E0Cu, 0x378E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378E14u;
label_378e14:
    // 0x378e14: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x378e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x378e18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x378e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378e1c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x378e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x378e20: 0xc102472  jal         func_4091C8
    ctx->pc = 0x378E20u;
    SET_GPR_U32(ctx, 31, 0x378E28u);
    ctx->pc = 0x378E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378E20u;
    // 0x378e24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x378E20u, 0x378E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378E28u;
label_378e28:
    // 0x378e28: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x378E28u;
    SET_GPR_U32(ctx, 31, 0x378E30u);
    ctx->pc = 0x378E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378E28u;
    // 0x378e2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x378E28u, 0x378E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378E30u;
label_378e30:
    // 0x378e30: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x378e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378e34: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x378e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x378e38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x378e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378e3c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x378E3Cu;
    SET_GPR_U32(ctx, 31, 0x378E44u);
    ctx->pc = 0x378E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378E3Cu;
    // 0x378e40: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x378E3Cu, 0x378E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378E44u;
label_378e44:
    // 0x378e44: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x378E44u;
    SET_GPR_U32(ctx, 31, 0x378E4Cu);
    ctx->pc = 0x378E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378E44u;
    // 0x378e48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x378E44u, 0x378E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378E4Cu;
label_378e4c:
    // 0x378e4c: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x378e4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x378e50: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x378e50u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378e54: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x378e54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x378e58: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x378e58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x378e5c: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x378e5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x378e60: 0x27b70050  addiu       $s7, $sp, 0x50
    ctx->pc = 0x378e60u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x378e64: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x378e64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378e68: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x378e68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378e6c: 0x0  nop
    ctx->pc = 0x378e6cu;
    // NOP
label_378e70:
    // 0x378e70: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x378e70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x378e74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x378e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378e78: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x378e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x378e7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x378e7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378e80: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x378E80u;
    SET_GPR_U32(ctx, 31, 0x378E88u);
    ctx->pc = 0x378E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378E80u;
    // 0x378e84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x378E80u, 0x378E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378E88u;
label_378e88:
    // 0x378e88: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x378E88u;
    SET_GPR_U32(ctx, 31, 0x378E90u);
    ctx->pc = 0x378E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378E88u;
    // 0x378e8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x378E88u, 0x378E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378E90u;
label_378e90:
    // 0x378e90: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x378e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x378e94: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x378e94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x378e98: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x378E98u;
    {
        const bool branch_taken_0x378e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x378E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378E98u;
        // 0x378e9c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378e98) {
            ctx->pc = 0x378E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378e70;
        }
    }
    ctx->pc = 0x378EA0u;
    // 0x378ea0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x378ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378ea4: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x378ea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_378ea8:
    // 0x378ea8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x378ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x378eac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x378eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378eb0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x378eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x378eb4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x378eb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378eb8: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x378EB8u;
    SET_GPR_U32(ctx, 31, 0x378EC0u);
    ctx->pc = 0x378EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378EB8u;
    // 0x378ebc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x378EB8u, 0x378EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378EC0u;
label_378ec0:
    // 0x378ec0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x378EC0u;
    SET_GPR_U32(ctx, 31, 0x378EC8u);
    ctx->pc = 0x378EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378EC0u;
    // 0x378ec4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x378EC0u, 0x378EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378EC8u;
label_378ec8:
    // 0x378ec8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x378ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x378ecc: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x378eccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x378ed0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x378ED0u;
    {
        const bool branch_taken_0x378ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x378ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378ED0u;
        // 0x378ed4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378ed0) {
            ctx->pc = 0x378EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378ea8;
        }
    }
    ctx->pc = 0x378ED8u;
    // 0x378ed8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x378ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378edc: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x378edcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_378ee0:
    // 0x378ee0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x378ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x378ee4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x378ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378ee8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x378ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x378eec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x378eecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378ef0: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x378EF0u;
    SET_GPR_U32(ctx, 31, 0x378EF8u);
    ctx->pc = 0x378EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378EF0u;
    // 0x378ef4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x378EF0u, 0x378EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378EF8u;
label_378ef8:
    // 0x378ef8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x378EF8u;
    SET_GPR_U32(ctx, 31, 0x378F00u);
    ctx->pc = 0x378EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378EF8u;
    // 0x378efc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x378EF8u, 0x378F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378F00u;
label_378f00:
    // 0x378f00: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x378f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x378f04: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x378f04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x378f08: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x378F08u;
    {
        const bool branch_taken_0x378f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x378F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378F08u;
        // 0x378f0c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378f08) {
            ctx->pc = 0x378EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378ee0;
        }
    }
    ctx->pc = 0x378F10u;
    // 0x378f10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x378f10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378f14: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x378f14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_378f18:
    // 0x378f18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x378f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x378f1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x378f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378f20: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x378f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x378f24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x378f24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378f28: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x378F28u;
    SET_GPR_U32(ctx, 31, 0x378F30u);
    ctx->pc = 0x378F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378F28u;
    // 0x378f2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x378F28u, 0x378F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378F30u;
label_378f30:
    // 0x378f30: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x378F30u;
    SET_GPR_U32(ctx, 31, 0x378F38u);
    ctx->pc = 0x378F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378F30u;
    // 0x378f34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x378F30u, 0x378F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378F38u;
label_378f38:
    // 0x378f38: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x378f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x378f3c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x378f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x378f40: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x378F40u;
    {
        const bool branch_taken_0x378f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x378F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378F40u;
        // 0x378f44: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378f40) {
            ctx->pc = 0x378F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378f18;
        }
    }
    ctx->pc = 0x378F48u;
    // 0x378f48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x378f48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378f4c: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x378f4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_378f50:
    // 0x378f50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x378f50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x378f54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x378f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378f58: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x378f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x378f5c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x378f5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378f60: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x378F60u;
    SET_GPR_U32(ctx, 31, 0x378F68u);
    ctx->pc = 0x378F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378F60u;
    // 0x378f64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x378F60u, 0x378F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378F68u;
label_378f68:
    // 0x378f68: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x378F68u;
    SET_GPR_U32(ctx, 31, 0x378F70u);
    ctx->pc = 0x378F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378F68u;
    // 0x378f6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x378F68u, 0x378F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378F70u;
label_378f70:
    // 0x378f70: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x378f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x378f74: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x378f74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x378f78: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x378F78u;
    {
        const bool branch_taken_0x378f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x378F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378F78u;
        // 0x378f7c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378f78) {
            ctx->pc = 0x378F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378f50;
        }
    }
    ctx->pc = 0x378F80u;
    // 0x378f80: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x378f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x378f84: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x378f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x378f88: 0x8faa0064  lw          $t2, 0x64($sp)
    ctx->pc = 0x378f88u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x378f8c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x378f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378f90: 0x8fab0068  lw          $t3, 0x68($sp)
    ctx->pc = 0x378f90u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x378f94: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x378f94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378f98: 0xafbe0000  sw          $fp, 0x0($sp)
    ctx->pc = 0x378f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
    // 0x378f9c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x378f9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378fa0: 0xc0e7038  jal         func_39C0E0
    ctx->pc = 0x378FA0u;
    SET_GPR_U32(ctx, 31, 0x378FA8u);
    ctx->pc = 0x378FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378FA0u;
    // 0x378fa4: 0x2e0482d  daddu       $t1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C0E0u, 0x378FA0u, 0x378FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378FA8u;
label_378fa8:
    // 0x378fa8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x378fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378fac: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x378FACu;
    SET_GPR_U32(ctx, 31, 0x378FB4u);
    ctx->pc = 0x378FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378FACu;
    // 0x378fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x378FACu, 0x378FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378FB4u;
label_378fb4:
    // 0x378fb4: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x378FB4u;
    {
        const bool branch_taken_0x378fb4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x378FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378FB4u;
        // 0x378fb8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378fb4) {
            ctx->pc = 0x378FD0u;
            goto label_378fd0;
        }
    }
    ctx->pc = 0x378FBCu;
    // 0x378fbc: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x378fbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x378fc0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x378fc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x378fc4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x378FC4u;
    SET_GPR_U32(ctx, 31, 0x378FCCu);
    ctx->pc = 0x378FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378FC4u;
    // 0x378fc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x378FC4u, 0x378FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378FCCu;
label_378fcc:
    // 0x378fcc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x378fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_378fd0:
    // 0x378fd0: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x378FD0u;
    SET_GPR_U32(ctx, 31, 0x378FD8u);
    ctx->pc = 0x378FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378FD0u;
    // 0x378fd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x378FD0u, 0x378FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378FD8u;
label_378fd8:
    // 0x378fd8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x378fd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378fdc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x378fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_378fe0:
    // 0x378fe0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x378fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x378fe4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x378fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x378fe8: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x378FE8u;
    SET_GPR_U32(ctx, 31, 0x378FF0u);
    ctx->pc = 0x378FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378FE8u;
    // 0x378fec: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x378FE8u, 0x378FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378FF0u;
label_378ff0:
    // 0x378ff0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x378ff0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378ff4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x378ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378ff8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x378ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x378ffc: 0xc102576  jal         func_4095D8
    ctx->pc = 0x378FFCu;
    SET_GPR_U32(ctx, 31, 0x379004u);
    ctx->pc = 0x379000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378FFCu;
    // 0x379000: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x378FFCu, 0x379004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379004u;
label_379004:
    // 0x379004: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x379004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x379008: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x379008u;
    {
        const bool branch_taken_0x379008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379008u;
        // 0x37900c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379008) {
            ctx->pc = 0x378FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378fe0;
        }
    }
    ctx->pc = 0x379010u;
    // 0x379010: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x379010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379014: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x379014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_379018:
    // 0x379018: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x379018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x37901c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37901cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x379020: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x379020u;
    SET_GPR_U32(ctx, 31, 0x379028u);
    ctx->pc = 0x379024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379020u;
    // 0x379024: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x379020u, 0x379028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379028u;
label_379028:
    // 0x379028: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x379028u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37902c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37902cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379030: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x379030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x379034: 0xc102576  jal         func_4095D8
    ctx->pc = 0x379034u;
    SET_GPR_U32(ctx, 31, 0x37903Cu);
    ctx->pc = 0x379038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379034u;
    // 0x379038: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x379034u, 0x37903Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37903Cu;
label_37903c:
    // 0x37903c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x37903cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x379040: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x379040u;
    {
        const bool branch_taken_0x379040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x379044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379040u;
        // 0x379044: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379040) {
            ctx->pc = 0x379018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_379018;
        }
    }
    ctx->pc = 0x379048u;
    // 0x379048: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x379048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37904c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x37904cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_379050:
    // 0x379050: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x379050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x379054: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x379054u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x379058: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x379058u;
    SET_GPR_U32(ctx, 31, 0x379060u);
    ctx->pc = 0x37905Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379058u;
    // 0x37905c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x379058u, 0x379060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379060u;
label_379060:
    // 0x379060: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x379060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379064: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x379064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379068: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x379068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37906c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x37906Cu;
    SET_GPR_U32(ctx, 31, 0x379074u);
    ctx->pc = 0x379070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37906Cu;
    // 0x379070: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x37906Cu, 0x379074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379074u;
label_379074:
    // 0x379074: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x379074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x379078: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x379078u;
    {
        const bool branch_taken_0x379078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379078u;
        // 0x37907c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379078) {
            ctx->pc = 0x379050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_379050;
        }
    }
    ctx->pc = 0x379080u;
    // 0x379080: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x379080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379084: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x379084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_379088:
    // 0x379088: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x379088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x37908c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37908cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x379090: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x379090u;
    SET_GPR_U32(ctx, 31, 0x379098u);
    ctx->pc = 0x379094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379090u;
    // 0x379094: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x379090u, 0x379098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379098u;
label_379098:
    // 0x379098: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x379098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37909c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37909cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3790a0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3790a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3790a4: 0xc102576  jal         func_4095D8
    ctx->pc = 0x3790A4u;
    SET_GPR_U32(ctx, 31, 0x3790ACu);
    ctx->pc = 0x3790A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3790A4u;
    // 0x3790a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x3790A4u, 0x3790ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3790ACu;
label_3790ac:
    // 0x3790ac: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x3790acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3790b0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3790B0u;
    {
        const bool branch_taken_0x3790b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3790B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3790B0u;
        // 0x3790b4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3790b0) {
            ctx->pc = 0x379088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_379088;
        }
    }
    ctx->pc = 0x3790B8u;
    // 0x3790b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3790b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3790bc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3790bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3790c0:
    // 0x3790c0: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x3790c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x3790c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3790c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3790c8: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x3790C8u;
    SET_GPR_U32(ctx, 31, 0x3790D0u);
    ctx->pc = 0x3790CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3790C8u;
    // 0x3790cc: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x3790C8u, 0x3790D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3790D0u;
label_3790d0:
    // 0x3790d0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3790d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3790d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3790d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3790d8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3790d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3790dc: 0xc102576  jal         func_4095D8
    ctx->pc = 0x3790DCu;
    SET_GPR_U32(ctx, 31, 0x3790E4u);
    ctx->pc = 0x3790E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3790DCu;
    // 0x3790e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x3790DCu, 0x3790E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3790E4u;
label_3790e4:
    // 0x3790e4: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x3790e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3790e8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3790E8u;
    {
        const bool branch_taken_0x3790e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3790ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3790E8u;
        // 0x3790ec: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3790e8) {
            ctx->pc = 0x3790C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3790c0;
        }
    }
    ctx->pc = 0x3790F0u;
    // 0x3790f0: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x3790f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3790f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3790f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3790f8: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x3790f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3790fc: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x3790fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x379100: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x379100u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x379104: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x379104u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x379108: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x379108u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x37910c: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x37910cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x379110: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x379110u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x379114: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x379114u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x379118: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x379118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37911c: 0x3e00008  jr          $ra
    ctx->pc = 0x37911Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37911Cu;
        // 0x379120: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37911Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379124u;
    // 0x379124: 0x0  nop
    ctx->pc = 0x379124u;
    // NOP
    ctx->pc = 0x379128u;
}
