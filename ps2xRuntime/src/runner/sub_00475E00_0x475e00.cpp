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

// Function: sub_00475E00
// Address: 0x475e00 - 0x476098
void sub_00475E00_0x475e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00475E00_0x475e00");
#endif

    switch (ctx->pc) {
        case 0x475e34u: goto label_475e34;
        case 0x475e68u: goto label_475e68;
        case 0x475e7cu: goto label_475e7c;
        case 0x475eb8u: goto label_475eb8;
        case 0x475eccu: goto label_475ecc;
        case 0x475ed4u: goto label_475ed4;
        case 0x475ee8u: goto label_475ee8;
        case 0x475f18u: goto label_475f18;
        case 0x475f30u: goto label_475f30;
        case 0x475fb0u: goto label_475fb0;
        case 0x475fc4u: goto label_475fc4;
        case 0x475fd8u: goto label_475fd8;
        case 0x476058u: goto label_476058;
        default: break;
    }

    ctx->pc = 0x475e00u;

    // 0x475e00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x475e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x475e04: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x475e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x475e08: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x475e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x475e0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x475e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x475e10: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x475e10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x475e14: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x475e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x475e18: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x475e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x475e1c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x475e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x475e20: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x475e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x475e24: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x475e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x475e28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x475e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x475e2c: 0xc11c770  jal         func_471DC0
    ctx->pc = 0x475E2Cu;
    SET_GPR_U32(ctx, 31, 0x475E34u);
    ctx->pc = 0x475E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x475E2Cu;
    // 0x475e30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471DC0u, 0x475E2Cu, 0x475E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475E34u;
label_475e34:
    // 0x475e34: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x475e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x475e38: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x475e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x475e3c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x475e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x475e40: 0x10600089  beqz        $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x475E40u;
    {
        const bool branch_taken_0x475e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x475E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475E40u;
        // 0x475e44: 0x8f828918  lw          $v0, -0x76E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475e40) {
            ctx->pc = 0x476068u;
            goto label_476068;
        }
    }
    ctx->pc = 0x475E48u;
    // 0x475e48: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x475e48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x475e4c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x475e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x475e50: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x475e50u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x475e54: 0x8ed30000  lw          $s3, 0x0($s6)
    ctx->pc = 0x475e54u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x475e58: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x475E58u;
    {
        const bool branch_taken_0x475e58 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x475E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475E58u;
        // 0x475e5c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475e58) {
            ctx->pc = 0x475E9Cu;
            goto label_475e9c;
        }
    }
    ctx->pc = 0x475E60u;
    // 0x475e60: 0x26d10004  addiu       $s1, $s6, 0x4
    ctx->pc = 0x475e60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x475e64: 0x0  nop
    ctx->pc = 0x475e64u;
    // NOP
label_475e68:
    // 0x475e68: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x475e68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x475e6c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x475e6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x475e70: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x475e70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x475e74: 0xc11d5a4  jal         func_475690
    ctx->pc = 0x475E74u;
    SET_GPR_U32(ctx, 31, 0x475E7Cu);
    ctx->pc = 0x475E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x475E74u;
    // 0x475e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x475690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x475690u, 0x475E74u, 0x475E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475E7Cu;
label_475e7c:
    // 0x475e7c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x475e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x475e80: 0x268501dc  addiu       $a1, $s4, 0x1DC
    ctx->pc = 0x475e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 476));
    // 0x475e84: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x475e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x475e88: 0x253202b  sltu        $a0, $s2, $s3
    ctx->pc = 0x475e88u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x475e8c: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x475e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x475e90: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x475e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x475e94: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x475E94u;
    {
        const bool branch_taken_0x475e94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x475E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475E94u;
        // 0x475e98: 0xa2a021  addu        $s4, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475e94) {
            ctx->pc = 0x475E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_475e68;
        }
    }
    ctx->pc = 0x475E9Cu;
label_475e9c:
    // 0x475e9c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x475e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x475ea0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x475ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x475ea4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x475ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x475ea8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x475ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x475eac: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x475eacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x475eb0: 0xc11ef26  jal         func_47BC98
    ctx->pc = 0x475EB0u;
    SET_GPR_U32(ctx, 31, 0x475EB8u);
    ctx->pc = 0x475EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x475EB0u;
    // 0x475eb4: 0x2408000a  addiu       $t0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BC98u, 0x475EB0u, 0x475EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475EB8u;
label_475eb8:
    // 0x475eb8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x475EB8u;
    {
        const bool branch_taken_0x475eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x475EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475EB8u;
        // 0x475ebc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475eb8) {
            ctx->pc = 0x475ED4u;
            goto label_475ed4;
        }
    }
    ctx->pc = 0x475EC0u;
    // 0x475ec0: 0x27858544  addiu       $a1, $gp, -0x7ABC
    ctx->pc = 0x475ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935876));
    // 0x475ec4: 0xc11fbba  jal         func_47EEE8
    ctx->pc = 0x475EC4u;
    SET_GPR_U32(ctx, 31, 0x475ECCu);
    ctx->pc = 0x475EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x475EC4u;
    // 0x475ec8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47EEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EEE8u, 0x475EC4u, 0x475ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475ECCu;
label_475ecc:
    // 0x475ecc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x475ECCu;
    {
        const bool branch_taken_0x475ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x475ecc) {
            ctx->pc = 0x475ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x475ECCu;
            // 0x475ed0: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x475EDCu;
            goto label_475edc;
        }
    }
    ctx->pc = 0x475ED4u;
label_475ed4:
    // 0x475ed4: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x475ED4u;
    {
        const bool branch_taken_0x475ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475ED4u;
        // 0x475ed8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475ed4) {
            ctx->pc = 0x47606Cu;
            goto label_47606c;
        }
    }
    ctx->pc = 0x475EDCu;
label_475edc:
    // 0x475edc: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x475EDCu;
    {
        const bool branch_taken_0x475edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x475EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475EDCu;
        // 0x475ee0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475edc) {
            ctx->pc = 0x476068u;
            goto label_476068;
        }
    }
    ctx->pc = 0x475EE4u;
    // 0x475ee4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x475ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_475ee8:
    // 0x475ee8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x475ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x475eec: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x475eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x475ef0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x475ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x475ef4: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x475ef4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x475ef8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x475ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x475efc: 0x26300018  addiu       $s0, $s1, 0x18
    ctx->pc = 0x475efcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x475f00: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x475f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x475f04: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x475f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x475f08: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x475f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x475f0c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x475f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x475f10: 0xc11fbba  jal         func_47EEE8
    ctx->pc = 0x475F10u;
    SET_GPR_U32(ctx, 31, 0x475F18u);
    ctx->pc = 0x475F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x475F10u;
    // 0x475f14: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47EEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EEE8u, 0x475F10u, 0x475F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475F18u;
label_475f18:
    // 0x475f18: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x475F18u;
    {
        const bool branch_taken_0x475f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x475F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475F18u;
        // 0x475f1c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475f18) {
            ctx->pc = 0x475ED4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_475ed4;
        }
    }
    ctx->pc = 0x475F20u;
    // 0x475f20: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x475f20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x475f24: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x475f24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x475f28: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x475f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x475f2c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x475f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_475f30:
    // 0x475f30: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x475f30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x475f34: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x475f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x475f38: 0x30440007  andi        $a0, $v0, 0x7
    ctx->pc = 0x475f38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x475f3c: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x475f3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x475f40: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x475F40u;
    {
        const bool branch_taken_0x475f40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x475F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475F40u;
        // 0x475f44: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475f40) {
            ctx->pc = 0x475F98u;
            goto label_475f98;
        }
    }
    ctx->pc = 0x475F48u;
    // 0x475f48: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x475f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x475f4c: 0x2442eb00  addiu       $v0, $v0, -0x1500
    ctx->pc = 0x475f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961920));
    // 0x475f50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x475f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x475f54: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x475f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x475f58: 0x800008  jr          $a0
    ctx->pc = 0x475F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x475F60u: goto label_475f60;
            case 0x475F70u: goto label_475f70;
            case 0x475F94u: goto label_475f94;
            case 0x475F98u: goto label_475f98;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x475F58u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x475F60u;
label_475f60:
    // 0x475f60: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x475f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x475f64: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x475f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x475f68: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x475F68u;
    {
        const bool branch_taken_0x475f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475F68u;
        // 0x475f6c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475f68) {
            ctx->pc = 0x475F98u;
            goto label_475f98;
        }
    }
    ctx->pc = 0x475F70u;
label_475f70:
    // 0x475f70: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x475f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x475f74: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x475f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x475f78: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x475f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x475f7c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x475f7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x475f80: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x475f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x475f84: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x475f84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x475f88: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x475f88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x475f8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x475F8Cu;
    {
        const bool branch_taken_0x475f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475F8Cu;
        // 0x475f90: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475f8c) {
            ctx->pc = 0x475F98u;
            goto label_475f98;
        }
    }
    ctx->pc = 0x475F94u;
label_475f94:
    // 0x475f94: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x475f94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_475f98:
    // 0x475f98: 0x5100ffe5  beql        $t0, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x475F98u;
    {
        const bool branch_taken_0x475f98 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x475f98) {
            ctx->pc = 0x475F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x475F98u;
            // 0x475f9c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x475F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_475f30;
        }
    }
    ctx->pc = 0x475FA0u;
    // 0x475fa0: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x475fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x475fa4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x475fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x475fa8: 0xc11fbba  jal         func_47EEE8
    ctx->pc = 0x475FA8u;
    SET_GPR_U32(ctx, 31, 0x475FB0u);
    ctx->pc = 0x475FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x475FA8u;
    // 0x475fac: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47EEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EEE8u, 0x475FA8u, 0x475FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475FB0u;
label_475fb0:
    // 0x475fb0: 0x1040ffc8  beqz        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x475FB0u;
    {
        const bool branch_taken_0x475fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x475FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475FB0u;
        // 0x475fb4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475fb0) {
            ctx->pc = 0x475ED4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_475ed4;
        }
    }
    ctx->pc = 0x475FB8u;
    // 0x475fb8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x475fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x475fbc: 0xc11fbba  jal         func_47EEE8
    ctx->pc = 0x475FBCu;
    SET_GPR_U32(ctx, 31, 0x475FC4u);
    ctx->pc = 0x475FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x475FBCu;
    // 0x475fc0: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47EEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EEE8u, 0x475FBCu, 0x475FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475FC4u;
label_475fc4:
    // 0x475fc4: 0x1040ffc3  beqz        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x475FC4u;
    {
        const bool branch_taken_0x475fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x475FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475FC4u;
        // 0x475fc8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475fc4) {
            ctx->pc = 0x475ED4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_475ed4;
        }
    }
    ctx->pc = 0x475FCCu;
    // 0x475fcc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x475fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x475fd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x475fd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x475fd4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x475fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_475fd8:
    // 0x475fd8: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x475fd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x475fdc: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x475fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x475fe0: 0x30440007  andi        $a0, $v0, 0x7
    ctx->pc = 0x475fe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x475fe4: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x475fe4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x475fe8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x475FE8u;
    {
        const bool branch_taken_0x475fe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x475FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475FE8u;
        // 0x475fec: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475fe8) {
            ctx->pc = 0x47603Cu;
            goto label_47603c;
        }
    }
    ctx->pc = 0x475FF0u;
    // 0x475ff0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x475ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x475ff4: 0x2442eb20  addiu       $v0, $v0, -0x14E0
    ctx->pc = 0x475ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961952));
    // 0x475ff8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x475ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x475ffc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x475ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x476000: 0x800008  jr          $a0
    ctx->pc = 0x476000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x476008u: goto label_476008;
            case 0x476018u: goto label_476018;
            case 0x476038u: goto label_476038;
            case 0x47603Cu: goto label_47603c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476000u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x476008u;
label_476008:
    // 0x476008: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x476008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x47600c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x47600cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x476010: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x476010u;
    {
        const bool branch_taken_0x476010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x476014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476010u;
        // 0x476014: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476010) {
            ctx->pc = 0x47603Cu;
            goto label_47603c;
        }
    }
    ctx->pc = 0x476018u;
label_476018:
    // 0x476018: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x476018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x47601c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x47601cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x476020: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x476020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x476024: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x476024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x476028: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x476028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x47602c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x47602cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x476030: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x476030u;
    {
        const bool branch_taken_0x476030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x476034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476030u;
        // 0x476034: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476030) {
            ctx->pc = 0x47603Cu;
            goto label_47603c;
        }
    }
    ctx->pc = 0x476038u;
label_476038:
    // 0x476038: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x476038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47603c:
    // 0x47603c: 0x50e0ffe6  beql        $a3, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x47603Cu;
    {
        const bool branch_taken_0x47603c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x47603c) {
            ctx->pc = 0x476040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47603Cu;
            // 0x476040: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x475FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_475fd8;
        }
    }
    ctx->pc = 0x476044u;
    // 0x476044: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x476044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x476048: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x476048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47604c: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x47604cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x476050: 0xc10f644  jal         func_43D910
    ctx->pc = 0x476050u;
    SET_GPR_U32(ctx, 31, 0x476058u);
    ctx->pc = 0x476054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x476050u;
    // 0x476054: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x476050u, 0x476058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476058u;
label_476058:
    // 0x476058: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x476058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x47605c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x47605cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x476060: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x476060u;
    {
        const bool branch_taken_0x476060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x476064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x476060u;
        // 0x476064: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x476060) {
            ctx->pc = 0x475EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_475ee8;
        }
    }
    ctx->pc = 0x476068u;
label_476068:
    // 0x476068: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x476068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_47606c:
    // 0x47606c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x47606cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x476070: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x476070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x476074: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x476074u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x476078: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x476078u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x47607c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x47607cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x476080: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x476080u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x476084: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x476084u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x476088: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x476088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47608c: 0x3e00008  jr          $ra
    ctx->pc = 0x47608Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x476090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47608Cu;
        // 0x476090: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47608Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x476094u;
    // 0x476094: 0x0  nop
    ctx->pc = 0x476094u;
    // NOP
    ctx->pc = 0x476098u;
}
