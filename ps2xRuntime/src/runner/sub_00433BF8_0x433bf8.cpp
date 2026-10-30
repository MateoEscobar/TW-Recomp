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

// Function: sub_00433BF8
// Address: 0x433bf8 - 0x433f38
void sub_00433BF8_0x433bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00433BF8_0x433bf8");
#endif

    switch (ctx->pc) {
        case 0x433c4cu: goto label_433c4c;
        case 0x433c64u: goto label_433c64;
        case 0x433ca0u: goto label_433ca0;
        case 0x433cdcu: goto label_433cdc;
        case 0x433d34u: goto label_433d34;
        case 0x433d68u: goto label_433d68;
        default: break;
    }

    ctx->pc = 0x433bf8u;

    // 0x433bf8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x433bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x433bfc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x433bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x433c00: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x433c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x433c04: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x433c04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433c08: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x433c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x433c0c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x433c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433c10: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x433c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x433c14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x433c14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433c18: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x433c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x433c1c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x433c1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433c20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x433c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x433c24: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x433c24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433c28: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x433C28u;
    {
        const bool branch_taken_0x433c28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x433C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433C28u;
        // 0x433c2c: 0xa5980b  movn        $s3, $a1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433c28) {
            ctx->pc = 0x433C38u;
            goto label_433c38;
        }
    }
    ctx->pc = 0x433C30u;
    // 0x433c30: 0x128000b8  beqz        $s4, . + 4 + (0xB8 << 2)
    ctx->pc = 0x433C30u;
    {
        const bool branch_taken_0x433c30 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x433C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433C30u;
        // 0x433c34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433c30) {
            ctx->pc = 0x433F14u;
            goto label_433f14;
        }
    }
    ctx->pc = 0x433C38u;
label_433c38:
    // 0x433c38: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x433c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x433c3c: 0x108000af  beqz        $a0, . + 4 + (0xAF << 2)
    ctx->pc = 0x433C3Cu;
    {
        const bool branch_taken_0x433c3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x433c3c) {
            ctx->pc = 0x433EFCu;
            goto label_433efc;
        }
    }
    ctx->pc = 0x433C44u;
    // 0x433c44: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x433C44u;
    SET_GPR_U32(ctx, 31, 0x433C4Cu);
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x433C44u, 0x433C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433C4Cu;
label_433c4c:
    // 0x433c4c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x433c4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x433c50: 0x144000aa  bnez        $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x433C50u;
    {
        const bool branch_taken_0x433c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x433C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433C50u;
        // 0x433c54: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433c50) {
            ctx->pc = 0x433EFCu;
            goto label_433efc;
        }
    }
    ctx->pc = 0x433C58u;
    // 0x433c58: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x433c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x433c5c: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x433C5Cu;
    SET_GPR_U32(ctx, 31, 0x433C64u);
    ctx->pc = 0x433C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433C5Cu;
    // 0x433c60: 0x24a5cb00  addiu       $a1, $a1, -0x3500 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x433C5Cu, 0x433C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433C64u;
label_433c64:
    // 0x433c64: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x433C64u;
    {
        const bool branch_taken_0x433c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x433c64) {
            ctx->pc = 0x433C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x433C64u;
            // 0x433c68: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x433CD0u;
            goto label_433cd0;
        }
    }
    ctx->pc = 0x433C6Cu;
    // 0x433c6c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x433c6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x433c70: 0x120000a8  beqz        $s0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x433C70u;
    {
        const bool branch_taken_0x433c70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x433C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433C70u;
        // 0x433c74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433c70) {
            ctx->pc = 0x433F14u;
            goto label_433f14;
        }
    }
    ctx->pc = 0x433C78u;
    // 0x433c78: 0x2462ff7f  addiu       $v0, $v1, -0x81
    ctx->pc = 0x433c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967167));
    // 0x433c7c: 0x2c42001f  sltiu       $v0, $v0, 0x1F
    ctx->pc = 0x433c7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x433c80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x433C80u;
    {
        const bool branch_taken_0x433c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x433C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433C80u;
        // 0x433c84: 0x2e820002  sltiu       $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x433c80) {
            ctx->pc = 0x433C98u;
            goto label_433c98;
        }
    }
    ctx->pc = 0x433C88u;
    // 0x433c88: 0x2462ff20  addiu       $v0, $v1, -0xE0
    ctx->pc = 0x433c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967072));
    // 0x433c8c: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x433c8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x433c90: 0x1040009a  beqz        $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x433C90u;
    {
        const bool branch_taken_0x433c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x433C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433C90u;
        // 0x433c94: 0x2e820002  sltiu       $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x433c90) {
            ctx->pc = 0x433EFCu;
            goto label_433efc;
        }
    }
    ctx->pc = 0x433C98u;
label_433c98:
    // 0x433c98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x433C98u;
    {
        const bool branch_taken_0x433c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x433C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433C98u;
        // 0x433c9c: 0x92060001  lbu         $a2, 0x1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433c98) {
            ctx->pc = 0x433CA8u;
            goto label_433ca8;
        }
    }
    ctx->pc = 0x433CA0u;
label_433ca0:
    // 0x433ca0: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x433CA0u;
    {
        const bool branch_taken_0x433ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433CA0u;
        // 0x433ca4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433ca0) {
            ctx->pc = 0x433F14u;
            goto label_433f14;
        }
    }
    ctx->pc = 0x433CA8u;
label_433ca8:
    // 0x433ca8: 0x24c2ffc0  addiu       $v0, $a2, -0x40
    ctx->pc = 0x433ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967232));
    // 0x433cac: 0x2c42003f  sltiu       $v0, $v0, 0x3F
    ctx->pc = 0x433cacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)63) ? 1 : 0);
    // 0x433cb0: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x433CB0u;
    {
        const bool branch_taken_0x433cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x433CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433CB0u;
        // 0x433cb4: 0x31a00  sll         $v1, $v1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433cb0) {
            ctx->pc = 0x433D18u;
            goto label_433d18;
        }
    }
    ctx->pc = 0x433CB8u;
    // 0x433cb8: 0x24c2ff80  addiu       $v0, $a2, -0x80
    ctx->pc = 0x433cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967168));
    // 0x433cbc: 0x2c42007d  sltiu       $v0, $v0, 0x7D
    ctx->pc = 0x433cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x433cc0: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x433CC0u;
    {
        const bool branch_taken_0x433cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x433CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433CC0u;
        // 0x433cc4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433cc0) {
            ctx->pc = 0x433D1Cu;
            goto label_433d1c;
        }
    }
    ctx->pc = 0x433CC8u;
    // 0x433cc8: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x433CC8u;
    {
        const bool branch_taken_0x433cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433CC8u;
        // 0x433ccc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433cc8) {
            ctx->pc = 0x433F14u;
            goto label_433f14;
        }
    }
    ctx->pc = 0x433CD0u;
label_433cd0:
    // 0x433cd0: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x433cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x433cd4: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x433CD4u;
    SET_GPR_U32(ctx, 31, 0x433CDCu);
    ctx->pc = 0x433CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433CD4u;
    // 0x433cd8: 0x24a5cb08  addiu       $a1, $a1, -0x34F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x433CD4u, 0x433CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433CDCu;
label_433cdc:
    // 0x433cdc: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x433CDCu;
    {
        const bool branch_taken_0x433cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x433cdc) {
            ctx->pc = 0x433CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x433CDCu;
            // 0x433ce0: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x433D28u;
            goto label_433d28;
        }
    }
    ctx->pc = 0x433CE4u;
    // 0x433ce4: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x433ce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x433ce8: 0x1200008a  beqz        $s0, . + 4 + (0x8A << 2)
    ctx->pc = 0x433CE8u;
    {
        const bool branch_taken_0x433ce8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x433CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433CE8u;
        // 0x433cec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433ce8) {
            ctx->pc = 0x433F14u;
            goto label_433f14;
        }
    }
    ctx->pc = 0x433CF0u;
    // 0x433cf0: 0x2462ff5f  addiu       $v0, $v1, -0xA1
    ctx->pc = 0x433cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967135));
    // 0x433cf4: 0x2c42005e  sltiu       $v0, $v0, 0x5E
    ctx->pc = 0x433cf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)94) ? 1 : 0);
    // 0x433cf8: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x433CF8u;
    {
        const bool branch_taken_0x433cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x433CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433CF8u;
        // 0x433cfc: 0x2e820002  sltiu       $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x433cf8) {
            ctx->pc = 0x433EFCu;
            goto label_433efc;
        }
    }
    ctx->pc = 0x433D00u;
    // 0x433d00: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x433D00u;
    {
        const bool branch_taken_0x433d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x433D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433D00u;
        // 0x433d04: 0x92060001  lbu         $a2, 0x1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433d00) {
            ctx->pc = 0x433CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_433ca0;
        }
    }
    ctx->pc = 0x433D08u;
    // 0x433d08: 0x24c2ff5f  addiu       $v0, $a2, -0xA1
    ctx->pc = 0x433d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967135));
    // 0x433d0c: 0x2c42005e  sltiu       $v0, $v0, 0x5E
    ctx->pc = 0x433d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)94) ? 1 : 0);
    // 0x433d10: 0x1040ffe3  beqz        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x433D10u;
    {
        const bool branch_taken_0x433d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x433D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433D10u;
        // 0x433d14: 0x31a00  sll         $v1, $v1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433d10) {
            ctx->pc = 0x433CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_433ca0;
        }
    }
    ctx->pc = 0x433D18u;
label_433d18:
    // 0x433d18: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x433d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_433d1c:
    // 0x433d1c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x433d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x433d20: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x433D20u;
    {
        const bool branch_taken_0x433d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433D20u;
        // 0x433d24: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433d20) {
            ctx->pc = 0x433F14u;
            goto label_433f14;
        }
    }
    ctx->pc = 0x433D28u;
label_433d28:
    // 0x433d28: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x433d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x433d2c: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x433D2Cu;
    SET_GPR_U32(ctx, 31, 0x433D34u);
    ctx->pc = 0x433D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433D2Cu;
    // 0x433d30: 0x24a5cb10  addiu       $a1, $a1, -0x34F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x433D2Cu, 0x433D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433D34u;
label_433d34:
    // 0x433d34: 0x14400071  bnez        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x433D34u;
    {
        const bool branch_taken_0x433d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x433d34) {
            ctx->pc = 0x433EFCu;
            goto label_433efc;
        }
    }
    ctx->pc = 0x433D3Cu;
    // 0x433d3c: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x433D3Cu;
    {
        const bool branch_taken_0x433d3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x433d3c) {
            ctx->pc = 0x433D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x433D3Cu;
            // 0x433d40: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x433D50u;
            goto label_433d50;
        }
    }
    ctx->pc = 0x433D44u;
    // 0x433d44: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x433d44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x433d48: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x433D48u;
    {
        const bool branch_taken_0x433d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433D48u;
        // 0x433d4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433d48) {
            ctx->pc = 0x433F14u;
            goto label_433f14;
        }
    }
    ctx->pc = 0x433D50u;
label_433d50:
    // 0x433d50: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x433d50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x433d54: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x433d54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433d58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x433d58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433d5c: 0x1280ffd0  beqz        $s4, . + 4 + (-0x30 << 2)
    ctx->pc = 0x433D5Cu;
    {
        const bool branch_taken_0x433d5c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x433D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433D5Cu;
        // 0x433d60: 0x2480a  movz        $t1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433d5c) {
            ctx->pc = 0x433CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_433ca0;
        }
    }
    ctx->pc = 0x433D64u;
    // 0x433d64: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x433d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_433d68:
    // 0x433d68: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x433d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x433d6c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x433d6cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x433d70: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x433D70u;
    {
        const bool branch_taken_0x433d70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x433D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433D70u;
        // 0x433d74: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433d70) {
            ctx->pc = 0x433E04u;
            goto label_433e04;
        }
    }
    ctx->pc = 0x433D78u;
    // 0x433d78: 0x28820029  slti        $v0, $a0, 0x29
    ctx->pc = 0x433d78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x433d7c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x433D7Cu;
    {
        const bool branch_taken_0x433d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x433D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433D7Cu;
        // 0x433d80: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433d7c) {
            ctx->pc = 0x433DB4u;
            goto label_433db4;
        }
    }
    ctx->pc = 0x433D84u;
    // 0x433d84: 0x10820019  beq         $a0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x433D84u;
    {
        const bool branch_taken_0x433d84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x433D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433D84u;
        // 0x433d88: 0x2882001c  slti        $v0, $a0, 0x1C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)28) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x433d84) {
            ctx->pc = 0x433DECu;
            goto label_433dec;
        }
    }
    ctx->pc = 0x433D8Cu;
    // 0x433d8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x433D8Cu;
    {
        const bool branch_taken_0x433d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x433D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433D8Cu;
        // 0x433d90: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433d8c) {
            ctx->pc = 0x433DA4u;
            goto label_433da4;
        }
    }
    ctx->pc = 0x433D94u;
    // 0x433d94: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x433D94u;
    {
        const bool branch_taken_0x433d94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x433D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433D94u;
        // 0x433d98: 0x2482ffdf  addiu       $v0, $a0, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433d94) {
            ctx->pc = 0x433E1Cu;
            goto label_433e1c;
        }
    }
    ctx->pc = 0x433D9Cu;
    // 0x433d9c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x433D9Cu;
    {
        const bool branch_taken_0x433d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433D9Cu;
        // 0x433da0: 0x2403005d  addiu       $v1, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433d9c) {
            ctx->pc = 0x433E24u;
            goto label_433e24;
        }
    }
    ctx->pc = 0x433DA4u;
label_433da4:
    // 0x433da4: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x433DA4u;
    {
        const bool branch_taken_0x433da4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x433DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433DA4u;
        // 0x433da8: 0x2482ffdf  addiu       $v0, $a0, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433da4) {
            ctx->pc = 0x433DF4u;
            goto label_433df4;
        }
    }
    ctx->pc = 0x433DACu;
    // 0x433dac: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x433DACu;
    {
        const bool branch_taken_0x433dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433DACu;
        // 0x433db0: 0x2403005d  addiu       $v1, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433dac) {
            ctx->pc = 0x433E24u;
            goto label_433e24;
        }
    }
    ctx->pc = 0x433DB4u;
label_433db4:
    // 0x433db4: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x433db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x433db8: 0x10820014  beq         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x433DB8u;
    {
        const bool branch_taken_0x433db8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x433DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433DB8u;
        // 0x433dbc: 0x28820043  slti        $v0, $a0, 0x43 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)67) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x433db8) {
            ctx->pc = 0x433E0Cu;
            goto label_433e0c;
        }
    }
    ctx->pc = 0x433DC0u;
    // 0x433dc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x433DC0u;
    {
        const bool branch_taken_0x433dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x433DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433DC0u;
        // 0x433dc4: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433dc0) {
            ctx->pc = 0x433DD8u;
            goto label_433dd8;
        }
    }
    ctx->pc = 0x433DC8u;
    // 0x433dc8: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x433DC8u;
    {
        const bool branch_taken_0x433dc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x433DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433DC8u;
        // 0x433dcc: 0x2482ffdf  addiu       $v0, $a0, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433dc8) {
            ctx->pc = 0x433DFCu;
            goto label_433dfc;
        }
    }
    ctx->pc = 0x433DD0u;
    // 0x433dd0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x433DD0u;
    {
        const bool branch_taken_0x433dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433DD0u;
        // 0x433dd4: 0x2403005d  addiu       $v1, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433dd0) {
            ctx->pc = 0x433E24u;
            goto label_433e24;
        }
    }
    ctx->pc = 0x433DD8u;
label_433dd8:
    // 0x433dd8: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x433dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x433ddc: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x433DDCu;
    {
        const bool branch_taken_0x433ddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x433DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433DDCu;
        // 0x433de0: 0x2482ffdf  addiu       $v0, $a0, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433ddc) {
            ctx->pc = 0x433E14u;
            goto label_433e14;
        }
    }
    ctx->pc = 0x433DE4u;
    // 0x433de4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x433DE4u;
    {
        const bool branch_taken_0x433de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433DE4u;
        // 0x433de8: 0x2403005d  addiu       $v1, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433de4) {
            ctx->pc = 0x433E24u;
            goto label_433e24;
        }
    }
    ctx->pc = 0x433DECu;
label_433dec:
    // 0x433dec: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x433DECu;
    {
        const bool branch_taken_0x433dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433DECu;
        // 0x433df0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433dec) {
            ctx->pc = 0x433E34u;
            goto label_433e34;
        }
    }
    ctx->pc = 0x433DF4u;
label_433df4:
    // 0x433df4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x433DF4u;
    {
        const bool branch_taken_0x433df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433DF4u;
        // 0x433df8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433df4) {
            ctx->pc = 0x433E34u;
            goto label_433e34;
        }
    }
    ctx->pc = 0x433DFCu;
label_433dfc:
    // 0x433dfc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x433DFCu;
    {
        const bool branch_taken_0x433dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433DFCu;
        // 0x433e00: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433dfc) {
            ctx->pc = 0x433E34u;
            goto label_433e34;
        }
    }
    ctx->pc = 0x433E04u;
label_433e04:
    // 0x433e04: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x433E04u;
    {
        const bool branch_taken_0x433e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433E04u;
        // 0x433e08: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433e04) {
            ctx->pc = 0x433E34u;
            goto label_433e34;
        }
    }
    ctx->pc = 0x433E0Cu;
label_433e0c:
    // 0x433e0c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x433E0Cu;
    {
        const bool branch_taken_0x433e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433E0Cu;
        // 0x433e10: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433e0c) {
            ctx->pc = 0x433E34u;
            goto label_433e34;
        }
    }
    ctx->pc = 0x433E14u;
label_433e14:
    // 0x433e14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x433E14u;
    {
        const bool branch_taken_0x433e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433E14u;
        // 0x433e18: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433e14) {
            ctx->pc = 0x433E34u;
            goto label_433e34;
        }
    }
    ctx->pc = 0x433E1Cu;
label_433e1c:
    // 0x433e1c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x433E1Cu;
    {
        const bool branch_taken_0x433e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433E1Cu;
        // 0x433e20: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433e1c) {
            ctx->pc = 0x433E34u;
            goto label_433e34;
        }
    }
    ctx->pc = 0x433E24u;
label_433e24:
    // 0x433e24: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x433e24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x433e28: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x433e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x433e2c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x433e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x433e30: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x433e30u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_433e34:
    // 0x433e34: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x433e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x433e38: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x433e38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x433e3c: 0x1252818  mult        $a1, $t1, $a1
    ctx->pc = 0x433e3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x433e40: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x433e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x433e44: 0x24636ba0  addiu       $v1, $v1, 0x6BA0
    ctx->pc = 0x433e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27552));
    // 0x433e48: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x433e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x433e4c: 0x244269f0  addiu       $v0, $v0, 0x69F0
    ctx->pc = 0x433e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27120));
    // 0x433e50: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x433e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x433e54: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x433e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x433e58: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x433e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x433e5c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x433e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x433e60: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x433e60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x433e64: 0x1040ff8e  beqz        $v0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x433E64u;
    {
        const bool branch_taken_0x433e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x433E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433E64u;
        // 0x433e68: 0x8c890000  lw          $t1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433e64) {
            ctx->pc = 0x433CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_433ca0;
        }
    }
    ctx->pc = 0x433E6Cu;
    // 0x433e6c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x433e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x433e70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x433e70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x433e74: 0x2442cb20  addiu       $v0, $v0, -0x34E0
    ctx->pc = 0x433e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953760));
    // 0x433e78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x433e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x433e7c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x433e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x433e80: 0x800008  jr          $a0
    ctx->pc = 0x433E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x433CA0u: goto label_433ca0;
            case 0x433E88u: goto label_433e88;
            case 0x433E98u: goto label_433e98;
            case 0x433EACu: goto label_433eac;
            case 0x433EB8u: goto label_433eb8;
            case 0x433EE0u: goto label_433ee0;
            case 0x433EE4u: goto label_433ee4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x433E80u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x433E88u;
label_433e88:
    // 0x433e88: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x433e88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x433e8c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x433e8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433e90: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x433E90u;
    {
        const bool branch_taken_0x433e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433E90u;
        // 0x433e94: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433e90) {
            ctx->pc = 0x433F14u;
            goto label_433f14;
        }
    }
    ctx->pc = 0x433E98u;
label_433e98:
    // 0x433e98: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x433e98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x433e9c: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x433e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x433ea0: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x433ea0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x433ea4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x433EA4u;
    {
        const bool branch_taken_0x433ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433EA4u;
        // 0x433ea8: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433ea4) {
            ctx->pc = 0x433F14u;
            goto label_433f14;
        }
    }
    ctx->pc = 0x433EACu;
label_433eac:
    // 0x433eac: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x433eacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x433eb0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x433EB0u;
    {
        const bool branch_taken_0x433eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433EB0u;
        // 0x433eb4: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433eb0) {
            ctx->pc = 0x433EC8u;
            goto label_433ec8;
        }
    }
    ctx->pc = 0x433EB8u;
label_433eb8:
    // 0x433eb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x433eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x433ebc: 0xf01023  subu        $v0, $a3, $s0
    ctx->pc = 0x433ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x433ec0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x433ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x433ec4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x433ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_433ec8:
    // 0x433ec8: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x433ec8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x433ecc: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x433eccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x433ed0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x433ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x433ed4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x433ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x433ed8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x433ED8u;
    {
        const bool branch_taken_0x433ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433ED8u;
        // 0x433edc: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433ed8) {
            ctx->pc = 0x433F14u;
            goto label_433f14;
        }
    }
    ctx->pc = 0x433EE0u;
label_433ee0:
    // 0x433ee0: 0x25070001  addiu       $a3, $t0, 0x1
    ctx->pc = 0x433ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_433ee4:
    // 0x433ee4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x433ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x433ee8: 0xd4102b  sltu        $v0, $a2, $s4
    ctx->pc = 0x433ee8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x433eec: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
    ctx->pc = 0x433EECu;
    {
        const bool branch_taken_0x433eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x433EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433EECu;
        // 0x433ef0: 0x2061021  addu        $v0, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433eec) {
            ctx->pc = 0x433D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_433d68;
        }
    }
    ctx->pc = 0x433EF4u;
    // 0x433ef4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x433EF4u;
    {
        const bool branch_taken_0x433ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433EF4u;
        // 0x433ef8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433ef4) {
            ctx->pc = 0x433F14u;
            goto label_433f14;
        }
    }
    ctx->pc = 0x433EFCu;
label_433efc:
    // 0x433efc: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x433EFCu;
    {
        const bool branch_taken_0x433efc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x433efc) {
            ctx->pc = 0x433F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x433EFCu;
            // 0x433f00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x433F14u;
            goto label_433f14;
        }
    }
    ctx->pc = 0x433F04u;
    // 0x433f04: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x433f04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x433f08: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x433f08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x433f0c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x433f0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x433f10: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x433f10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_433f14:
    // 0x433f14: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x433f14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x433f18: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x433f18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x433f1c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x433f1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x433f20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x433f20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x433f24: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x433f24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x433f28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x433f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x433f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x433F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x433F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433F2Cu;
        // 0x433f30: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x433F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x433F34u;
    // 0x433f34: 0x0  nop
    ctx->pc = 0x433f34u;
    // NOP
    ctx->pc = 0x433f38u;
}
