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

// Function: sub_004C8E28
// Address: 0x4c8e28 - 0x4c8ff8
void sub_004C8E28_0x4c8e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C8E28_0x4c8e28");
#endif

    switch (ctx->pc) {
        case 0x4c8ea0u: goto label_4c8ea0;
        case 0x4c8ed0u: goto label_4c8ed0;
        case 0x4c8f40u: goto label_4c8f40;
        case 0x4c8f70u: goto label_4c8f70;
        default: break;
    }

    ctx->pc = 0x4c8e28u;

    // 0x4c8e28: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4c8e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4c8e2c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c8e2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c8e30: 0xac404474  sw          $zero, 0x4474($v0)
    ctx->pc = 0x4c8e30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x714474u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x714474u, _value); } while (0);
    // 0x4c8e34: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x4c8e34u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8e38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c8e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c8e3c: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x4c8e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
    // 0x4c8e40: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4c8e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4c8e44: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x4c8e44u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8e48: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4c8e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c8e4c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4c8e4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c8e50: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x4C8E50u;
    {
        const bool branch_taken_0x4c8e50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8E50u;
        // 0x4c8e54: 0xaca32880  sw          $v1, 0x2880($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 10368), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8e50) {
            ctx->pc = 0x4C8EF8u;
            goto label_4c8ef8;
        }
    }
    ctx->pc = 0x4C8E58u;
    // 0x4c8e58: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x4c8e58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x4c8e5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c8e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c8e60: 0x8c8238d0  lw          $v0, 0x38D0($a0)
    ctx->pc = 0x4c8e60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5338D0u));
    // 0x4c8e64: 0x3c180071  lui         $t8, 0x71
    ctx->pc = 0x4c8e64u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)113 << 16));
    // 0x4c8e68: 0x3c0c0071  lui         $t4, 0x71
    ctx->pc = 0x4c8e68u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)113 << 16));
    // 0x4c8e6c: 0x3c0f0071  lui         $t7, 0x71
    ctx->pc = 0x4c8e6cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)113 << 16));
    // 0x4c8e70: 0x3c0e0071  lui         $t6, 0x71
    ctx->pc = 0x4c8e70u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)113 << 16));
    // 0x4c8e74: 0x3c190071  lui         $t9, 0x71
    ctx->pc = 0x4c8e74u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)113 << 16));
    // 0x4c8e78: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x4c8e78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x4c8e7c: 0x10430044  beq         $v0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x4C8E7Cu;
    {
        const bool branch_taken_0x4c8e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4C8E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8E7Cu;
        // 0x4c8e80: 0x3c0d0071  lui         $t5, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8e7c) {
            ctx->pc = 0x4C8F90u;
            goto label_4c8f90;
        }
    }
    ctx->pc = 0x4C8E84u;
    // 0x4c8e84: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4c8e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4c8e88: 0xac8338d0  sw          $v1, 0x38D0($a0)
    ctx->pc = 0x4c8e88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 14544), GPR_U32(ctx, 3));
    // 0x4c8e8c: 0x244234a0  addiu       $v0, $v0, 0x34A0
    ctx->pc = 0x4c8e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13472));
    // 0x4c8e90: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x4c8e90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4c8e94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4c8e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8e98: 0x3c080053  lui         $t0, 0x53
    ctx->pc = 0x4c8e98u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)83 << 16));
    // 0x4c8e9c: 0x24a4f400  addiu       $a0, $a1, -0xC00
    ctx->pc = 0x4c8e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964224));
label_4c8ea0:
    // 0x4c8ea0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c8ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c8ea4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4c8ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4c8ea8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c8ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c8eac: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c8eacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4c8eb0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4c8eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4c8eb4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4c8eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4c8eb8: 0x14e0fff9  bnez        $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4C8EB8u;
    {
        const bool branch_taken_0x4c8eb8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C8EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8EB8u;
        // 0x4c8ebc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8eb8) {
            ctx->pc = 0x4C8EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c8ea0;
        }
    }
    ctx->pc = 0x4C8EC0u;
    // 0x4c8ec0: 0x25022ca0  addiu       $v0, $t0, 0x2CA0
    ctx->pc = 0x4c8ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 11424));
    // 0x4c8ec4: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x4c8ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4c8ec8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c8ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8ecc: 0x24850400  addiu       $a1, $a0, 0x400
    ctx->pc = 0x4c8eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
label_4c8ed0:
    // 0x4c8ed0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4c8ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c8ed4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4c8ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4c8ed8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4c8ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c8edc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c8edcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4c8ee0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4c8ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4c8ee4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4c8ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x4c8ee8: 0x14e0fff9  bnez        $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4C8EE8u;
    {
        const bool branch_taken_0x4c8ee8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C8EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8EE8u;
        // 0x4c8eec: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8ee8) {
            ctx->pc = 0x4C8ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c8ed0;
        }
    }
    ctx->pc = 0x4C8EF0u;
    // 0x4c8ef0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x4C8EF0u;
    {
        const bool branch_taken_0x4c8ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8EF0u;
        // 0x4c8ef4: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8ef0) {
            ctx->pc = 0x4C8F94u;
            goto label_4c8f94;
        }
    }
    ctx->pc = 0x4C8EF8u;
label_4c8ef8:
    // 0x4c8ef8: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4c8ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x4c8efc: 0x3c180071  lui         $t8, 0x71
    ctx->pc = 0x4c8efcu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)113 << 16));
    // 0x4c8f00: 0x8c6238d0  lw          $v0, 0x38D0($v1)
    ctx->pc = 0x4c8f00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5338D0u));
    // 0x4c8f04: 0x3c0c0071  lui         $t4, 0x71
    ctx->pc = 0x4c8f04u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)113 << 16));
    // 0x4c8f08: 0x3c0f0071  lui         $t7, 0x71
    ctx->pc = 0x4c8f08u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)113 << 16));
    // 0x4c8f0c: 0x3c0e0071  lui         $t6, 0x71
    ctx->pc = 0x4c8f0cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)113 << 16));
    // 0x4c8f10: 0x3c190071  lui         $t9, 0x71
    ctx->pc = 0x4c8f10u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)113 << 16));
    // 0x4c8f14: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x4c8f14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x4c8f18: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x4C8F18u;
    {
        const bool branch_taken_0x4c8f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8F18u;
        // 0x4c8f1c: 0x3c0d0071  lui         $t5, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8f18) {
            ctx->pc = 0x4C8F90u;
            goto label_4c8f90;
        }
    }
    ctx->pc = 0x4C8F20u;
    // 0x4c8f20: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4c8f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4c8f24: 0xac6038d0  sw          $zero, 0x38D0($v1)
    ctx->pc = 0x4c8f24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14544), GPR_U32(ctx, 0));
    // 0x4c8f28: 0x244234a0  addiu       $v0, $v0, 0x34A0
    ctx->pc = 0x4c8f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13472));
    // 0x4c8f2c: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x4c8f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4c8f30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4c8f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8f34: 0x3c080053  lui         $t0, 0x53
    ctx->pc = 0x4c8f34u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)83 << 16));
    // 0x4c8f38: 0x24a4f400  addiu       $a0, $a1, -0xC00
    ctx->pc = 0x4c8f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964224));
    // 0x4c8f3c: 0x0  nop
    ctx->pc = 0x4c8f3cu;
    // NOP
label_4c8f40:
    // 0x4c8f40: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c8f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c8f44: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4c8f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4c8f48: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c8f4c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c8f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4c8f50: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4c8f50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4c8f54: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4c8f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4c8f58: 0x14e0fff9  bnez        $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4C8F58u;
    {
        const bool branch_taken_0x4c8f58 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C8F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8F58u;
        // 0x4c8f5c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8f58) {
            ctx->pc = 0x4C8F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c8f40;
        }
    }
    ctx->pc = 0x4C8F60u;
    // 0x4c8f60: 0x25022ca0  addiu       $v0, $t0, 0x2CA0
    ctx->pc = 0x4c8f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 11424));
    // 0x4c8f64: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x4c8f64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4c8f68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c8f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8f6c: 0x24850400  addiu       $a1, $a0, 0x400
    ctx->pc = 0x4c8f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
label_4c8f70:
    // 0x4c8f70: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4c8f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c8f74: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4c8f74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4c8f78: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4c8f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c8f7c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c8f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4c8f80: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4c8f80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4c8f84: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4c8f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x4c8f88: 0x14e0fff9  bnez        $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4C8F88u;
    {
        const bool branch_taken_0x4c8f88 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C8F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8F88u;
        // 0x4c8f8c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8f88) {
            ctx->pc = 0x4C8F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c8f70;
        }
    }
    ctx->pc = 0x4C8F90u;
label_4c8f90:
    // 0x4c8f90: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4c8f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_4c8f94:
    // 0x4c8f94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4c8f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c8f98: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4c8f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c8f9c: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x4c8f9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4c8fa0: 0x8d440014  lw          $a0, 0x14($t2)
    ctx->pc = 0x4c8fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x4c8fa4: 0x8d480008  lw          $t0, 0x8($t2)
    ctx->pc = 0x4c8fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x4c8fa8: 0xaf044460  sw          $a0, 0x4460($t8)
    ctx->pc = 0x4c8fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 17504), GPR_U32(ctx, 4));
    // 0x4c8fac: 0x8d470010  lw          $a3, 0x10($t2)
    ctx->pc = 0x4c8facu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x4c8fb0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4c8fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4c8fb4: 0x8d460018  lw          $a2, 0x18($t2)
    ctx->pc = 0x4c8fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x4c8fb8: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4c8fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4c8fbc: 0xad864464  sw          $a2, 0x4464($t4)
    ctx->pc = 0x4c8fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 17508), GPR_U32(ctx, 6));
    // 0x4c8fc0: 0x8d440004  lw          $a0, 0x4($t2)
    ctx->pc = 0x4c8fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x4c8fc4: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x4c8fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x4c8fc8: 0xade84478  sw          $t0, 0x4478($t7)
    ctx->pc = 0x4c8fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17528), GPR_U32(ctx, 8));
    // 0x4c8fcc: 0x44182b  sltu        $v1, $v0, $a0
    ctx->pc = 0x4c8fccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4c8fd0: 0xadc7447c  sw          $a3, 0x447C($t6)
    ctx->pc = 0x4c8fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 17532), GPR_U32(ctx, 7));
    // 0x4c8fd4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x4c8fd4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x4c8fd8: 0x452804  sllv        $a1, $a1, $v0
    ctx->pc = 0x4c8fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x4c8fdc: 0xaf224470  sw          $v0, 0x4470($t9)
    ctx->pc = 0x4c8fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 17520), GPR_U32(ctx, 2));
    // 0x4c8fe0: 0xae054468  sw          $a1, 0x4468($s0)
    ctx->pc = 0x4c8fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17512), GPR_U32(ctx, 5));
    // 0x4c8fe4: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x4c8fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4c8fe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c8fe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c8fec: 0xada3446c  sw          $v1, 0x446C($t5)
    ctx->pc = 0x4c8fecu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 17516), GPR_U32(ctx, 3));
    // 0x4c8ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x4C8FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C8FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8FF0u;
        // 0x4c8ff4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C8FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C8FF8u;
}
