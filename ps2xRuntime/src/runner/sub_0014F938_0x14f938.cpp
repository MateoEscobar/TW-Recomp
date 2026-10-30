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

// Function: sub_0014F938
// Address: 0x14f938 - 0x14fa38
void sub_0014F938_0x14f938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F938_0x14f938");
#endif

    switch (ctx->pc) {
        case 0x14f984u: goto label_14f984;
        case 0x14f9a0u: goto label_14f9a0;
        case 0x14fa00u: goto label_14fa00;
        case 0x14fa1cu: goto label_14fa1c;
        default: break;
    }

    ctx->pc = 0x14f938u;

    // 0x14f938: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14f938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14f93c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14f93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14f940: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14f940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14f944: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14f944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f948: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14f948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14f94c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14f94cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f950: 0x2e020030  sltiu       $v0, $s0, 0x30
    ctx->pc = 0x14f950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x14f954: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F954u;
    {
        const bool branch_taken_0x14f954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F954u;
        // 0x14f958: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f954) {
            ctx->pc = 0x14F964u;
            goto label_14f964;
        }
    }
    ctx->pc = 0x14F95Cu;
    // 0x14f95c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x14F95Cu;
    {
        const bool branch_taken_0x14f95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F95Cu;
        // 0x14f960: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f95c) {
            ctx->pc = 0x14FA20u;
            goto label_14fa20;
        }
    }
    ctx->pc = 0x14F964u;
label_14f964:
    // 0x14f964: 0x250882a  slt         $s1, $s2, $s0
    ctx->pc = 0x14f964u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x14f968: 0x1620002d  bnez        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x14F968u;
    {
        const bool branch_taken_0x14f968 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F968u;
        // 0x14f96c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f968) {
            ctx->pc = 0x14FA20u;
            goto label_14fa20;
        }
    }
    ctx->pc = 0x14F970u;
    // 0x14f970: 0x2a420030  slti        $v0, $s2, 0x30
    ctx->pc = 0x14f970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x14f974: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x14F974u;
    {
        const bool branch_taken_0x14f974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F974u;
        // 0x14f978: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f974) {
            ctx->pc = 0x14FA20u;
            goto label_14fa20;
        }
    }
    ctx->pc = 0x14F97Cu;
    // 0x14f97c: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x14F97Cu;
    SET_GPR_U32(ctx, 31, 0x14F984u);
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x14F97Cu, 0x14F984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F984u;
label_14f984:
    // 0x14f984: 0x16200023  bnez        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x14F984u;
    {
        const bool branch_taken_0x14f984 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F984u;
        // 0x14f988: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f984) {
            ctx->pc = 0x14FA14u;
            goto label_14fa14;
        }
    }
    ctx->pc = 0x14F98Cu;
    // 0x14f98c: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x14f98cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x14f990: 0x2442c248  addiu       $v0, $v0, -0x3DB8
    ctx->pc = 0x14f990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951496));
    // 0x14f994: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x14f994u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x14f998: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x14f998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14f99c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14f99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14f9a0:
    // 0x14f9a0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x14f9a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14f9a4: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x14F9A4u;
    {
        const bool branch_taken_0x14f9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f9a4) {
            ctx->pc = 0x14F9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F9A4u;
            // 0x14f9a8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FA08u;
            goto label_14fa08;
        }
    }
    ctx->pc = 0x14F9ACu;
    // 0x14f9ac: 0x2a020018  slti        $v0, $s0, 0x18
    ctx->pc = 0x14f9acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x14f9b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14F9B0u;
    {
        const bool branch_taken_0x14f9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F9B0u;
        // 0x14f9b4: 0x9ce2c518  lwu         $v0, -0x3AE8($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4294952216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f9b0) {
            ctx->pc = 0x14F9D8u;
            goto label_14f9d8;
        }
    }
    ctx->pc = 0x14F9B8u;
    // 0x14f9b8: 0x2021017  dsrav       $v0, $v0, $s0
    ctx->pc = 0x14f9b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (GPR_U32(ctx, 16) & 0x3F));
    // 0x14f9bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14f9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14f9c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14f9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14f9c4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x14f9c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x14f9c8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14F9C8u;
    {
        const bool branch_taken_0x14f9c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f9c8) {
            ctx->pc = 0x14F9F8u;
            goto label_14f9f8;
        }
    }
    ctx->pc = 0x14F9D0u;
    // 0x14f9d0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14F9D0u;
    {
        const bool branch_taken_0x14f9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F9D0u;
        // 0x14f9d4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f9d0) {
            ctx->pc = 0x14FA08u;
            goto label_14fa08;
        }
    }
    ctx->pc = 0x14F9D8u;
label_14f9d8:
    // 0x14f9d8: 0x9cc2c51c  lwu         $v0, -0x3AE4($a2)
    ctx->pc = 0x14f9d8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4294952220)));
    // 0x14f9dc: 0x2603ffe8  addiu       $v1, $s0, -0x18
    ctx->pc = 0x14f9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
    // 0x14f9e0: 0x621017  dsrav       $v0, $v0, $v1
    ctx->pc = 0x14f9e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x14f9e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14f9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14f9e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14f9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14f9ec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x14f9ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x14f9f0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F9F0u;
    {
        const bool branch_taken_0x14f9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f9f0) {
            ctx->pc = 0x14F9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F9F0u;
            // 0x14f9f4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FA08u;
            goto label_14fa08;
        }
    }
    ctx->pc = 0x14F9F8u;
label_14f9f8:
    // 0x14f9f8: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14F9F8u;
    SET_GPR_U32(ctx, 31, 0x14FA00u);
    ctx->pc = 0x14F9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F9F8u;
    // 0x14f9fc: 0xa0850000  sb          $a1, 0x0($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14F9F8u, 0x14FA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FA00u;
label_14fa00:
    // 0x14fa00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14FA00u;
    {
        const bool branch_taken_0x14fa00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA00u;
        // 0x14fa04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa00) {
            ctx->pc = 0x14FA20u;
            goto label_14fa20;
        }
    }
    ctx->pc = 0x14FA08u;
label_14fa08:
    // 0x14fa08: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x14fa08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x14fa0c: 0x1040ffe4  beqz        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x14FA0Cu;
    {
        const bool branch_taken_0x14fa0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA0Cu;
        // 0x14fa10: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa0c) {
            ctx->pc = 0x14F9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14f9a0;
        }
    }
    ctx->pc = 0x14FA14u;
label_14fa14:
    // 0x14fa14: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14FA14u;
    SET_GPR_U32(ctx, 31, 0x14FA1Cu);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14FA14u, 0x14FA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FA1Cu;
label_14fa1c:
    // 0x14fa1c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14fa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14fa20:
    // 0x14fa20: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14fa20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14fa24: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14fa24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14fa28: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14fa28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14fa2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14fa2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14fa30: 0x3e00008  jr          $ra
    ctx->pc = 0x14FA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA30u;
        // 0x14fa34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FA38u;
}
