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

// Function: sub_00152BF0
// Address: 0x152bf0 - 0x152f78
void sub_00152BF0_0x152bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152BF0_0x152bf0");
#endif

    switch (ctx->pc) {
        case 0x152c4cu: goto label_152c4c;
        case 0x152c60u: goto label_152c60;
        case 0x152c7cu: goto label_152c7c;
        case 0x152ca4u: goto label_152ca4;
        case 0x152cc8u: goto label_152cc8;
        case 0x152d30u: goto label_152d30;
        case 0x152d50u: goto label_152d50;
        case 0x152d8cu: goto label_152d8c;
        case 0x152ddcu: goto label_152ddc;
        case 0x152decu: goto label_152dec;
        case 0x152e1cu: goto label_152e1c;
        case 0x152e34u: goto label_152e34;
        case 0x152e60u: goto label_152e60;
        case 0x152e7cu: goto label_152e7c;
        case 0x152eccu: goto label_152ecc;
        case 0x152f0cu: goto label_152f0c;
        case 0x152f40u: goto label_152f40;
        case 0x152f5cu: goto label_152f5c;
        default: break;
    }

    ctx->pc = 0x152bf0u;

    // 0x152bf0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x152bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x152bf4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x152bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x152bf8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x152bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x152bfc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x152bfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c00: 0x8c43c5d8  lw          $v1, -0x3A28($v0)
    ctx->pc = 0x152c00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50C5D8u));
    // 0x152c04: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x152c04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c08: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x152c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x152c0c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x152c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x152c10: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x152c10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x152c14: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x152c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x152c18: 0x104000d0  beqz        $v0, . + 4 + (0xD0 << 2)
    ctx->pc = 0x152C18u;
    {
        const bool branch_taken_0x152c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C18u;
        // 0x152c1c: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c18) {
            ctx->pc = 0x152F5Cu;
            goto label_152f5c;
        }
    }
    ctx->pc = 0x152C20u;
    // 0x152c20: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x152c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x152c24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x152c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x152c28: 0x2442d5b0  addiu       $v0, $v0, -0x2A50
    ctx->pc = 0x152c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956464));
    // 0x152c2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x152c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x152c30: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x152c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x152c34: 0x800008  jr          $a0
    ctx->pc = 0x152C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x152C3Cu: goto label_152c3c;
            case 0x152CECu: goto label_152cec;
            case 0x152D94u: goto label_152d94;
            case 0x152E9Cu: goto label_152e9c;
            case 0x152EF0u: goto label_152ef0;
            case 0x152F18u: goto label_152f18;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152C34u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x152C3Cu;
label_152c3c:
    // 0x152c3c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x152c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x152c40: 0x245046a4  addiu       $s0, $v0, 0x46A4
    ctx->pc = 0x152c40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 18084));
    // 0x152c44: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x152C44u;
    SET_GPR_U32(ctx, 31, 0x152C4Cu);
    ctx->pc = 0x152C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152C44u;
    // 0x152c48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x152C44u, 0x152C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152C4Cu;
label_152c4c:
    // 0x152c4c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x152c4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x152c50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x152C50u;
    {
        const bool branch_taken_0x152c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C50u;
        // 0x152c54: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c50) {
            ctx->pc = 0x152C70u;
            goto label_152c70;
        }
    }
    ctx->pc = 0x152C58u;
    // 0x152c58: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x152C58u;
    SET_GPR_U32(ctx, 31, 0x152C60u);
    ctx->pc = 0x152C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152C58u;
    // 0x152c5c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x152C58u, 0x152C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152C60u;
label_152c60:
    // 0x152c60: 0x2c420021  sltiu       $v0, $v0, 0x21
    ctx->pc = 0x152c60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x152c64: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x152C64u;
    {
        const bool branch_taken_0x152c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C64u;
        // 0x152c68: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c64) {
            ctx->pc = 0x152C84u;
            goto label_152c84;
        }
    }
    ctx->pc = 0x152C6Cu;
    // 0x152c6c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x152c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_152c70:
    // 0x152c70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x152c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c74: 0xc05486e  jal         func_1521B8
    ctx->pc = 0x152C74u;
    SET_GPR_U32(ctx, 31, 0x152C7Cu);
    ctx->pc = 0x152C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152C74u;
    // 0x152c78: 0x8c45c5ec  lw          $a1, -0x3A14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952428)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1521B8u, 0x152C74u, 0x152C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152C7Cu;
label_152c7c:
    // 0x152c7c: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x152C7Cu;
    {
        const bool branch_taken_0x152c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C7Cu;
        // 0x152c80: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c7c) {
            ctx->pc = 0x152F60u;
            goto label_152f60;
        }
    }
    ctx->pc = 0x152C84u;
label_152c84:
    // 0x152c84: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x152c84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x152c88: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x152c88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
    // 0x152c8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x152c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c90: 0x24a5d590  addiu       $a1, $a1, -0x2A70
    ctx->pc = 0x152c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956432));
    // 0x152c94: 0x24c64650  addiu       $a2, $a2, 0x4650
    ctx->pc = 0x152c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18000));
    // 0x152c98: 0x24e74658  addiu       $a3, $a3, 0x4658
    ctx->pc = 0x152c98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18008));
    // 0x152c9c: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x152C9Cu;
    SET_GPR_U32(ctx, 31, 0x152CA4u);
    ctx->pc = 0x152CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152C9Cu;
    // 0x152ca0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x152C9Cu, 0x152CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152CA4u;
label_152ca4:
    // 0x152ca4: 0x2603ffc4  addiu       $v1, $s0, -0x3C
    ctx->pc = 0x152ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967236));
    // 0x152ca8: 0x8e04ffc4  lw          $a0, -0x3C($s0)
    ctx->pc = 0x152ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967236)));
    // 0x152cac: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x152cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x152cb0: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x152cb0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
    // 0x152cb4: 0x25294740  addiu       $t1, $t1, 0x4740
    ctx->pc = 0x152cb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 18240));
    // 0x152cb8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x152cb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152cbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x152cbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152cc0: 0xc111638  jal         func_4458E0
    ctx->pc = 0x152CC0u;
    SET_GPR_U32(ctx, 31, 0x152CC8u);
    ctx->pc = 0x152CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152CC0u;
    // 0x152cc4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4458E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4458E0u, 0x152CC0u, 0x152CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152CC8u;
label_152cc8:
    // 0x152cc8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x152cc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ccc: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x152CCCu;
    {
        const bool branch_taken_0x152ccc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x152CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152CCCu;
        // 0x152cd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ccc) {
            ctx->pc = 0x152CE4u;
            goto label_152ce4;
        }
    }
    ctx->pc = 0x152CD4u;
    // 0x152cd4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x152cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x152cd8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x152cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152cdc: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x152CDCu;
    {
        const bool branch_taken_0x152cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152CDCu;
        // 0x152ce0: 0xac43c5ec  sw          $v1, -0x3A14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152cdc) {
            ctx->pc = 0x152F38u;
            goto label_152f38;
        }
    }
    ctx->pc = 0x152CE4u;
label_152ce4:
    // 0x152ce4: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x152CE4u;
    {
        const bool branch_taken_0x152ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152CE4u;
        // 0x152ce8: 0xae62c5d8  sw          $v0, -0x3A28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294952408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ce4) {
            ctx->pc = 0x152F5Cu;
            goto label_152f5c;
        }
    }
    ctx->pc = 0x152CECu;
label_152cec:
    // 0x152cec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x152cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152cf0: 0x14c2009b  bne         $a2, $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x152CF0u;
    {
        const bool branch_taken_0x152cf0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x152CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152CF0u;
        // 0x152cf4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152cf0) {
            ctx->pc = 0x152F60u;
            goto label_152f60;
        }
    }
    ctx->pc = 0x152CF8u;
    // 0x152cf8: 0x4e0008d  bltz        $a3, . + 4 + (0x8D << 2)
    ctx->pc = 0x152CF8u;
    {
        const bool branch_taken_0x152cf8 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x152CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152CF8u;
        // 0x152cfc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152cf8) {
            ctx->pc = 0x152F30u;
            goto label_152f30;
        }
    }
    ctx->pc = 0x152D00u;
    // 0x152d00: 0x18e0001c  blez        $a3, . + 4 + (0x1C << 2)
    ctx->pc = 0x152D00u;
    {
        const bool branch_taken_0x152d00 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x152D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D00u;
        // 0x152d04: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d00) {
            ctx->pc = 0x152D74u;
            goto label_152d74;
        }
    }
    ctx->pc = 0x152D08u;
    // 0x152d08: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x152d08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x152d0c: 0x261046a4  addiu       $s0, $s0, 0x46A4
    ctx->pc = 0x152d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18084));
    // 0x152d10: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x152d10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x152d14: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x152d14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
    // 0x152d18: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x152d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d1c: 0x24a5d580  addiu       $a1, $a1, -0x2A80
    ctx->pc = 0x152d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956416));
    // 0x152d20: 0x24c64650  addiu       $a2, $a2, 0x4650
    ctx->pc = 0x152d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18000));
    // 0x152d24: 0x24e74658  addiu       $a3, $a3, 0x4658
    ctx->pc = 0x152d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18008));
    // 0x152d28: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x152D28u;
    SET_GPR_U32(ctx, 31, 0x152D30u);
    ctx->pc = 0x152D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152D28u;
    // 0x152d2c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x152D28u, 0x152D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D30u;
label_152d30:
    // 0x152d30: 0x8e05ffc8  lw          $a1, -0x38($s0)
    ctx->pc = 0x152d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967240)));
    // 0x152d34: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x152d34u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
    // 0x152d38: 0x8e04ffc4  lw          $a0, -0x3C($s0)
    ctx->pc = 0x152d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967236)));
    // 0x152d3c: 0x25294b40  addiu       $t1, $t1, 0x4B40
    ctx->pc = 0x152d3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 19264));
    // 0x152d40: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x152d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x152d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d48: 0xc111638  jal         func_4458E0
    ctx->pc = 0x152D48u;
    SET_GPR_U32(ctx, 31, 0x152D50u);
    ctx->pc = 0x152D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152D48u;
    // 0x152d4c: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4458E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4458E0u, 0x152D48u, 0x152D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D50u;
label_152d50:
    // 0x152d50: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x152d50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d54: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x152D54u;
    {
        const bool branch_taken_0x152d54 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x152D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D54u;
        // 0x152d58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d54) {
            ctx->pc = 0x152D6Cu;
            goto label_152d6c;
        }
    }
    ctx->pc = 0x152D5Cu;
    // 0x152d5c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x152d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x152d60: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x152d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d64: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x152D64u;
    {
        const bool branch_taken_0x152d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D64u;
        // 0x152d68: 0xac43c5ec  sw          $v1, -0x3A14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d64) {
            ctx->pc = 0x152F38u;
            goto label_152f38;
        }
    }
    ctx->pc = 0x152D6Cu;
label_152d6c:
    // 0x152d6c: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x152D6Cu;
    {
        const bool branch_taken_0x152d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D6Cu;
        // 0x152d70: 0xae62c5d8  sw          $v0, -0x3A28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294952408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d6c) {
            ctx->pc = 0x152F5Cu;
            goto label_152f5c;
        }
    }
    ctx->pc = 0x152D74u;
label_152d74:
    // 0x152d74: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x152d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x152d78: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x152d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x152d7c: 0xac62c5ec  sw          $v0, -0x3A14($v1)
    ctx->pc = 0x152d7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x50C5ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C5ECu, _value); } while (0);
    // 0x152d80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x152d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152d84: 0xc05486e  jal         func_1521B8
    ctx->pc = 0x152D84u;
    SET_GPR_U32(ctx, 31, 0x152D8Cu);
    ctx->pc = 0x152D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152D84u;
    // 0x152d88: 0x2405fffc  addiu       $a1, $zero, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1521B8u, 0x152D84u, 0x152D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D8Cu;
label_152d8c:
    // 0x152d8c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x152D8Cu;
    {
        const bool branch_taken_0x152d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D8Cu;
        // 0x152d90: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d8c) {
            ctx->pc = 0x152F60u;
            goto label_152f60;
        }
    }
    ctx->pc = 0x152D94u;
label_152d94:
    // 0x152d94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x152d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152d98: 0x14c20071  bne         $a2, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x152D98u;
    {
        const bool branch_taken_0x152d98 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x152D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D98u;
        // 0x152d9c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d98) {
            ctx->pc = 0x152F60u;
            goto label_152f60;
        }
    }
    ctx->pc = 0x152DA0u;
    // 0x152da0: 0x4e00062  bltz        $a3, . + 4 + (0x62 << 2)
    ctx->pc = 0x152DA0u;
    {
        const bool branch_taken_0x152da0 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x152DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152DA0u;
        // 0x152da4: 0x24e2fffe  addiu       $v0, $a3, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152da0) {
            ctx->pc = 0x152F2Cu;
            goto label_152f2c;
        }
    }
    ctx->pc = 0x152DA8u;
    // 0x152da8: 0x28420013  slti        $v0, $v0, 0x13
    ctx->pc = 0x152da8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x152dac: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x152DACu;
    {
        const bool branch_taken_0x152dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152DACu;
        // 0x152db0: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152dac) {
            ctx->pc = 0x152DF4u;
            goto label_152df4;
        }
    }
    ctx->pc = 0x152DB4u;
    // 0x152db4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x152db4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x152db8: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x152db8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x152dbc: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x152dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
    // 0x152dc0: 0x3c08005e  lui         $t0, 0x5E
    ctx->pc = 0x152dc0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)94 << 16));
    // 0x152dc4: 0x24a5d580  addiu       $a1, $a1, -0x2A80
    ctx->pc = 0x152dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956416));
    // 0x152dc8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x152dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152dcc: 0x24c64650  addiu       $a2, $a2, 0x4650
    ctx->pc = 0x152dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18000));
    // 0x152dd0: 0x24e74658  addiu       $a3, $a3, 0x4658
    ctx->pc = 0x152dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18008));
    // 0x152dd4: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x152DD4u;
    SET_GPR_U32(ctx, 31, 0x152DDCu);
    ctx->pc = 0x152DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152DD4u;
    // 0x152dd8: 0x250846a4  addiu       $t0, $t0, 0x46A4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 18084));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x152DD4u, 0x152DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152DDCu;
label_152ddc:
    // 0x152ddc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x152ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x152de0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x152de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152de4: 0xc05486e  jal         func_1521B8
    ctx->pc = 0x152DE4u;
    SET_GPR_U32(ctx, 31, 0x152DECu);
    ctx->pc = 0x152DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152DE4u;
    // 0x152de8: 0x8c65c5ec  lw          $a1, -0x3A14($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952428)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1521B8u, 0x152DE4u, 0x152DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152DECu;
label_152dec:
    // 0x152dec: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x152DECu;
    {
        const bool branch_taken_0x152dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152DECu;
        // 0x152df0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152dec) {
            ctx->pc = 0x152F60u;
            goto label_152f60;
        }
    }
    ctx->pc = 0x152DF4u;
label_152df4:
    // 0x152df4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x152df4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x152df8: 0x245146a4  addiu       $s1, $v0, 0x46A4
    ctx->pc = 0x152df8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 18084));
    // 0x152dfc: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x152dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x152e00: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x152e00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
    // 0x152e04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x152e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e08: 0x24a5d590  addiu       $a1, $a1, -0x2A70
    ctx->pc = 0x152e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956432));
    // 0x152e0c: 0x24c64650  addiu       $a2, $a2, 0x4650
    ctx->pc = 0x152e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18000));
    // 0x152e10: 0x24e74658  addiu       $a3, $a3, 0x4658
    ctx->pc = 0x152e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18008));
    // 0x152e14: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x152E14u;
    SET_GPR_U32(ctx, 31, 0x152E1Cu);
    ctx->pc = 0x152E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152E14u;
    // 0x152e18: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x152E14u, 0x152E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E1Cu;
label_152e1c:
    // 0x152e1c: 0x2632ffc4  addiu       $s2, $s1, -0x3C
    ctx->pc = 0x152e1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967236));
    // 0x152e20: 0x8e24ffc4  lw          $a0, -0x3C($s1)
    ctx->pc = 0x152e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967236)));
    // 0x152e24: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x152e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e28: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x152e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x152e2c: 0xc1116b0  jal         func_445AC0
    ctx->pc = 0x152E2Cu;
    SET_GPR_U32(ctx, 31, 0x152E34u);
    ctx->pc = 0x152E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152E2Cu;
    // 0x152e30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445AC0u, 0x152E2Cu, 0x152E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E34u;
label_152e34:
    // 0x152e34: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x152e34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e38: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x152E38u;
    {
        const bool branch_taken_0x152e38 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x152E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E38u;
        // 0x152e3c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152e38) {
            ctx->pc = 0x152E50u;
            goto label_152e50;
        }
    }
    ctx->pc = 0x152E40u;
    // 0x152e40: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x152e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x152e44: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x152e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e48: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x152E48u;
    {
        const bool branch_taken_0x152e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E48u;
        // 0x152e4c: 0xac43c5ec  sw          $v1, -0x3A14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152e48) {
            ctx->pc = 0x152F38u;
            goto label_152f38;
        }
    }
    ctx->pc = 0x152E50u;
label_152e50:
    // 0x152e50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x152e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x152e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e58: 0xc111590  jal         func_445640
    ctx->pc = 0x152E58u;
    SET_GPR_U32(ctx, 31, 0x152E60u);
    ctx->pc = 0x152E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152E58u;
    // 0x152e5c: 0x2606c5ec  addiu       $a2, $s0, -0x3A14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952428));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445640u, 0x152E58u, 0x152E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E60u;
label_152e60:
    // 0x152e60: 0x8e05c5ec  lw          $a1, -0x3A14($s0)
    ctx->pc = 0x152e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952428)));
    // 0x152e64: 0x4a00034  bltz        $a1, . + 4 + (0x34 << 2)
    ctx->pc = 0x152E64u;
    {
        const bool branch_taken_0x152e64 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x152E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E64u;
        // 0x152e68: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152e64) {
            ctx->pc = 0x152F38u;
            goto label_152f38;
        }
    }
    ctx->pc = 0x152E6Cu;
    // 0x152e6c: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x152e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x152e70: 0x8e24ffc4  lw          $a0, -0x3C($s1)
    ctx->pc = 0x152e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967236)));
    // 0x152e74: 0xc111438  jal         func_4450E0
    ctx->pc = 0x152E74u;
    SET_GPR_U32(ctx, 31, 0x152E7Cu);
    ctx->pc = 0x152E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152E74u;
    // 0x152e78: 0x24070202  addiu       $a3, $zero, 0x202 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4450E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4450E0u, 0x152E74u, 0x152E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E7Cu;
label_152e7c:
    // 0x152e7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x152e7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e80: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x152E80u;
    {
        const bool branch_taken_0x152e80 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x152E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E80u;
        // 0x152e84: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152e80) {
            ctx->pc = 0x152E94u;
            goto label_152e94;
        }
    }
    ctx->pc = 0x152E88u;
    // 0x152e88: 0xae03c5ec  sw          $v1, -0x3A14($s0)
    ctx->pc = 0x152e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952428), GPR_U32(ctx, 3));
    // 0x152e8c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x152E8Cu;
    {
        const bool branch_taken_0x152e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E8Cu;
        // 0x152e90: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152e8c) {
            ctx->pc = 0x152F38u;
            goto label_152f38;
        }
    }
    ctx->pc = 0x152E94u;
label_152e94:
    // 0x152e94: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x152E94u;
    {
        const bool branch_taken_0x152e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E94u;
        // 0x152e98: 0xae62c5d8  sw          $v0, -0x3A28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294952408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152e94) {
            ctx->pc = 0x152F5Cu;
            goto label_152f5c;
        }
    }
    ctx->pc = 0x152E9Cu;
label_152e9c:
    // 0x152e9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x152e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152ea0: 0x14c2002f  bne         $a2, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x152EA0u;
    {
        const bool branch_taken_0x152ea0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x152EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152EA0u;
        // 0x152ea4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ea0) {
            ctx->pc = 0x152F60u;
            goto label_152f60;
        }
    }
    ctx->pc = 0x152EA8u;
    // 0x152ea8: 0x4e00020  bltz        $a3, . + 4 + (0x20 << 2)
    ctx->pc = 0x152EA8u;
    {
        const bool branch_taken_0x152ea8 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x152EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152EA8u;
        // 0x152eac: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ea8) {
            ctx->pc = 0x152F2Cu;
            goto label_152f2c;
        }
    }
    ctx->pc = 0x152EB0u;
    // 0x152eb0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x152eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x152eb4: 0x24424668  addiu       $v0, $v0, 0x4668
    ctx->pc = 0x152eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18024));
    // 0x152eb8: 0xac67c5f0  sw          $a3, -0x3A10($v1)
    ctx->pc = 0x152eb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x50C5F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C5F0u, _value); } while (0);
    // 0x152ebc: 0x8c460038  lw          $a2, 0x38($v0)
    ctx->pc = 0x152ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x152ec0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x152ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ec4: 0xc111532  jal         func_4454C8
    ctx->pc = 0x152EC4u;
    SET_GPR_U32(ctx, 31, 0x152ECCu);
    ctx->pc = 0x152EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152EC4u;
    // 0x152ec8: 0x8c450024  lw          $a1, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4454C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4454C8u, 0x152EC4u, 0x152ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152ECCu;
label_152ecc:
    // 0x152ecc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x152eccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ed0: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x152ED0u;
    {
        const bool branch_taken_0x152ed0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x152ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152ED0u;
        // 0x152ed4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ed0) {
            ctx->pc = 0x152EE8u;
            goto label_152ee8;
        }
    }
    ctx->pc = 0x152ED8u;
    // 0x152ed8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x152ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x152edc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x152edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ee0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x152EE0u;
    {
        const bool branch_taken_0x152ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152EE0u;
        // 0x152ee4: 0xac43c5ec  sw          $v1, -0x3A14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ee0) {
            ctx->pc = 0x152F38u;
            goto label_152f38;
        }
    }
    ctx->pc = 0x152EE8u;
label_152ee8:
    // 0x152ee8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x152EE8u;
    {
        const bool branch_taken_0x152ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152EE8u;
        // 0x152eec: 0xae62c5d8  sw          $v0, -0x3A28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294952408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ee8) {
            ctx->pc = 0x152F5Cu;
            goto label_152f5c;
        }
    }
    ctx->pc = 0x152EF0u;
label_152ef0:
    // 0x152ef0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x152ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152ef4: 0x14c2001a  bne         $a2, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x152EF4u;
    {
        const bool branch_taken_0x152ef4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x152EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152EF4u;
        // 0x152ef8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ef4) {
            ctx->pc = 0x152F60u;
            goto label_152f60;
        }
    }
    ctx->pc = 0x152EFCu;
    // 0x152efc: 0x4e0000b  bltz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x152EFCu;
    {
        const bool branch_taken_0x152efc = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x152F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152EFCu;
        // 0x152f00: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152efc) {
            ctx->pc = 0x152F2Cu;
            goto label_152f2c;
        }
    }
    ctx->pc = 0x152F04u;
    // 0x152f04: 0xc111490  jal         func_445240
    ctx->pc = 0x152F04u;
    SET_GPR_U32(ctx, 31, 0x152F0Cu);
    ctx->pc = 0x152F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152F04u;
    // 0x152f08: 0x8c44c5f0  lw          $a0, -0x3A10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445240u, 0x152F04u, 0x152F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152F0Cu;
label_152f0c:
    // 0x152f0c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x152f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x152f10: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x152F10u;
    {
        const bool branch_taken_0x152f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F10u;
        // 0x152f14: 0xae63c5d8  sw          $v1, -0x3A28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294952408), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152f10) {
            ctx->pc = 0x152F5Cu;
            goto label_152f5c;
        }
    }
    ctx->pc = 0x152F18u;
label_152f18:
    // 0x152f18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x152f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152f1c: 0x14c20010  bne         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x152F1Cu;
    {
        const bool branch_taken_0x152f1c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x152F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F1Cu;
        // 0x152f20: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152f1c) {
            ctx->pc = 0x152F60u;
            goto label_152f60;
        }
    }
    ctx->pc = 0x152F24u;
    // 0x152f24: 0x4e10008  bgez        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x152F24u;
    {
        const bool branch_taken_0x152f24 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x152F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F24u;
        // 0x152f28: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152f24) {
            ctx->pc = 0x152F48u;
            goto label_152f48;
        }
    }
    ctx->pc = 0x152F2Cu;
label_152f2c:
    // 0x152f2c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x152f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_152f30:
    // 0x152f30: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x152f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f34: 0xac47c5ec  sw          $a3, -0x3A14($v0)
    ctx->pc = 0x152f34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952428), GPR_U32(ctx, 7));
label_152f38:
    // 0x152f38: 0xc05486e  jal         func_1521B8
    ctx->pc = 0x152F38u;
    SET_GPR_U32(ctx, 31, 0x152F40u);
    ctx->pc = 0x152F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152F38u;
    // 0x152f3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1521B8u, 0x152F38u, 0x152F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152F40u;
label_152f40:
    // 0x152f40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x152F40u;
    {
        const bool branch_taken_0x152f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F40u;
        // 0x152f44: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152f40) {
            ctx->pc = 0x152F60u;
            goto label_152f60;
        }
    }
    ctx->pc = 0x152F48u;
label_152f48:
    // 0x152f48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x152f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x152f4c: 0xac62c5f0  sw          $v0, -0x3A10($v1)
    ctx->pc = 0x152f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952432), GPR_U32(ctx, 2));
    // 0x152f50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x152f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152f54: 0xc05486e  jal         func_1521B8
    ctx->pc = 0x152F54u;
    SET_GPR_U32(ctx, 31, 0x152F5Cu);
    ctx->pc = 0x152F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152F54u;
    // 0x152f58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1521B8u, 0x152F54u, 0x152F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152F5Cu;
label_152f5c:
    // 0x152f5c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x152f5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_152f60:
    // 0x152f60: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x152f60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x152f64: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x152f64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x152f68: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x152f68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x152f6c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x152f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x152f70: 0x3e00008  jr          $ra
    ctx->pc = 0x152F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F70u;
        // 0x152f74: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152F78u;
}
