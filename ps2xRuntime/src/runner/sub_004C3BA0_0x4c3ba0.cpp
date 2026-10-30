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

// Function: sub_004C3BA0
// Address: 0x4c3ba0 - 0x4c3e68
void sub_004C3BA0_0x4c3ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C3BA0_0x4c3ba0");
#endif

    switch (ctx->pc) {
        case 0x4c3ba0u: goto label_4c3ba0;
        case 0x4c3ba4u: goto label_4c3ba4;
        case 0x4c3ba8u: goto label_4c3ba8;
        case 0x4c3bacu: goto label_4c3bac;
        case 0x4c3bb0u: goto label_4c3bb0;
        case 0x4c3bb4u: goto label_4c3bb4;
        case 0x4c3bb8u: goto label_4c3bb8;
        case 0x4c3bbcu: goto label_4c3bbc;
        case 0x4c3bc0u: goto label_4c3bc0;
        case 0x4c3bc4u: goto label_4c3bc4;
        case 0x4c3bc8u: goto label_4c3bc8;
        case 0x4c3bccu: goto label_4c3bcc;
        case 0x4c3bd0u: goto label_4c3bd0;
        case 0x4c3bd4u: goto label_4c3bd4;
        case 0x4c3bd8u: goto label_4c3bd8;
        case 0x4c3bdcu: goto label_4c3bdc;
        case 0x4c3be0u: goto label_4c3be0;
        case 0x4c3be4u: goto label_4c3be4;
        case 0x4c3be8u: goto label_4c3be8;
        case 0x4c3becu: goto label_4c3bec;
        case 0x4c3bf0u: goto label_4c3bf0;
        case 0x4c3bf4u: goto label_4c3bf4;
        case 0x4c3bf8u: goto label_4c3bf8;
        case 0x4c3bfcu: goto label_4c3bfc;
        case 0x4c3c00u: goto label_4c3c00;
        case 0x4c3c04u: goto label_4c3c04;
        case 0x4c3c08u: goto label_4c3c08;
        case 0x4c3c0cu: goto label_4c3c0c;
        case 0x4c3c10u: goto label_4c3c10;
        case 0x4c3c14u: goto label_4c3c14;
        case 0x4c3c18u: goto label_4c3c18;
        case 0x4c3c1cu: goto label_4c3c1c;
        case 0x4c3c20u: goto label_4c3c20;
        case 0x4c3c24u: goto label_4c3c24;
        case 0x4c3c28u: goto label_4c3c28;
        case 0x4c3c2cu: goto label_4c3c2c;
        case 0x4c3c30u: goto label_4c3c30;
        case 0x4c3c34u: goto label_4c3c34;
        case 0x4c3c38u: goto label_4c3c38;
        case 0x4c3c3cu: goto label_4c3c3c;
        case 0x4c3c40u: goto label_4c3c40;
        case 0x4c3c44u: goto label_4c3c44;
        case 0x4c3c48u: goto label_4c3c48;
        case 0x4c3c4cu: goto label_4c3c4c;
        case 0x4c3c50u: goto label_4c3c50;
        case 0x4c3c54u: goto label_4c3c54;
        case 0x4c3c58u: goto label_4c3c58;
        case 0x4c3c5cu: goto label_4c3c5c;
        case 0x4c3c60u: goto label_4c3c60;
        case 0x4c3c64u: goto label_4c3c64;
        case 0x4c3c68u: goto label_4c3c68;
        case 0x4c3c6cu: goto label_4c3c6c;
        case 0x4c3c70u: goto label_4c3c70;
        case 0x4c3c74u: goto label_4c3c74;
        case 0x4c3c78u: goto label_4c3c78;
        case 0x4c3c7cu: goto label_4c3c7c;
        case 0x4c3c80u: goto label_4c3c80;
        case 0x4c3c84u: goto label_4c3c84;
        case 0x4c3c88u: goto label_4c3c88;
        case 0x4c3c8cu: goto label_4c3c8c;
        case 0x4c3c90u: goto label_4c3c90;
        case 0x4c3c94u: goto label_4c3c94;
        case 0x4c3c98u: goto label_4c3c98;
        case 0x4c3c9cu: goto label_4c3c9c;
        case 0x4c3ca0u: goto label_4c3ca0;
        case 0x4c3ca4u: goto label_4c3ca4;
        case 0x4c3ca8u: goto label_4c3ca8;
        case 0x4c3cacu: goto label_4c3cac;
        case 0x4c3cb0u: goto label_4c3cb0;
        case 0x4c3cb4u: goto label_4c3cb4;
        case 0x4c3cb8u: goto label_4c3cb8;
        case 0x4c3cbcu: goto label_4c3cbc;
        case 0x4c3cc0u: goto label_4c3cc0;
        case 0x4c3cc4u: goto label_4c3cc4;
        case 0x4c3cc8u: goto label_4c3cc8;
        case 0x4c3cccu: goto label_4c3ccc;
        case 0x4c3cd0u: goto label_4c3cd0;
        case 0x4c3cd4u: goto label_4c3cd4;
        case 0x4c3cd8u: goto label_4c3cd8;
        case 0x4c3cdcu: goto label_4c3cdc;
        case 0x4c3ce0u: goto label_4c3ce0;
        case 0x4c3ce4u: goto label_4c3ce4;
        case 0x4c3ce8u: goto label_4c3ce8;
        case 0x4c3cecu: goto label_4c3cec;
        case 0x4c3cf0u: goto label_4c3cf0;
        case 0x4c3cf4u: goto label_4c3cf4;
        case 0x4c3cf8u: goto label_4c3cf8;
        case 0x4c3cfcu: goto label_4c3cfc;
        case 0x4c3d00u: goto label_4c3d00;
        case 0x4c3d04u: goto label_4c3d04;
        case 0x4c3d08u: goto label_4c3d08;
        case 0x4c3d0cu: goto label_4c3d0c;
        case 0x4c3d10u: goto label_4c3d10;
        case 0x4c3d14u: goto label_4c3d14;
        case 0x4c3d18u: goto label_4c3d18;
        case 0x4c3d1cu: goto label_4c3d1c;
        case 0x4c3d20u: goto label_4c3d20;
        case 0x4c3d24u: goto label_4c3d24;
        case 0x4c3d28u: goto label_4c3d28;
        case 0x4c3d2cu: goto label_4c3d2c;
        case 0x4c3d30u: goto label_4c3d30;
        case 0x4c3d34u: goto label_4c3d34;
        case 0x4c3d38u: goto label_4c3d38;
        case 0x4c3d3cu: goto label_4c3d3c;
        case 0x4c3d40u: goto label_4c3d40;
        case 0x4c3d44u: goto label_4c3d44;
        case 0x4c3d48u: goto label_4c3d48;
        case 0x4c3d4cu: goto label_4c3d4c;
        case 0x4c3d50u: goto label_4c3d50;
        case 0x4c3d54u: goto label_4c3d54;
        case 0x4c3d58u: goto label_4c3d58;
        case 0x4c3d5cu: goto label_4c3d5c;
        case 0x4c3d60u: goto label_4c3d60;
        case 0x4c3d64u: goto label_4c3d64;
        case 0x4c3d68u: goto label_4c3d68;
        case 0x4c3d6cu: goto label_4c3d6c;
        case 0x4c3d70u: goto label_4c3d70;
        case 0x4c3d74u: goto label_4c3d74;
        case 0x4c3d78u: goto label_4c3d78;
        case 0x4c3d7cu: goto label_4c3d7c;
        case 0x4c3d80u: goto label_4c3d80;
        case 0x4c3d84u: goto label_4c3d84;
        case 0x4c3d88u: goto label_4c3d88;
        case 0x4c3d8cu: goto label_4c3d8c;
        case 0x4c3d90u: goto label_4c3d90;
        case 0x4c3d94u: goto label_4c3d94;
        case 0x4c3d98u: goto label_4c3d98;
        case 0x4c3d9cu: goto label_4c3d9c;
        case 0x4c3da0u: goto label_4c3da0;
        case 0x4c3da4u: goto label_4c3da4;
        case 0x4c3da8u: goto label_4c3da8;
        case 0x4c3dacu: goto label_4c3dac;
        case 0x4c3db0u: goto label_4c3db0;
        case 0x4c3db4u: goto label_4c3db4;
        case 0x4c3db8u: goto label_4c3db8;
        case 0x4c3dbcu: goto label_4c3dbc;
        case 0x4c3dc0u: goto label_4c3dc0;
        case 0x4c3dc4u: goto label_4c3dc4;
        case 0x4c3dc8u: goto label_4c3dc8;
        case 0x4c3dccu: goto label_4c3dcc;
        case 0x4c3dd0u: goto label_4c3dd0;
        case 0x4c3dd4u: goto label_4c3dd4;
        case 0x4c3dd8u: goto label_4c3dd8;
        case 0x4c3ddcu: goto label_4c3ddc;
        case 0x4c3de0u: goto label_4c3de0;
        case 0x4c3de4u: goto label_4c3de4;
        case 0x4c3de8u: goto label_4c3de8;
        case 0x4c3decu: goto label_4c3dec;
        case 0x4c3df0u: goto label_4c3df0;
        case 0x4c3df4u: goto label_4c3df4;
        case 0x4c3df8u: goto label_4c3df8;
        case 0x4c3dfcu: goto label_4c3dfc;
        case 0x4c3e00u: goto label_4c3e00;
        case 0x4c3e04u: goto label_4c3e04;
        case 0x4c3e08u: goto label_4c3e08;
        case 0x4c3e0cu: goto label_4c3e0c;
        case 0x4c3e10u: goto label_4c3e10;
        case 0x4c3e14u: goto label_4c3e14;
        case 0x4c3e18u: goto label_4c3e18;
        case 0x4c3e1cu: goto label_4c3e1c;
        case 0x4c3e20u: goto label_4c3e20;
        case 0x4c3e24u: goto label_4c3e24;
        case 0x4c3e28u: goto label_4c3e28;
        case 0x4c3e2cu: goto label_4c3e2c;
        case 0x4c3e30u: goto label_4c3e30;
        case 0x4c3e34u: goto label_4c3e34;
        case 0x4c3e38u: goto label_4c3e38;
        case 0x4c3e3cu: goto label_4c3e3c;
        case 0x4c3e40u: goto label_4c3e40;
        case 0x4c3e44u: goto label_4c3e44;
        case 0x4c3e48u: goto label_4c3e48;
        case 0x4c3e4cu: goto label_4c3e4c;
        case 0x4c3e50u: goto label_4c3e50;
        case 0x4c3e54u: goto label_4c3e54;
        case 0x4c3e58u: goto label_4c3e58;
        case 0x4c3e5cu: goto label_4c3e5c;
        case 0x4c3e60u: goto label_4c3e60;
        case 0x4c3e64u: goto label_4c3e64;
        default: break;
    }

    ctx->pc = 0x4c3ba0u;

label_4c3ba0:
    // 0x4c3ba0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4c3ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4c3ba4:
    // 0x4c3ba4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4c3ba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c3ba8:
    // 0x4c3ba8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c3ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4c3bac:
    // 0x4c3bac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c3bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4c3bb0:
    // 0x4c3bb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c3bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c3bb4:
    // 0x4c3bb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c3bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4c3bb8:
    // 0x4c3bb8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c3bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4c3bbc:
    // 0x4c3bbc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4c3bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_4c3bc0:
    // 0x4c3bc0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4c3bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_4c3bc4:
    // 0x4c3bc4: 0x1200009d  beqz        $s0, . + 4 + (0x9D << 2)
label_4c3bc8:
    if (ctx->pc == 0x4C3BC8u) {
        ctx->pc = 0x4C3BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3BC4u;
        // 0x4c3bc8: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3BCCu;
        goto label_4c3bcc;
    }
    ctx->pc = 0x4C3BC4u;
    {
        const bool branch_taken_0x4c3bc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3BC4u;
        // 0x4c3bc8: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3bc4) {
            ctx->pc = 0x4C3E3Cu;
            goto label_4c3e3c;
        }
    }
    ctx->pc = 0x4C3BCCu;
label_4c3bcc:
    // 0x4c3bcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4c3bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c3bd0:
    // 0x4c3bd0: 0x8e030300  lw          $v1, 0x300($s0)
    ctx->pc = 0x4c3bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
label_4c3bd4:
    // 0x4c3bd4: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x4c3bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
label_4c3bd8:
    // 0x4c3bd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4c3bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c3bdc:
    // 0x4c3bdc: 0xae000310  sw          $zero, 0x310($s0)
    ctx->pc = 0x4c3bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 0));
label_4c3be0:
    // 0x4c3be0: 0xae000138  sw          $zero, 0x138($s0)
    ctx->pc = 0x4c3be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
label_4c3be4:
    // 0x4c3be4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_4c3be8:
    if (ctx->pc == 0x4C3BE8u) {
        ctx->pc = 0x4C3BECu;
        goto label_4c3bec;
    }
    ctx->pc = 0x4C3BE4u;
    {
        const bool branch_taken_0x4c3be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3be4) {
            ctx->pc = 0x4C3C38u;
            goto label_4c3c38;
        }
    }
    ctx->pc = 0x4C3BECu;
label_4c3bec:
    // 0x4c3bec: 0x8e040308  lw          $a0, 0x308($s0)
    ctx->pc = 0x4c3becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 776)));
label_4c3bf0:
    // 0x4c3bf0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4c3bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c3bf4:
    // 0x4c3bf4: 0x0  nop
    ctx->pc = 0x4c3bf4u;
    // NOP
label_4c3bf8:
    // 0x4c3bf8: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x4c3bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_4c3bfc:
    // 0x4c3bfc: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_4c3c00:
    if (ctx->pc == 0x4C3C00u) {
        ctx->pc = 0x4C3C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3BFCu;
        // 0x4c3c00: 0x8e020300  lw          $v0, 0x300($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3C04u;
        goto label_4c3c04;
    }
    ctx->pc = 0x4C3BFCu;
    {
        const bool branch_taken_0x4c3bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3bfc) {
            ctx->pc = 0x4C3C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C3BFCu;
            // 0x4c3c00: 0x8e020300  lw          $v0, 0x300($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C3C28u;
            goto label_4c3c28;
        }
    }
    ctx->pc = 0x4C3C04u;
label_4c3c04:
    // 0x4c3c04: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x4c3c04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
label_4c3c08:
    // 0x4c3c08: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x4c3c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4c3c0c:
    // 0x4c3c0c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x4c3c0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_4c3c10:
    // 0x4c3c10: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_4c3c14:
    if (ctx->pc == 0x4C3C14u) {
        ctx->pc = 0x4C3C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3C10u;
        // 0x4c3c14: 0x8e020300  lw          $v0, 0x300($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3C18u;
        goto label_4c3c18;
    }
    ctx->pc = 0x4C3C10u;
    {
        const bool branch_taken_0x4c3c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c3c10) {
            ctx->pc = 0x4C3C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C3C10u;
            // 0x4c3c14: 0x8e020300  lw          $v0, 0x300($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C3C28u;
            goto label_4c3c28;
        }
    }
    ctx->pc = 0x4C3C18u;
label_4c3c18:
    // 0x4c3c18: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x4c3c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4c3c1c:
    // 0x4c3c1c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x4c3c1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4c3c20:
    // 0x4c3c20: 0xe2300a  movz        $a2, $a3, $v0
    ctx->pc = 0x4c3c20u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
label_4c3c24:
    // 0x4c3c24: 0x8e020300  lw          $v0, 0x300($s0)
    ctx->pc = 0x4c3c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
label_4c3c28:
    // 0x4c3c28: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4c3c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4c3c2c:
    // 0x4c3c2c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x4c3c2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4c3c30:
    // 0x4c3c30: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_4c3c34:
    if (ctx->pc == 0x4C3C34u) {
        ctx->pc = 0x4C3C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3C30u;
        // 0x4c3c34: 0x2484017c  addiu       $a0, $a0, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 380));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3C38u;
        goto label_4c3c38;
    }
    ctx->pc = 0x4C3C30u;
    {
        const bool branch_taken_0x4c3c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C3C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3C30u;
        // 0x4c3c34: 0x2484017c  addiu       $a0, $a0, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 380));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3c30) {
            ctx->pc = 0x4C3BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c3bf8;
        }
    }
    ctx->pc = 0x4C3C38u;
label_4c3c38:
    // 0x4c3c38: 0x10c0002b  beqz        $a2, . + 4 + (0x2B << 2)
label_4c3c3c:
    if (ctx->pc == 0x4C3C3Cu) {
        ctx->pc = 0x4C3C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3C38u;
        // 0x4c3c3c: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3C40u;
        goto label_4c3c40;
    }
    ctx->pc = 0x4C3C38u;
    {
        const bool branch_taken_0x4c3c38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3C38u;
        // 0x4c3c3c: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3c38) {
            ctx->pc = 0x4C3CE8u;
            goto label_4c3ce8;
        }
    }
    ctx->pc = 0x4C3C40u;
label_4c3c40:
    // 0x4c3c40: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x4c3c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_4c3c44:
    // 0x4c3c44: 0x3c080053  lui         $t0, 0x53
    ctx->pc = 0x4c3c44u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)83 << 16));
label_4c3c48:
    // 0x4c3c48: 0x26050358  addiu       $a1, $s0, 0x358
    ctx->pc = 0x4c3c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 856));
label_4c3c4c:
    // 0x4c3c4c: 0x8c642790  lw          $a0, 0x2790($v1)
    ctx->pc = 0x4c3c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10128)));
label_4c3c50:
    // 0x4c3c50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4c3c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4c3c54:
    // 0x4c3c54: 0x2607020c  addiu       $a3, $s0, 0x20C
    ctx->pc = 0x4c3c54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 524));
label_4c3c58:
    // 0x4c3c58: 0x8d06278c  lw          $a2, 0x278C($t0)
    ctx->pc = 0x4c3c58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 10124)));
label_4c3c5c:
    // 0x4c3c5c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4c3c5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c3c60:
    // 0x4c3c60: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x4c3c60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4c3c64:
    // 0x4c3c64: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x4c3c64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4c3c68:
    // 0x4c3c68: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x4c3c68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4c3c6c:
    // 0x4c3c6c: 0xc132384  jal         func_4C8E10
label_4c3c70:
    if (ctx->pc == 0x4C3C70u) {
        ctx->pc = 0x4C3C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3C6Cu;
        // 0x4c3c70: 0xae020304  sw          $v0, 0x304($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3C74u;
        goto label_4c3c74;
    }
    ctx->pc = 0x4C3C6Cu;
    SET_GPR_U32(ctx, 31, 0x4C3C74u);
    ctx->pc = 0x4C3C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3C6Cu;
    // 0x4c3c70: 0xae020304  sw          $v0, 0x304($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8E10u, 0x4C3C6Cu, 0x4C3C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3C74u;
label_4c3c74:
    // 0x4c3c74: 0x2411001d  addiu       $s1, $zero, 0x1D
    ctx->pc = 0x4c3c74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_4c3c78:
    // 0x4c3c78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c3c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c3c7c:
    // 0x4c3c7c: 0xc131226  jal         func_4C4898
label_4c3c80:
    if (ctx->pc == 0x4C3C80u) {
        ctx->pc = 0x4C3C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3C7Cu;
        // 0x4c3c80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3C84u;
        goto label_4c3c84;
    }
    ctx->pc = 0x4C3C7Cu;
    SET_GPR_U32(ctx, 31, 0x4C3C84u);
    ctx->pc = 0x4C3C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3C7Cu;
    // 0x4c3c80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C4898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C4898u, 0x4C3C7Cu, 0x4C3C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3C84u;
label_4c3c84:
    // 0x4c3c84: 0x0  nop
    ctx->pc = 0x4c3c84u;
    // NOP
label_4c3c88:
    // 0x4c3c88: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x4c3c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_4c3c8c:
    // 0x4c3c8c: 0x8e030158  lw          $v1, 0x158($s0)
    ctx->pc = 0x4c3c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
label_4c3c90:
    // 0x4c3c90: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x4c3c90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4c3c94:
    // 0x4c3c94: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x4c3c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_4c3c98:
    // 0x4c3c98: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x4c3c98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4c3c9c:
    // 0x4c3c9c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_4c3ca0:
    if (ctx->pc == 0x4C3CA0u) {
        ctx->pc = 0x4C3CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3C9Cu;
        // 0x4c3ca0: 0xae000280  sw          $zero, 0x280($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3CA4u;
        goto label_4c3ca4;
    }
    ctx->pc = 0x4C3C9Cu;
    {
        const bool branch_taken_0x4c3c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3c9c) {
            ctx->pc = 0x4C3CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C3C9Cu;
            // 0x4c3ca0: 0xae000280  sw          $zero, 0x280($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C3CBCu;
            goto label_4c3cbc;
        }
    }
    ctx->pc = 0x4C3CA4u;
label_4c3ca4:
    // 0x4c3ca4: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x4c3ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_4c3ca8:
    // 0x4c3ca8: 0x40f809  jalr        $v0
label_4c3cac:
    if (ctx->pc == 0x4C3CACu) {
        ctx->pc = 0x4C3CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3CA8u;
        // 0x4c3cac: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3CB0u;
        goto label_4c3cb0;
    }
    ctx->pc = 0x4C3CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C3CB0u);
        ctx->pc = 0x4C3CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3CA8u;
        // 0x4c3cac: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C3CA8u, 0x4C3CB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C3CB0u;
label_4c3cb0:
    // 0x4c3cb0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4c3cb4:
    if (ctx->pc == 0x4C3CB4u) {
        ctx->pc = 0x4C3CB8u;
        goto label_4c3cb8;
    }
    ctx->pc = 0x4C3CB0u;
    {
        const bool branch_taken_0x4c3cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c3cb0) {
            ctx->pc = 0x4C3C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c3c88;
        }
    }
    ctx->pc = 0x4C3CB8u;
label_4c3cb8:
    // 0x4c3cb8: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x4c3cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
label_4c3cbc:
    // 0x4c3cbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c3cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c3cc0:
    // 0x4c3cc0: 0xae000340  sw          $zero, 0x340($s0)
    ctx->pc = 0x4c3cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 0));
label_4c3cc4:
    // 0x4c3cc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4c3cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c3cc8:
    // 0x4c3cc8: 0xc131226  jal         func_4C4898
label_4c3ccc:
    if (ctx->pc == 0x4C3CCCu) {
        ctx->pc = 0x4C3CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3CC8u;
        // 0x4c3ccc: 0xae000348  sw          $zero, 0x348($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 840), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3CD0u;
        goto label_4c3cd0;
    }
    ctx->pc = 0x4C3CC8u;
    SET_GPR_U32(ctx, 31, 0x4C3CD0u);
    ctx->pc = 0x4C3CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3CC8u;
    // 0x4c3ccc: 0xae000348  sw          $zero, 0x348($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 840), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C4898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C4898u, 0x4C3CC8u, 0x4C3CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3CD0u;
label_4c3cd0:
    // 0x4c3cd0: 0x8e842790  lw          $a0, 0x2790($s4)
    ctx->pc = 0x4c3cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10128)));
label_4c3cd4:
    // 0x4c3cd4: 0xc132386  jal         func_4C8E18
label_4c3cd8:
    if (ctx->pc == 0x4C3CD8u) {
        ctx->pc = 0x4C3CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3CD4u;
        // 0x4c3cd8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3CDCu;
        goto label_4c3cdc;
    }
    ctx->pc = 0x4C3CD4u;
    SET_GPR_U32(ctx, 31, 0x4C3CDCu);
    ctx->pc = 0x4C3CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3CD4u;
    // 0x4c3cd8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8E18u, 0x4C3CD4u, 0x4C3CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3CDCu;
label_4c3cdc:
    // 0x4c3cdc: 0x8ea4278c  lw          $a0, 0x278C($s5)
    ctx->pc = 0x4c3cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10124)));
label_4c3ce0:
    // 0x4c3ce0: 0xc132386  jal         func_4C8E18
label_4c3ce4:
    if (ctx->pc == 0x4C3CE4u) {
        ctx->pc = 0x4C3CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3CE0u;
        // 0x4c3ce4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3CE8u;
        goto label_4c3ce8;
    }
    ctx->pc = 0x4C3CE0u;
    SET_GPR_U32(ctx, 31, 0x4C3CE8u);
    ctx->pc = 0x4C3CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3CE0u;
    // 0x4c3ce4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8E18u, 0x4C3CE0u, 0x4C3CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3CE8u;
label_4c3ce8:
    // 0x4c3ce8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x4c3ce8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c3cec:
    // 0x4c3cec: 0x8e020300  lw          $v0, 0x300($s0)
    ctx->pc = 0x4c3cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
label_4c3cf0:
    // 0x4c3cf0: 0xae120138  sw          $s2, 0x138($s0)
    ctx->pc = 0x4c3cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 18));
label_4c3cf4:
    // 0x4c3cf4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4c3cf8:
    if (ctx->pc == 0x4C3CF8u) {
        ctx->pc = 0x4C3CFCu;
        goto label_4c3cfc;
    }
    ctx->pc = 0x4C3CF4u;
    {
        const bool branch_taken_0x4c3cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3cf4) {
            ctx->pc = 0x4C3D04u;
            goto label_4c3d04;
        }
    }
    ctx->pc = 0x4C3CFCu;
label_4c3cfc:
    // 0x4c3cfc: 0xc130664  jal         func_4C1990
label_4c3d00:
    if (ctx->pc == 0x4C3D00u) {
        ctx->pc = 0x4C3D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3CFCu;
        // 0x4c3d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3D04u;
        goto label_4c3d04;
    }
    ctx->pc = 0x4C3CFCu;
    SET_GPR_U32(ctx, 31, 0x4C3D04u);
    ctx->pc = 0x4C3D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3CFCu;
    // 0x4c3d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C1990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C1990u, 0x4C3CFCu, 0x4C3D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3D04u;
label_4c3d04:
    // 0x4c3d04: 0xc1334f4  jal         func_4CD3D0
label_4c3d08:
    if (ctx->pc == 0x4C3D08u) {
        ctx->pc = 0x4C3D0Cu;
        goto label_4c3d0c;
    }
    ctx->pc = 0x4C3D04u;
    SET_GPR_U32(ctx, 31, 0x4C3D0Cu);
    ctx->pc = 0x4CD3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD3D0u, 0x4C3D04u, 0x4C3D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3D0Cu;
label_4c3d0c:
    // 0x4c3d0c: 0x8e03027c  lw          $v1, 0x27C($s0)
    ctx->pc = 0x4c3d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 636)));
label_4c3d10:
    // 0x4c3d10: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_4c3d14:
    if (ctx->pc == 0x4C3D14u) {
        ctx->pc = 0x4C3D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3D10u;
        // 0x4c3d14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3D18u;
        goto label_4c3d18;
    }
    ctx->pc = 0x4C3D10u;
    {
        const bool branch_taken_0x4c3d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3D10u;
        // 0x4c3d14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3d10) {
            ctx->pc = 0x4C3D2Cu;
            goto label_4c3d2c;
        }
    }
    ctx->pc = 0x4C3D18u;
label_4c3d18:
    // 0x4c3d18: 0x8e0202b4  lw          $v0, 0x2B4($s0)
    ctx->pc = 0x4c3d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
label_4c3d1c:
    // 0x4c3d1c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x4c3d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4c3d20:
    // 0x4c3d20: 0xae00027c  sw          $zero, 0x27C($s0)
    ctx->pc = 0x4c3d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 0));
label_4c3d24:
    // 0x4c3d24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4c3d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4c3d28:
    // 0x4c3d28: 0xae0202b4  sw          $v0, 0x2B4($s0)
    ctx->pc = 0x4c3d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 2));
label_4c3d2c:
    // 0x4c3d2c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x4c3d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4c3d30:
    // 0x4c3d30: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x4c3d30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c3d34:
    // 0x4c3d34: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4c3d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4c3d38:
    // 0x4c3d38: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x4c3d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4c3d3c:
    // 0x4c3d3c: 0x8e050300  lw          $a1, 0x300($s0)
    ctx->pc = 0x4c3d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
label_4c3d40:
    // 0x4c3d40: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x4c3d40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4c3d44:
    // 0x4c3d44: 0xae000310  sw          $zero, 0x310($s0)
    ctx->pc = 0x4c3d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 0));
label_4c3d48:
    // 0x4c3d48: 0x83880b  movn        $s1, $a0, $v1
    ctx->pc = 0x4c3d48u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
label_4c3d4c:
    // 0x4c3d4c: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x4c3d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4c3d50:
    // 0x4c3d50: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_4c3d54:
    if (ctx->pc == 0x4C3D54u) {
        ctx->pc = 0x4C3D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3D50u;
        // 0x4c3d54: 0x51880b  movn        $s1, $v0, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3D58u;
        goto label_4c3d58;
    }
    ctx->pc = 0x4C3D50u;
    {
        const bool branch_taken_0x4c3d50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3D50u;
        // 0x4c3d54: 0x51880b  movn        $s1, $v0, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3d50) {
            ctx->pc = 0x4C3D60u;
            goto label_4c3d60;
        }
    }
    ctx->pc = 0x4C3D58u;
label_4c3d58:
    // 0x4c3d58: 0xc130664  jal         func_4C1990
label_4c3d5c:
    if (ctx->pc == 0x4C3D5Cu) {
        ctx->pc = 0x4C3D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3D58u;
        // 0x4c3d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3D60u;
        goto label_4c3d60;
    }
    ctx->pc = 0x4C3D58u;
    SET_GPR_U32(ctx, 31, 0x4C3D60u);
    ctx->pc = 0x4C3D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3D58u;
    // 0x4c3d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C1990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C1990u, 0x4C3D58u, 0x4C3D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3D60u;
label_4c3d60:
    // 0x4c3d60: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4c3d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4c3d64:
    // 0x4c3d64: 0x16200010  bnez        $s1, . + 4 + (0x10 << 2)
label_4c3d68:
    if (ctx->pc == 0x4C3D68u) {
        ctx->pc = 0x4C3D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3D64u;
        // 0x4c3d68: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3D6Cu;
        goto label_4c3d6c;
    }
    ctx->pc = 0x4C3D64u;
    {
        const bool branch_taken_0x4c3d64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C3D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3D64u;
        // 0x4c3d68: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3d64) {
            ctx->pc = 0x4C3DA8u;
            goto label_4c3da8;
        }
    }
    ctx->pc = 0x4C3D6Cu;
label_4c3d6c:
    // 0x4c3d6c: 0xc1334f4  jal         func_4CD3D0
label_4c3d70:
    if (ctx->pc == 0x4C3D70u) {
        ctx->pc = 0x4C3D74u;
        goto label_4c3d74;
    }
    ctx->pc = 0x4C3D6Cu;
    SET_GPR_U32(ctx, 31, 0x4C3D74u);
    ctx->pc = 0x4CD3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD3D0u, 0x4C3D6Cu, 0x4C3D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3D74u;
label_4c3d74:
    // 0x4c3d74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c3d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c3d78:
    // 0x4c3d78: 0x8e0202f0  lw          $v0, 0x2F0($s0)
    ctx->pc = 0x4c3d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
label_4c3d7c:
    // 0x4c3d7c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_4c3d80:
    if (ctx->pc == 0x4C3D80u) {
        ctx->pc = 0x4C3D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3D7Cu;
        // 0x4c3d80: 0xae0402f0  sw          $a0, 0x2F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3D84u;
        goto label_4c3d84;
    }
    ctx->pc = 0x4C3D7Cu;
    {
        const bool branch_taken_0x4c3d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3d7c) {
            ctx->pc = 0x4C3D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C3D7Cu;
            // 0x4c3d80: 0xae0402f0  sw          $a0, 0x2F0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C3D84u;
            goto label_4c3d84;
        }
    }
    ctx->pc = 0x4C3D84u;
label_4c3d84:
    // 0x4c3d84: 0x8e0302f0  lw          $v1, 0x2F0($s0)
    ctx->pc = 0x4c3d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
label_4c3d88:
    // 0x4c3d88: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x4c3d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_4c3d8c:
    // 0x4c3d8c: 0x344293e0  ori         $v0, $v0, 0x93E0
    ctx->pc = 0x4c3d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37856);
label_4c3d90:
    // 0x4c3d90: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x4c3d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4c3d94:
    // 0x4c3d94: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4c3d94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c3d98:
    // 0x4c3d98: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4c3d9c:
    if (ctx->pc == 0x4C3D9Cu) {
        ctx->pc = 0x4C3D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3D98u;
        // 0x4c3d9c: 0x8e070108  lw          $a3, 0x108($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3DA0u;
        goto label_4c3da0;
    }
    ctx->pc = 0x4C3D98u;
    {
        const bool branch_taken_0x4c3d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c3d98) {
            ctx->pc = 0x4C3D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C3D98u;
            // 0x4c3d9c: 0x8e070108  lw          $a3, 0x108($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C3DACu;
            goto label_4c3dac;
        }
    }
    ctx->pc = 0x4C3DA0u;
label_4c3da0:
    // 0x4c3da0: 0xae0402f0  sw          $a0, 0x2F0($s0)
    ctx->pc = 0x4c3da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 4));
label_4c3da4:
    // 0x4c3da4: 0xae1202f4  sw          $s2, 0x2F4($s0)
    ctx->pc = 0x4c3da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 756), GPR_U32(ctx, 18));
label_4c3da8:
    // 0x4c3da8: 0x8e070108  lw          $a3, 0x108($s0)
    ctx->pc = 0x4c3da8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_4c3dac:
    // 0x4c3dac: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
label_4c3db0:
    if (ctx->pc == 0x4C3DB0u) {
        ctx->pc = 0x4C3DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3DACu;
        // 0x4c3db0: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3DB4u;
        goto label_4c3db4;
    }
    ctx->pc = 0x4C3DACu;
    {
        const bool branch_taken_0x4c3dac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3DACu;
        // 0x4c3db0: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3dac) {
            ctx->pc = 0x4C3DE4u;
            goto label_4c3de4;
        }
    }
    ctx->pc = 0x4C3DB4u;
label_4c3db4:
    // 0x4c3db4: 0x8e06010c  lw          $a2, 0x10C($s0)
    ctx->pc = 0x4c3db4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_4c3db8:
    // 0x4c3db8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4c3db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_4c3dbc:
    // 0x4c3dbc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4c3dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_4c3dc0:
    // 0x4c3dc0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4c3dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4c3dc4:
    // 0x4c3dc4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c3dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c3dc8:
    // 0x4c3dc8: 0x3484fffe  ori         $a0, $a0, 0xFFFE
    ctx->pc = 0x4c3dc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65534);
label_4c3dcc:
    // 0x4c3dcc: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4c3dccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_4c3dd0:
    // 0x4c3dd0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4c3dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_4c3dd4:
    // 0x4c3dd4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4c3dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4c3dd8:
    // 0x4c3dd8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x4c3dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_4c3ddc:
    // 0x4c3ddc: 0x1000000f  b           . + 4 + (0xF << 2)
label_4c3de0:
    if (ctx->pc == 0x4C3DE0u) {
        ctx->pc = 0x4C3DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3DDCu;
        // 0x4c3de0: 0xae020104  sw          $v0, 0x104($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3DE4u;
        goto label_4c3de4;
    }
    ctx->pc = 0x4C3DDCu;
    {
        const bool branch_taken_0x4c3ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3DDCu;
        // 0x4c3de0: 0xae020104  sw          $v0, 0x104($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3ddc) {
            ctx->pc = 0x4C3E1Cu;
            goto label_4c3e1c;
        }
    }
    ctx->pc = 0x4C3DE4u;
label_4c3de4:
    // 0x4c3de4: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x4c3de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_4c3de8:
    // 0x4c3de8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4c3de8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_4c3dec:
    // 0x4c3dec: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x4c3decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_4c3df0:
    // 0x4c3df0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4c3df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4c3df4:
    // 0x4c3df4: 0x3529fffe  ori         $t1, $t1, 0xFFFE
    ctx->pc = 0x4c3df4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65534);
label_4c3df8:
    // 0x4c3df8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x4c3df8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c3dfc:
    // 0x4c3dfc: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x4c3dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_4c3e00:
    // 0x4c3e00: 0x8c680004  lw          $t0, 0x4($v1)
    ctx->pc = 0x4c3e00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4c3e04:
    // 0x4c3e04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4c3e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c3e08:
    // 0x4c3e08: 0xc93024  and         $a2, $a2, $t1
    ctx->pc = 0x4c3e08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
label_4c3e0c:
    // 0x4c3e0c: 0x8e070104  lw          $a3, 0x104($s0)
    ctx->pc = 0x4c3e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_4c3e10:
    // 0x4c3e10: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x4c3e10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
label_4c3e14:
    // 0x4c3e14: 0x40f809  jalr        $v0
label_4c3e18:
    if (ctx->pc == 0x4C3E18u) {
        ctx->pc = 0x4C3E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3E14u;
        // 0x4c3e18: 0x1064023  subu        $t0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3E1Cu;
        goto label_4c3e1c;
    }
    ctx->pc = 0x4C3E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C3E1Cu);
        ctx->pc = 0x4C3E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3E14u;
        // 0x4c3e18: 0x1064023  subu        $t0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C3E14u, 0x4C3E1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C3E1Cu;
label_4c3e1c:
    // 0x4c3e1c: 0x8e020300  lw          $v0, 0x300($s0)
    ctx->pc = 0x4c3e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
label_4c3e20:
    // 0x4c3e20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4c3e24:
    if (ctx->pc == 0x4C3E24u) {
        ctx->pc = 0x4C3E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3E20u;
        // 0x4c3e24: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3E28u;
        goto label_4c3e28;
    }
    ctx->pc = 0x4C3E20u;
    {
        const bool branch_taken_0x4c3e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C3E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3E20u;
        // 0x4c3e24: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c3e20) {
            ctx->pc = 0x4C3E34u;
            goto label_4c3e34;
        }
    }
    ctx->pc = 0x4C3E28u;
label_4c3e28:
    // 0x4c3e28: 0xc130664  jal         func_4C1990
label_4c3e2c:
    if (ctx->pc == 0x4C3E2Cu) {
        ctx->pc = 0x4C3E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3E28u;
        // 0x4c3e2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3E30u;
        goto label_4c3e30;
    }
    ctx->pc = 0x4C3E28u;
    SET_GPR_U32(ctx, 31, 0x4C3E30u);
    ctx->pc = 0x4C3E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C3E28u;
    // 0x4c3e2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C1990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C1990u, 0x4C3E28u, 0x4C3E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C3E30u;
label_4c3e30:
    // 0x4c3e30: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x4c3e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4c3e34:
    // 0x4c3e34: 0xae000138  sw          $zero, 0x138($s0)
    ctx->pc = 0x4c3e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
label_4c3e38:
    // 0x4c3e38: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x4c3e38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_4c3e3c:
    // 0x4c3e3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c3e3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4c3e40:
    // 0x4c3e40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c3e40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4c3e44:
    // 0x4c3e44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c3e44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4c3e48:
    // 0x4c3e48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c3e48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4c3e4c:
    // 0x4c3e4c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c3e4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c3e50:
    // 0x4c3e50: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c3e50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4c3e54:
    // 0x4c3e54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4c3e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4c3e58:
    // 0x4c3e58: 0x3e00008  jr          $ra
label_4c3e5c:
    if (ctx->pc == 0x4C3E5Cu) {
        ctx->pc = 0x4C3E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3E58u;
        // 0x4c3e5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C3E60u;
        goto label_4c3e60;
    }
    ctx->pc = 0x4C3E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C3E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C3E58u;
        // 0x4c3e5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C3E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C3E60u;
label_4c3e60:
    // 0x4c3e60: 0x0  nop
    ctx->pc = 0x4c3e60u;
    // NOP
label_4c3e64:
    // 0x4c3e64: 0x0  nop
    ctx->pc = 0x4c3e64u;
    // NOP
    ctx->pc = 0x4c3e68u;
}
