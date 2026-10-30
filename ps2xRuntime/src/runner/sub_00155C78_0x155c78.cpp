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

// Function: sub_00155C78
// Address: 0x155c78 - 0x155e70
void sub_00155C78_0x155c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155C78_0x155c78");
#endif

    switch (ctx->pc) {
        case 0x155c78u: goto label_155c78;
        case 0x155c7cu: goto label_155c7c;
        case 0x155c80u: goto label_155c80;
        case 0x155c84u: goto label_155c84;
        case 0x155c88u: goto label_155c88;
        case 0x155c8cu: goto label_155c8c;
        case 0x155c90u: goto label_155c90;
        case 0x155c94u: goto label_155c94;
        case 0x155c98u: goto label_155c98;
        case 0x155c9cu: goto label_155c9c;
        case 0x155ca0u: goto label_155ca0;
        case 0x155ca4u: goto label_155ca4;
        case 0x155ca8u: goto label_155ca8;
        case 0x155cacu: goto label_155cac;
        case 0x155cb0u: goto label_155cb0;
        case 0x155cb4u: goto label_155cb4;
        case 0x155cb8u: goto label_155cb8;
        case 0x155cbcu: goto label_155cbc;
        case 0x155cc0u: goto label_155cc0;
        case 0x155cc4u: goto label_155cc4;
        case 0x155cc8u: goto label_155cc8;
        case 0x155cccu: goto label_155ccc;
        case 0x155cd0u: goto label_155cd0;
        case 0x155cd4u: goto label_155cd4;
        case 0x155cd8u: goto label_155cd8;
        case 0x155cdcu: goto label_155cdc;
        case 0x155ce0u: goto label_155ce0;
        case 0x155ce4u: goto label_155ce4;
        case 0x155ce8u: goto label_155ce8;
        case 0x155cecu: goto label_155cec;
        case 0x155cf0u: goto label_155cf0;
        case 0x155cf4u: goto label_155cf4;
        case 0x155cf8u: goto label_155cf8;
        case 0x155cfcu: goto label_155cfc;
        case 0x155d00u: goto label_155d00;
        case 0x155d04u: goto label_155d04;
        case 0x155d08u: goto label_155d08;
        case 0x155d0cu: goto label_155d0c;
        case 0x155d10u: goto label_155d10;
        case 0x155d14u: goto label_155d14;
        case 0x155d18u: goto label_155d18;
        case 0x155d1cu: goto label_155d1c;
        case 0x155d20u: goto label_155d20;
        case 0x155d24u: goto label_155d24;
        case 0x155d28u: goto label_155d28;
        case 0x155d2cu: goto label_155d2c;
        case 0x155d30u: goto label_155d30;
        case 0x155d34u: goto label_155d34;
        case 0x155d38u: goto label_155d38;
        case 0x155d3cu: goto label_155d3c;
        case 0x155d40u: goto label_155d40;
        case 0x155d44u: goto label_155d44;
        case 0x155d48u: goto label_155d48;
        case 0x155d4cu: goto label_155d4c;
        case 0x155d50u: goto label_155d50;
        case 0x155d54u: goto label_155d54;
        case 0x155d58u: goto label_155d58;
        case 0x155d5cu: goto label_155d5c;
        case 0x155d60u: goto label_155d60;
        case 0x155d64u: goto label_155d64;
        case 0x155d68u: goto label_155d68;
        case 0x155d6cu: goto label_155d6c;
        case 0x155d70u: goto label_155d70;
        case 0x155d74u: goto label_155d74;
        case 0x155d78u: goto label_155d78;
        case 0x155d7cu: goto label_155d7c;
        case 0x155d80u: goto label_155d80;
        case 0x155d84u: goto label_155d84;
        case 0x155d88u: goto label_155d88;
        case 0x155d8cu: goto label_155d8c;
        case 0x155d90u: goto label_155d90;
        case 0x155d94u: goto label_155d94;
        case 0x155d98u: goto label_155d98;
        case 0x155d9cu: goto label_155d9c;
        case 0x155da0u: goto label_155da0;
        case 0x155da4u: goto label_155da4;
        case 0x155da8u: goto label_155da8;
        case 0x155dacu: goto label_155dac;
        case 0x155db0u: goto label_155db0;
        case 0x155db4u: goto label_155db4;
        case 0x155db8u: goto label_155db8;
        case 0x155dbcu: goto label_155dbc;
        case 0x155dc0u: goto label_155dc0;
        case 0x155dc4u: goto label_155dc4;
        case 0x155dc8u: goto label_155dc8;
        case 0x155dccu: goto label_155dcc;
        case 0x155dd0u: goto label_155dd0;
        case 0x155dd4u: goto label_155dd4;
        case 0x155dd8u: goto label_155dd8;
        case 0x155ddcu: goto label_155ddc;
        case 0x155de0u: goto label_155de0;
        case 0x155de4u: goto label_155de4;
        case 0x155de8u: goto label_155de8;
        case 0x155decu: goto label_155dec;
        case 0x155df0u: goto label_155df0;
        case 0x155df4u: goto label_155df4;
        case 0x155df8u: goto label_155df8;
        case 0x155dfcu: goto label_155dfc;
        case 0x155e00u: goto label_155e00;
        case 0x155e04u: goto label_155e04;
        case 0x155e08u: goto label_155e08;
        case 0x155e0cu: goto label_155e0c;
        case 0x155e10u: goto label_155e10;
        case 0x155e14u: goto label_155e14;
        case 0x155e18u: goto label_155e18;
        case 0x155e1cu: goto label_155e1c;
        case 0x155e20u: goto label_155e20;
        case 0x155e24u: goto label_155e24;
        case 0x155e28u: goto label_155e28;
        case 0x155e2cu: goto label_155e2c;
        case 0x155e30u: goto label_155e30;
        case 0x155e34u: goto label_155e34;
        case 0x155e38u: goto label_155e38;
        case 0x155e3cu: goto label_155e3c;
        case 0x155e40u: goto label_155e40;
        case 0x155e44u: goto label_155e44;
        case 0x155e48u: goto label_155e48;
        case 0x155e4cu: goto label_155e4c;
        case 0x155e50u: goto label_155e50;
        case 0x155e54u: goto label_155e54;
        case 0x155e58u: goto label_155e58;
        case 0x155e5cu: goto label_155e5c;
        case 0x155e60u: goto label_155e60;
        case 0x155e64u: goto label_155e64;
        case 0x155e68u: goto label_155e68;
        case 0x155e6cu: goto label_155e6c;
        default: break;
    }

    ctx->pc = 0x155c78u;

label_155c78:
    // 0x155c78: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x155c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_155c7c:
    // 0x155c7c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x155c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_155c80:
    // 0x155c80: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x155c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_155c84:
    // 0x155c84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x155c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155c88:
    // 0x155c88: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x155c88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_155c8c:
    // 0x155c8c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x155c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_155c90:
    // 0x155c90: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x155c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_155c94:
    // 0x155c94: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x155c94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_155c98:
    // 0x155c98: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x155c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_155c9c:
    // 0x155c9c: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x155c9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_155ca0:
    // 0x155ca0: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x155ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_155ca4:
    // 0x155ca4: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x155ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_155ca8:
    // 0x155ca8: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x155ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_155cac:
    // 0x155cac: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x155cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_155cb0:
    // 0x155cb0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x155cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_155cb4:
    // 0x155cb4: 0xc0517d8  jal         func_145F60
label_155cb8:
    if (ctx->pc == 0x155CB8u) {
        ctx->pc = 0x155CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155CB4u;
        // 0x155cb8: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155CBCu;
        goto label_155cbc;
    }
    ctx->pc = 0x155CB4u;
    SET_GPR_U32(ctx, 31, 0x155CBCu);
    ctx->pc = 0x155CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155CB4u;
    // 0x155cb8: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145F60u, 0x155CB4u, 0x155CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155CBCu;
label_155cbc:
    // 0x155cbc: 0xc05587e  jal         func_1561F8
label_155cc0:
    if (ctx->pc == 0x155CC0u) {
        ctx->pc = 0x155CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155CBCu;
        // 0x155cc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155CC4u;
        goto label_155cc4;
    }
    ctx->pc = 0x155CBCu;
    SET_GPR_U32(ctx, 31, 0x155CC4u);
    ctx->pc = 0x155CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155CBCu;
    // 0x155cc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1561F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1561F8u, 0x155CBCu, 0x155CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155CC4u;
label_155cc4:
    // 0x155cc4: 0xc055888  jal         func_156220
label_155cc8:
    if (ctx->pc == 0x155CC8u) {
        ctx->pc = 0x155CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155CC4u;
        // 0x155cc8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155CCCu;
        goto label_155ccc;
    }
    ctx->pc = 0x155CC4u;
    SET_GPR_U32(ctx, 31, 0x155CCCu);
    ctx->pc = 0x155CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155CC4u;
    // 0x155cc8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156220u, 0x155CC4u, 0x155CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155CCCu;
label_155ccc:
    // 0x155ccc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x155cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_155cd0:
    // 0x155cd0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x155cd0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_155cd4:
    // 0x155cd4: 0xc0e8c52  jal         func_3A3148
label_155cd8:
    if (ctx->pc == 0x155CD8u) {
        ctx->pc = 0x155CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155CD4u;
        // 0x155cd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155CDCu;
        goto label_155cdc;
    }
    ctx->pc = 0x155CD4u;
    SET_GPR_U32(ctx, 31, 0x155CDCu);
    ctx->pc = 0x155CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155CD4u;
    // 0x155cd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3148u, 0x155CD4u, 0x155CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155CDCu;
label_155cdc:
    // 0x155cdc: 0xc0558b2  jal         func_1562C8
label_155ce0:
    if (ctx->pc == 0x155CE0u) {
        ctx->pc = 0x155CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155CDCu;
        // 0x155ce0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155CE4u;
        goto label_155ce4;
    }
    ctx->pc = 0x155CDCu;
    SET_GPR_U32(ctx, 31, 0x155CE4u);
    ctx->pc = 0x155CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155CDCu;
    // 0x155ce0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1562C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1562C8u, 0x155CDCu, 0x155CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155CE4u;
label_155ce4:
    // 0x155ce4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x155ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_155ce8:
    // 0x155ce8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x155ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155cec:
    // 0x155cec: 0x8c62536c  lw          $v0, 0x536C($v1)
    ctx->pc = 0x155cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21356)));
label_155cf0:
    // 0x155cf0: 0x1444000d  bne         $v0, $a0, . + 4 + (0xD << 2)
label_155cf4:
    if (ctx->pc == 0x155CF4u) {
        ctx->pc = 0x155CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155CF0u;
        // 0x155cf4: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155CF8u;
        goto label_155cf8;
    }
    ctx->pc = 0x155CF0u;
    {
        const bool branch_taken_0x155cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x155CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155CF0u;
        // 0x155cf4: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155cf0) {
            ctx->pc = 0x155D28u;
            goto label_155d28;
        }
    }
    ctx->pc = 0x155CF8u;
label_155cf8:
    // 0x155cf8: 0x8e8347c4  lw          $v1, 0x47C4($s4)
    ctx->pc = 0x155cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18372)));
label_155cfc:
    // 0x155cfc: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x155cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_155d00:
    // 0x155d00: 0xc0d4456  jal         func_351158
label_155d04:
    if (ctx->pc == 0x155D04u) {
        ctx->pc = 0x155D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D00u;
        // 0x155d04: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155D08u;
        goto label_155d08;
    }
    ctx->pc = 0x155D00u;
    SET_GPR_U32(ctx, 31, 0x155D08u);
    ctx->pc = 0x155D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155D00u;
    // 0x155d04: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351158u, 0x155D00u, 0x155D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155D08u;
label_155d08:
    // 0x155d08: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x155d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_155d0c:
    // 0x155d0c: 0xc0e8c6a  jal         func_3A31A8
label_155d10:
    if (ctx->pc == 0x155D10u) {
        ctx->pc = 0x155D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D0Cu;
        // 0x155d10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155D14u;
        goto label_155d14;
    }
    ctx->pc = 0x155D0Cu;
    SET_GPR_U32(ctx, 31, 0x155D14u);
    ctx->pc = 0x155D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155D0Cu;
    // 0x155d10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A31A8u, 0x155D0Cu, 0x155D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155D14u;
label_155d14:
    // 0x155d14: 0xc0926e6  jal         func_249B98
label_155d18:
    if (ctx->pc == 0x155D18u) {
        ctx->pc = 0x155D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D14u;
        // 0x155d18: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155D1Cu;
        goto label_155d1c;
    }
    ctx->pc = 0x155D14u;
    SET_GPR_U32(ctx, 31, 0x155D1Cu);
    ctx->pc = 0x155D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155D14u;
    // 0x155d18: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249B98u, 0x155D14u, 0x155D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155D1Cu;
label_155d1c:
    // 0x155d1c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x155d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_155d20:
    // 0x155d20: 0xc0e8c6a  jal         func_3A31A8
label_155d24:
    if (ctx->pc == 0x155D24u) {
        ctx->pc = 0x155D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D20u;
        // 0x155d24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155D28u;
        goto label_155d28;
    }
    ctx->pc = 0x155D20u;
    SET_GPR_U32(ctx, 31, 0x155D28u);
    ctx->pc = 0x155D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155D20u;
    // 0x155d24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A31A8u, 0x155D20u, 0x155D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155D28u;
label_155d28:
    // 0x155d28: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x155d28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_155d2c:
    // 0x155d2c: 0x8e24cd4c  lw          $a0, -0x32B4($s1)
    ctx->pc = 0x155d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
label_155d30:
    // 0x155d30: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x155d30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_155d34:
    // 0x155d34: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x155d34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155d38:
    // 0x155d38: 0xc062a60  jal         func_18A980
label_155d3c:
    if (ctx->pc == 0x155D3Cu) {
        ctx->pc = 0x155D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D38u;
        // 0x155d3c: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155D40u;
        goto label_155d40;
    }
    ctx->pc = 0x155D38u;
    SET_GPR_U32(ctx, 31, 0x155D40u);
    ctx->pc = 0x155D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155D38u;
    // 0x155d3c: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A980u, 0x155D38u, 0x155D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155D40u;
label_155d40:
    // 0x155d40: 0x8e05cdb4  lw          $a1, -0x324C($s0)
    ctx->pc = 0x155d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_155d44:
    // 0x155d44: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x155d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_155d48:
    // 0x155d48: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x155d48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_155d4c:
    // 0x155d4c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x155d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_155d50:
    // 0x155d50: 0x60f809  jalr        $v1
label_155d54:
    if (ctx->pc == 0x155D54u) {
        ctx->pc = 0x155D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D50u;
        // 0x155d54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155D58u;
        goto label_155d58;
    }
    ctx->pc = 0x155D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x155D58u);
        ctx->pc = 0x155D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D50u;
        // 0x155d54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155D50u, 0x155D58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x155D58u;
label_155d58:
    // 0x155d58: 0xc103e28  jal         func_40F8A0
label_155d5c:
    if (ctx->pc == 0x155D5Cu) {
        ctx->pc = 0x155D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D58u;
        // 0x155d5c: 0x8e8447c4  lw          $a0, 0x47C4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155D60u;
        goto label_155d60;
    }
    ctx->pc = 0x155D58u;
    SET_GPR_U32(ctx, 31, 0x155D60u);
    ctx->pc = 0x155D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155D58u;
    // 0x155d5c: 0x8e8447c4  lw          $a0, 0x47C4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F8A0u, 0x155D58u, 0x155D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155D60u;
label_155d60:
    // 0x155d60: 0xc06181a  jal         func_186068
label_155d64:
    if (ctx->pc == 0x155D64u) {
        ctx->pc = 0x155D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D60u;
        // 0x155d64: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155D68u;
        goto label_155d68;
    }
    ctx->pc = 0x155D60u;
    SET_GPR_U32(ctx, 31, 0x155D68u);
    ctx->pc = 0x155D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155D60u;
    // 0x155d64: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186068u, 0x155D60u, 0x155D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155D68u;
label_155d68:
    // 0x155d68: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x155d68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_155d6c:
    // 0x155d6c: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x155d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_155d70:
    // 0x155d70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x155d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155d74:
    // 0x155d74: 0xc047e6c  jal         func_11F9B0
label_155d78:
    if (ctx->pc == 0x155D78u) {
        ctx->pc = 0x155D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D74u;
        // 0x155d78: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155D7Cu;
        goto label_155d7c;
    }
    ctx->pc = 0x155D74u;
    SET_GPR_U32(ctx, 31, 0x155D7Cu);
    ctx->pc = 0x155D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155D74u;
    // 0x155d78: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x155D74u, 0x155D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155D7Cu;
label_155d7c:
    // 0x155d7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x155d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_155d80:
    // 0x155d80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x155d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_155d84:
    // 0x155d84: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x155d84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_155d88:
    // 0x155d88: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x155d88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_155d8c:
    // 0x155d8c: 0xc0f809  jalr        $a2
label_155d90:
    if (ctx->pc == 0x155D90u) {
        ctx->pc = 0x155D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D8Cu;
        // 0x155d90: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155D94u;
        goto label_155d94;
    }
    ctx->pc = 0x155D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x155D94u);
        ctx->pc = 0x155D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D8Cu;
        // 0x155d90: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155D8Cu, 0x155D94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x155D94u;
label_155d94:
    // 0x155d94: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x155d94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_155d98:
    // 0x155d98: 0x2e440002  sltiu       $a0, $s2, 0x2
    ctx->pc = 0x155d98u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_155d9c:
    // 0x155d9c: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x155d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
label_155da0:
    // 0x155da0: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x155da0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_155da4:
    // 0x155da4: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x155da4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_155da8:
    // 0x155da8: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
label_155dac:
    if (ctx->pc == 0x155DACu) {
        ctx->pc = 0x155DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155DA8u;
        // 0x155dac: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155DB0u;
        goto label_155db0;
    }
    ctx->pc = 0x155DA8u;
    {
        const bool branch_taken_0x155da8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x155DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155DA8u;
        // 0x155dac: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155da8) {
            ctx->pc = 0x155D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155d70;
        }
    }
    ctx->pc = 0x155DB0u;
label_155db0:
    // 0x155db0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x155db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_155db4:
    // 0x155db4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x155db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_155db8:
    // 0x155db8: 0xc043e04  jal         func_10F810
label_155dbc:
    if (ctx->pc == 0x155DBCu) {
        ctx->pc = 0x155DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155DB8u;
        // 0x155dbc: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155DC0u;
        goto label_155dc0;
    }
    ctx->pc = 0x155DB8u;
    SET_GPR_U32(ctx, 31, 0x155DC0u);
    ctx->pc = 0x155DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155DB8u;
    // 0x155dbc: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F810u, 0x155DB8u, 0x155DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155DC0u;
label_155dc0:
    // 0x155dc0: 0x8ea5ebec  lw          $a1, -0x1414($s5)
    ctx->pc = 0x155dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294962156)));
label_155dc4:
    // 0x155dc4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x155dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_155dc8:
    // 0x155dc8: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x155dc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_155dcc:
    // 0x155dcc: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x155dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_155dd0:
    // 0x155dd0: 0x60f809  jalr        $v1
label_155dd4:
    if (ctx->pc == 0x155DD4u) {
        ctx->pc = 0x155DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155DD0u;
        // 0x155dd4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155DD8u;
        goto label_155dd8;
    }
    ctx->pc = 0x155DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x155DD8u);
        ctx->pc = 0x155DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155DD0u;
        // 0x155dd4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155DD0u, 0x155DD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x155DD8u;
label_155dd8:
    // 0x155dd8: 0xc055950  jal         func_156540
label_155ddc:
    if (ctx->pc == 0x155DDCu) {
        ctx->pc = 0x155DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155DD8u;
        // 0x155ddc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155DE0u;
        goto label_155de0;
    }
    ctx->pc = 0x155DD8u;
    SET_GPR_U32(ctx, 31, 0x155DE0u);
    ctx->pc = 0x155DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155DD8u;
    // 0x155ddc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x155DD8u, 0x155DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155DE0u;
label_155de0:
    // 0x155de0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x155de0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_155de4:
    // 0x155de4: 0xc055a5e  jal         func_156978
label_155de8:
    if (ctx->pc == 0x155DE8u) {
        ctx->pc = 0x155DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155DE4u;
        // 0x155de8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155DECu;
        goto label_155dec;
    }
    ctx->pc = 0x155DE4u;
    SET_GPR_U32(ctx, 31, 0x155DECu);
    ctx->pc = 0x155DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155DE4u;
    // 0x155de8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156978u, 0x155DE4u, 0x155DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155DECu;
label_155dec:
    // 0x155dec: 0x8ec5cdb4  lw          $a1, -0x324C($s6)
    ctx->pc = 0x155decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954420)));
label_155df0:
    // 0x155df0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x155df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_155df4:
    // 0x155df4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x155df4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_155df8:
    // 0x155df8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x155df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_155dfc:
    // 0x155dfc: 0x60f809  jalr        $v1
label_155e00:
    if (ctx->pc == 0x155E00u) {
        ctx->pc = 0x155E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155DFCu;
        // 0x155e00: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155E04u;
        goto label_155e04;
    }
    ctx->pc = 0x155DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x155E04u);
        ctx->pc = 0x155E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155DFCu;
        // 0x155e00: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155DFCu, 0x155E04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x155E04u;
label_155e04:
    // 0x155e04: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x155e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_155e08:
    // 0x155e08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155e0c:
    // 0x155e0c: 0xc0552b8  jal         func_154AE0
label_155e10:
    if (ctx->pc == 0x155E10u) {
        ctx->pc = 0x155E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E0Cu;
        // 0x155e10: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155E14u;
        goto label_155e14;
    }
    ctx->pc = 0x155E0Cu;
    SET_GPR_U32(ctx, 31, 0x155E14u);
    ctx->pc = 0x155E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155E0Cu;
    // 0x155e10: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x155E0Cu, 0x155E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155E14u;
label_155e14:
    // 0x155e14: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x155e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_155e18:
    // 0x155e18: 0xc06ba0a  jal         func_1AE828
label_155e1c:
    if (ctx->pc == 0x155E1Cu) {
        ctx->pc = 0x155E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E18u;
        // 0x155e1c: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155E20u;
        goto label_155e20;
    }
    ctx->pc = 0x155E18u;
    SET_GPR_U32(ctx, 31, 0x155E20u);
    ctx->pc = 0x155E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155E18u;
    // 0x155e1c: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x155E18u, 0x155E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155E20u;
label_155e20:
    // 0x155e20: 0x8ea5ebec  lw          $a1, -0x1414($s5)
    ctx->pc = 0x155e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294962156)));
label_155e24:
    // 0x155e24: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x155e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_155e28:
    // 0x155e28: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x155e28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_155e2c:
    // 0x155e2c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x155e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_155e30:
    // 0x155e30: 0x60f809  jalr        $v1
label_155e34:
    if (ctx->pc == 0x155E34u) {
        ctx->pc = 0x155E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E30u;
        // 0x155e34: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155E38u;
        goto label_155e38;
    }
    ctx->pc = 0x155E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x155E38u);
        ctx->pc = 0x155E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E30u;
        // 0x155e34: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155E30u, 0x155E38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x155E38u;
label_155e38:
    // 0x155e38: 0xc055880  jal         func_156200
label_155e3c:
    if (ctx->pc == 0x155E3Cu) {
        ctx->pc = 0x155E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E38u;
        // 0x155e3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155E40u;
        goto label_155e40;
    }
    ctx->pc = 0x155E38u;
    SET_GPR_U32(ctx, 31, 0x155E40u);
    ctx->pc = 0x155E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155E38u;
    // 0x155e3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156200u, 0x155E38u, 0x155E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155E40u;
label_155e40:
    // 0x155e40: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x155e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_155e44:
    // 0x155e44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155e48:
    // 0x155e48: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x155e48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_155e4c:
    // 0x155e4c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x155e4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_155e50:
    // 0x155e50: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x155e50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_155e54:
    // 0x155e54: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x155e54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_155e58:
    // 0x155e58: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x155e58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_155e5c:
    // 0x155e5c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x155e5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_155e60:
    // 0x155e60: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x155e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_155e64:
    // 0x155e64: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x155e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_155e68:
    // 0x155e68: 0x3e00008  jr          $ra
label_155e6c:
    if (ctx->pc == 0x155E6Cu) {
        ctx->pc = 0x155E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E68u;
        // 0x155e6c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155E70u;
        goto label_fallthrough_0x155e68;
    }
    ctx->pc = 0x155E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E68u;
        // 0x155e6c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x155e68:
    ctx->pc = 0x155E70u;
}
