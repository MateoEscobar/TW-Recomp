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

// Function: sub_001F2E90
// Address: 0x1f2e90 - 0x1f2ff8
void sub_001F2E90_0x1f2e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2E90_0x1f2e90");
#endif

    switch (ctx->pc) {
        case 0x1f2e90u: goto label_1f2e90;
        case 0x1f2e94u: goto label_1f2e94;
        case 0x1f2e98u: goto label_1f2e98;
        case 0x1f2e9cu: goto label_1f2e9c;
        case 0x1f2ea0u: goto label_1f2ea0;
        case 0x1f2ea4u: goto label_1f2ea4;
        case 0x1f2ea8u: goto label_1f2ea8;
        case 0x1f2eacu: goto label_1f2eac;
        case 0x1f2eb0u: goto label_1f2eb0;
        case 0x1f2eb4u: goto label_1f2eb4;
        case 0x1f2eb8u: goto label_1f2eb8;
        case 0x1f2ebcu: goto label_1f2ebc;
        case 0x1f2ec0u: goto label_1f2ec0;
        case 0x1f2ec4u: goto label_1f2ec4;
        case 0x1f2ec8u: goto label_1f2ec8;
        case 0x1f2eccu: goto label_1f2ecc;
        case 0x1f2ed0u: goto label_1f2ed0;
        case 0x1f2ed4u: goto label_1f2ed4;
        case 0x1f2ed8u: goto label_1f2ed8;
        case 0x1f2edcu: goto label_1f2edc;
        case 0x1f2ee0u: goto label_1f2ee0;
        case 0x1f2ee4u: goto label_1f2ee4;
        case 0x1f2ee8u: goto label_1f2ee8;
        case 0x1f2eecu: goto label_1f2eec;
        case 0x1f2ef0u: goto label_1f2ef0;
        case 0x1f2ef4u: goto label_1f2ef4;
        case 0x1f2ef8u: goto label_1f2ef8;
        case 0x1f2efcu: goto label_1f2efc;
        case 0x1f2f00u: goto label_1f2f00;
        case 0x1f2f04u: goto label_1f2f04;
        case 0x1f2f08u: goto label_1f2f08;
        case 0x1f2f0cu: goto label_1f2f0c;
        case 0x1f2f10u: goto label_1f2f10;
        case 0x1f2f14u: goto label_1f2f14;
        case 0x1f2f18u: goto label_1f2f18;
        case 0x1f2f1cu: goto label_1f2f1c;
        case 0x1f2f20u: goto label_1f2f20;
        case 0x1f2f24u: goto label_1f2f24;
        case 0x1f2f28u: goto label_1f2f28;
        case 0x1f2f2cu: goto label_1f2f2c;
        case 0x1f2f30u: goto label_1f2f30;
        case 0x1f2f34u: goto label_1f2f34;
        case 0x1f2f38u: goto label_1f2f38;
        case 0x1f2f3cu: goto label_1f2f3c;
        case 0x1f2f40u: goto label_1f2f40;
        case 0x1f2f44u: goto label_1f2f44;
        case 0x1f2f48u: goto label_1f2f48;
        case 0x1f2f4cu: goto label_1f2f4c;
        case 0x1f2f50u: goto label_1f2f50;
        case 0x1f2f54u: goto label_1f2f54;
        case 0x1f2f58u: goto label_1f2f58;
        case 0x1f2f5cu: goto label_1f2f5c;
        case 0x1f2f60u: goto label_1f2f60;
        case 0x1f2f64u: goto label_1f2f64;
        case 0x1f2f68u: goto label_1f2f68;
        case 0x1f2f6cu: goto label_1f2f6c;
        case 0x1f2f70u: goto label_1f2f70;
        case 0x1f2f74u: goto label_1f2f74;
        case 0x1f2f78u: goto label_1f2f78;
        case 0x1f2f7cu: goto label_1f2f7c;
        case 0x1f2f80u: goto label_1f2f80;
        case 0x1f2f84u: goto label_1f2f84;
        case 0x1f2f88u: goto label_1f2f88;
        case 0x1f2f8cu: goto label_1f2f8c;
        case 0x1f2f90u: goto label_1f2f90;
        case 0x1f2f94u: goto label_1f2f94;
        case 0x1f2f98u: goto label_1f2f98;
        case 0x1f2f9cu: goto label_1f2f9c;
        case 0x1f2fa0u: goto label_1f2fa0;
        case 0x1f2fa4u: goto label_1f2fa4;
        case 0x1f2fa8u: goto label_1f2fa8;
        case 0x1f2facu: goto label_1f2fac;
        case 0x1f2fb0u: goto label_1f2fb0;
        case 0x1f2fb4u: goto label_1f2fb4;
        case 0x1f2fb8u: goto label_1f2fb8;
        case 0x1f2fbcu: goto label_1f2fbc;
        case 0x1f2fc0u: goto label_1f2fc0;
        case 0x1f2fc4u: goto label_1f2fc4;
        case 0x1f2fc8u: goto label_1f2fc8;
        case 0x1f2fccu: goto label_1f2fcc;
        case 0x1f2fd0u: goto label_1f2fd0;
        case 0x1f2fd4u: goto label_1f2fd4;
        case 0x1f2fd8u: goto label_1f2fd8;
        case 0x1f2fdcu: goto label_1f2fdc;
        case 0x1f2fe0u: goto label_1f2fe0;
        case 0x1f2fe4u: goto label_1f2fe4;
        case 0x1f2fe8u: goto label_1f2fe8;
        case 0x1f2fecu: goto label_1f2fec;
        case 0x1f2ff0u: goto label_1f2ff0;
        case 0x1f2ff4u: goto label_1f2ff4;
        default: break;
    }

    ctx->pc = 0x1f2e90u;

label_1f2e90:
    // 0x1f2e90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f2e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1f2e94:
    // 0x1f2e94: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1f2e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1f2e98:
    // 0x1f2e98: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f2e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1f2e9c:
    // 0x1f2e9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f2e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2ea0:
    // 0x1f2ea0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1f2ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1f2ea4:
    // 0x1f2ea4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f2ea4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f2ea8:
    // 0x1f2ea8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1f2ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1f2eac:
    // 0x1f2eac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f2eacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2eb0:
    // 0x1f2eb0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1f2eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1f2eb4:
    // 0x1f2eb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f2eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f2eb8:
    // 0x1f2eb8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1f2ebc:
    if (ctx->pc == 0x1F2EBCu) {
        ctx->pc = 0x1F2EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2EB8u;
        // 0x1f2ebc: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2EC0u;
        goto label_1f2ec0;
    }
    ctx->pc = 0x1F2EB8u;
    {
        const bool branch_taken_0x1f2eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2EB8u;
        // 0x1f2ebc: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2eb8) {
            ctx->pc = 0x1F2EC4u;
            goto label_1f2ec4;
        }
    }
    ctx->pc = 0x1F2EC0u;
label_1f2ec0:
    // 0x1f2ec0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f2ec0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f2ec4:
    // 0x1f2ec4: 0x2e22000a  sltiu       $v0, $s1, 0xA
    ctx->pc = 0x1f2ec4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1f2ec8:
    // 0x1f2ec8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1f2ecc:
    if (ctx->pc == 0x1F2ECCu) {
        ctx->pc = 0x1F2ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2EC8u;
        // 0x1f2ecc: 0x3c020064  lui         $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2ED0u;
        goto label_1f2ed0;
    }
    ctx->pc = 0x1F2EC8u;
    {
        const bool branch_taken_0x1f2ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2EC8u;
        // 0x1f2ecc: 0x3c020064  lui         $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ec8) {
            ctx->pc = 0x1F2F14u;
            goto label_1f2f14;
        }
    }
    ctx->pc = 0x1F2ED0u;
label_1f2ed0:
    // 0x1f2ed0: 0x2450ef80  addiu       $s0, $v0, -0x1080
    ctx->pc = 0x1f2ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963072));
label_1f2ed4:
    // 0x1f2ed4: 0xc080b0c  jal         func_202C30
label_1f2ed8:
    if (ctx->pc == 0x1F2ED8u) {
        ctx->pc = 0x1F2ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2ED4u;
        // 0x1f2ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2EDCu;
        goto label_1f2edc;
    }
    ctx->pc = 0x1F2ED4u;
    SET_GPR_U32(ctx, 31, 0x1F2EDCu);
    ctx->pc = 0x1F2ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2ED4u;
    // 0x1f2ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202C30u, 0x1F2ED4u, 0x1F2EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2EDCu;
label_1f2edc:
    // 0x1f2edc: 0x1222fff8  beq         $s1, $v0, . + 4 + (-0x8 << 2)
label_1f2ee0:
    if (ctx->pc == 0x1F2EE0u) {
        ctx->pc = 0x1F2EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2EDCu;
        // 0x1f2ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2EE4u;
        goto label_1f2ee4;
    }
    ctx->pc = 0x1F2EDCu;
    {
        const bool branch_taken_0x1f2edc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F2EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2EDCu;
        // 0x1f2ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2edc) {
            ctx->pc = 0x1F2EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2ec0;
        }
    }
    ctx->pc = 0x1F2EE4u;
label_1f2ee4:
    // 0x1f2ee4: 0xc080ad4  jal         func_202B50
label_1f2ee8:
    if (ctx->pc == 0x1F2EE8u) {
        ctx->pc = 0x1F2EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2EE4u;
        // 0x1f2ee8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2EECu;
        goto label_1f2eec;
    }
    ctx->pc = 0x1F2EE4u;
    SET_GPR_U32(ctx, 31, 0x1F2EECu);
    ctx->pc = 0x1F2EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2EE4u;
    // 0x1f2ee8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B50u, 0x1F2EE4u, 0x1F2EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2EECu;
label_1f2eec:
    // 0x1f2eec: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
label_1f2ef0:
    if (ctx->pc == 0x1F2EF0u) {
        ctx->pc = 0x1F2EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2EECu;
        // 0x1f2ef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2EF4u;
        goto label_1f2ef4;
    }
    ctx->pc = 0x1F2EECu;
    {
        const bool branch_taken_0x1f2eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2EECu;
        // 0x1f2ef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2eec) {
            ctx->pc = 0x1F2EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2ec0;
        }
    }
    ctx->pc = 0x1F2EF4u;
label_1f2ef4:
    // 0x1f2ef4: 0xc080b32  jal         func_202CC8
label_1f2ef8:
    if (ctx->pc == 0x1F2EF8u) {
        ctx->pc = 0x1F2EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2EF4u;
        // 0x1f2ef8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2EFCu;
        goto label_1f2efc;
    }
    ctx->pc = 0x1F2EF4u;
    SET_GPR_U32(ctx, 31, 0x1F2EFCu);
    ctx->pc = 0x1F2EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2EF4u;
    // 0x1f2ef8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202CC8u, 0x1F2EF4u, 0x1F2EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2EFCu;
label_1f2efc:
    // 0x1f2efc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f2f00:
    // 0x1f2f00: 0xc10c313  jal         func_430C4C
label_1f2f04:
    if (ctx->pc == 0x1F2F04u) {
        ctx->pc = 0x1F2F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F00u;
        // 0x1f2f04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2F08u;
        goto label_1f2f08;
    }
    ctx->pc = 0x1F2F00u;
    SET_GPR_U32(ctx, 31, 0x1F2F08u);
    ctx->pc = 0x1F2F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2F00u;
    // 0x1f2f04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x1F2F00u, 0x1F2F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2F08u;
label_1f2f08:
    // 0x1f2f08: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
label_1f2f0c:
    if (ctx->pc == 0x1F2F0Cu) {
        ctx->pc = 0x1F2F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F08u;
        // 0x1f2f0c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2F10u;
        goto label_1f2f10;
    }
    ctx->pc = 0x1F2F08u;
    {
        const bool branch_taken_0x1f2f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2f08) {
            ctx->pc = 0x1F2F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2F08u;
            // 0x1f2f0c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2EC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2ec4;
        }
    }
    ctx->pc = 0x1F2F10u;
label_1f2f10:
    // 0x1f2f10: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1f2f10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2f14:
    // 0x1f2f14: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
label_1f2f18:
    if (ctx->pc == 0x1F2F18u) {
        ctx->pc = 0x1F2F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F14u;
        // 0x1f2f18: 0x8e82f3ec  lw          $v0, -0xC14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294964204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2F1Cu;
        goto label_1f2f1c;
    }
    ctx->pc = 0x1F2F14u;
    {
        const bool branch_taken_0x1f2f14 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F14u;
        // 0x1f2f18: 0x8e82f3ec  lw          $v0, -0xC14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294964204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2f14) {
            ctx->pc = 0x1F2F60u;
            goto label_1f2f60;
        }
    }
    ctx->pc = 0x1F2F1Cu;
label_1f2f1c:
    // 0x1f2f1c: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1f2f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1f2f20:
    // 0x1f2f20: 0x8c51009c  lw          $s1, 0x9C($v0)
    ctx->pc = 0x1f2f20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_1f2f24:
    // 0x1f2f24: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1f2f24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f2f28:
    // 0x1f2f28: 0x860200a0  lh          $v0, 0xA0($s0)
    ctx->pc = 0x1f2f28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 160)));
label_1f2f2c:
    // 0x1f2f2c: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x1f2f2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_1f2f30:
    // 0x1f2f30: 0xc067b9c  jal         func_19EE70
label_1f2f34:
    if (ctx->pc == 0x1F2F34u) {
        ctx->pc = 0x1F2F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F30u;
        // 0x1f2f34: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2F38u;
        goto label_1f2f38;
    }
    ctx->pc = 0x1F2F30u;
    SET_GPR_U32(ctx, 31, 0x1F2F38u);
    ctx->pc = 0x1F2F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2F30u;
    // 0x1f2f34: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1F2F30u, 0x1F2F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2F38u;
label_1f2f38:
    // 0x1f2f38: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f2f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f2f3c:
    // 0x1f2f3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f2f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f2f40:
    // 0x1f2f40: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1f2f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_1f2f44:
    // 0x1f2f44: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1f2f44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1f2f48:
    // 0x1f2f48: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f2f48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f2f4c:
    // 0x1f2f4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f2f50:
    // 0x1f2f50: 0x60f809  jalr        $v1
label_1f2f54:
    if (ctx->pc == 0x1F2F54u) {
        ctx->pc = 0x1F2F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F50u;
        // 0x1f2f54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2F58u;
        goto label_1f2f58;
    }
    ctx->pc = 0x1F2F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F2F58u);
        ctx->pc = 0x1F2F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F50u;
        // 0x1f2f54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2F50u, 0x1F2F58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F2F58u;
label_1f2f58:
    // 0x1f2f58: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1f2f5c:
    if (ctx->pc == 0x1F2F5Cu) {
        ctx->pc = 0x1F2F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F58u;
        // 0x1f2f5c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2F60u;
        goto label_1f2f60;
    }
    ctx->pc = 0x1F2F58u;
    {
        const bool branch_taken_0x1f2f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F58u;
        // 0x1f2f5c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2f58) {
            ctx->pc = 0x1F2FD8u;
            goto label_1f2fd8;
        }
    }
    ctx->pc = 0x1F2F60u;
label_1f2f60:
    // 0x1f2f60: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1f2f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1f2f64:
    // 0x1f2f64: 0x2451ef80  addiu       $s1, $v0, -0x1080
    ctx->pc = 0x1f2f64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963072));
label_1f2f68:
    // 0x1f2f68: 0xc080b0c  jal         func_202C30
label_1f2f6c:
    if (ctx->pc == 0x1F2F6Cu) {
        ctx->pc = 0x1F2F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F68u;
        // 0x1f2f6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2F70u;
        goto label_1f2f70;
    }
    ctx->pc = 0x1F2F68u;
    SET_GPR_U32(ctx, 31, 0x1F2F70u);
    ctx->pc = 0x1F2F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2F68u;
    // 0x1f2f6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202C30u, 0x1F2F68u, 0x1F2F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2F70u;
label_1f2f70:
    // 0x1f2f70: 0xc07f7f0  jal         func_1FDFC0
label_1f2f74:
    if (ctx->pc == 0x1F2F74u) {
        ctx->pc = 0x1F2F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F70u;
        // 0x1f2f74: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2F78u;
        goto label_1f2f78;
    }
    ctx->pc = 0x1F2F70u;
    SET_GPR_U32(ctx, 31, 0x1F2F78u);
    ctx->pc = 0x1F2F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2F70u;
    // 0x1f2f74: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDFC0u, 0x1F2F70u, 0x1F2F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2F78u;
label_1f2f78:
    // 0x1f2f78: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1f2f7c:
    if (ctx->pc == 0x1F2F7Cu) {
        ctx->pc = 0x1F2F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F78u;
        // 0x1f2f7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2F80u;
        goto label_1f2f80;
    }
    ctx->pc = 0x1F2F78u;
    {
        const bool branch_taken_0x1f2f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F78u;
        // 0x1f2f7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2f78) {
            ctx->pc = 0x1F2FBCu;
            goto label_1f2fbc;
        }
    }
    ctx->pc = 0x1F2F80u;
label_1f2f80:
    // 0x1f2f80: 0xc080ad4  jal         func_202B50
label_1f2f84:
    if (ctx->pc == 0x1F2F84u) {
        ctx->pc = 0x1F2F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F80u;
        // 0x1f2f84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2F88u;
        goto label_1f2f88;
    }
    ctx->pc = 0x1F2F80u;
    SET_GPR_U32(ctx, 31, 0x1F2F88u);
    ctx->pc = 0x1F2F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2F80u;
    // 0x1f2f84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B50u, 0x1F2F80u, 0x1F2F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2F88u;
label_1f2f88:
    // 0x1f2f88: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1f2f8c:
    if (ctx->pc == 0x1F2F8Cu) {
        ctx->pc = 0x1F2F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F88u;
        // 0x1f2f8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2F90u;
        goto label_1f2f90;
    }
    ctx->pc = 0x1F2F88u;
    {
        const bool branch_taken_0x1f2f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F88u;
        // 0x1f2f8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2f88) {
            ctx->pc = 0x1F2FA4u;
            goto label_1f2fa4;
        }
    }
    ctx->pc = 0x1F2F90u;
label_1f2f90:
    // 0x1f2f90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f2f94:
    // 0x1f2f94: 0xc080a8c  jal         func_202A30
label_1f2f98:
    if (ctx->pc == 0x1F2F98u) {
        ctx->pc = 0x1F2F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F94u;
        // 0x1f2f98: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2F9Cu;
        goto label_1f2f9c;
    }
    ctx->pc = 0x1F2F94u;
    SET_GPR_U32(ctx, 31, 0x1F2F9Cu);
    ctx->pc = 0x1F2F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2F94u;
    // 0x1f2f98: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202A30u, 0x1F2F94u, 0x1F2F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2F9Cu;
label_1f2f9c:
    // 0x1f2f9c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f2fa0:
    if (ctx->pc == 0x1F2FA0u) {
        ctx->pc = 0x1F2FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F9Cu;
        // 0x1f2fa0: 0x8e82f3ec  lw          $v0, -0xC14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294964204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2FA4u;
        goto label_1f2fa4;
    }
    ctx->pc = 0x1F2F9Cu;
    {
        const bool branch_taken_0x1f2f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F9Cu;
        // 0x1f2fa0: 0x8e82f3ec  lw          $v0, -0xC14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294964204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2f9c) {
            ctx->pc = 0x1F2FB4u;
            goto label_1f2fb4;
        }
    }
    ctx->pc = 0x1F2FA4u;
label_1f2fa4:
    // 0x1f2fa4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f2fa8:
    // 0x1f2fa8: 0xc080ab2  jal         func_202AC8
label_1f2fac:
    if (ctx->pc == 0x1F2FACu) {
        ctx->pc = 0x1F2FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2FA8u;
        // 0x1f2fac: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2FB0u;
        goto label_1f2fb0;
    }
    ctx->pc = 0x1F2FA8u;
    SET_GPR_U32(ctx, 31, 0x1F2FB0u);
    ctx->pc = 0x1F2FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2FA8u;
    // 0x1f2fac: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202AC8u, 0x1F2FA8u, 0x1F2FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2FB0u;
label_1f2fb0:
    // 0x1f2fb0: 0x8e82f3ec  lw          $v0, -0xC14($s4)
    ctx->pc = 0x1f2fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294964204)));
label_1f2fb4:
    // 0x1f2fb4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1f2fb8:
    if (ctx->pc == 0x1F2FB8u) {
        ctx->pc = 0x1F2FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2FB4u;
        // 0x1f2fb8: 0xac400074  sw          $zero, 0x74($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2FBCu;
        goto label_1f2fbc;
    }
    ctx->pc = 0x1F2FB4u;
    {
        const bool branch_taken_0x1f2fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2FB4u;
        // 0x1f2fb8: 0xac400074  sw          $zero, 0x74($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2fb4) {
            ctx->pc = 0x1F2FD4u;
            goto label_1f2fd4;
        }
    }
    ctx->pc = 0x1F2FBCu;
label_1f2fbc:
    // 0x1f2fbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f2fc0:
    // 0x1f2fc0: 0xc080ab2  jal         func_202AC8
label_1f2fc4:
    if (ctx->pc == 0x1F2FC4u) {
        ctx->pc = 0x1F2FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2FC0u;
        // 0x1f2fc4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2FC8u;
        goto label_1f2fc8;
    }
    ctx->pc = 0x1F2FC0u;
    SET_GPR_U32(ctx, 31, 0x1F2FC8u);
    ctx->pc = 0x1F2FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2FC0u;
    // 0x1f2fc4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202AC8u, 0x1F2FC0u, 0x1F2FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2FC8u;
label_1f2fc8:
    // 0x1f2fc8: 0x8e83f3ec  lw          $v1, -0xC14($s4)
    ctx->pc = 0x1f2fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294964204)));
label_1f2fcc:
    // 0x1f2fcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2fd0:
    // 0x1f2fd0: 0xac620074  sw          $v0, 0x74($v1)
    ctx->pc = 0x1f2fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 2));
label_1f2fd4:
    // 0x1f2fd4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1f2fd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f2fd8:
    // 0x1f2fd8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1f2fd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f2fdc:
    // 0x1f2fdc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f2fdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f2fe0:
    // 0x1f2fe0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1f2fe0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f2fe4:
    // 0x1f2fe4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1f2fe4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f2fe8:
    // 0x1f2fe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f2fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f2fec:
    // 0x1f2fec: 0x3e00008  jr          $ra
label_1f2ff0:
    if (ctx->pc == 0x1F2FF0u) {
        ctx->pc = 0x1F2FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2FECu;
        // 0x1f2ff0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2FF4u;
        goto label_1f2ff4;
    }
    ctx->pc = 0x1F2FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2FECu;
        // 0x1f2ff0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2FF4u;
label_1f2ff4:
    // 0x1f2ff4: 0x0  nop
    ctx->pc = 0x1f2ff4u;
    // NOP
    ctx->pc = 0x1f2ff8u;
}
