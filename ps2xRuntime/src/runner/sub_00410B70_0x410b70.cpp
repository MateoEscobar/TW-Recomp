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

// Function: sub_00410B70
// Address: 0x410b70 - 0x410e08
void sub_00410B70_0x410b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00410B70_0x410b70");
#endif

    switch (ctx->pc) {
        case 0x410b70u: goto label_410b70;
        case 0x410b74u: goto label_410b74;
        case 0x410b78u: goto label_410b78;
        case 0x410b7cu: goto label_410b7c;
        case 0x410b80u: goto label_410b80;
        case 0x410b84u: goto label_410b84;
        case 0x410b88u: goto label_410b88;
        case 0x410b8cu: goto label_410b8c;
        case 0x410b90u: goto label_410b90;
        case 0x410b94u: goto label_410b94;
        case 0x410b98u: goto label_410b98;
        case 0x410b9cu: goto label_410b9c;
        case 0x410ba0u: goto label_410ba0;
        case 0x410ba4u: goto label_410ba4;
        case 0x410ba8u: goto label_410ba8;
        case 0x410bacu: goto label_410bac;
        case 0x410bb0u: goto label_410bb0;
        case 0x410bb4u: goto label_410bb4;
        case 0x410bb8u: goto label_410bb8;
        case 0x410bbcu: goto label_410bbc;
        case 0x410bc0u: goto label_410bc0;
        case 0x410bc4u: goto label_410bc4;
        case 0x410bc8u: goto label_410bc8;
        case 0x410bccu: goto label_410bcc;
        case 0x410bd0u: goto label_410bd0;
        case 0x410bd4u: goto label_410bd4;
        case 0x410bd8u: goto label_410bd8;
        case 0x410bdcu: goto label_410bdc;
        case 0x410be0u: goto label_410be0;
        case 0x410be4u: goto label_410be4;
        case 0x410be8u: goto label_410be8;
        case 0x410becu: goto label_410bec;
        case 0x410bf0u: goto label_410bf0;
        case 0x410bf4u: goto label_410bf4;
        case 0x410bf8u: goto label_410bf8;
        case 0x410bfcu: goto label_410bfc;
        case 0x410c00u: goto label_410c00;
        case 0x410c04u: goto label_410c04;
        case 0x410c08u: goto label_410c08;
        case 0x410c0cu: goto label_410c0c;
        case 0x410c10u: goto label_410c10;
        case 0x410c14u: goto label_410c14;
        case 0x410c18u: goto label_410c18;
        case 0x410c1cu: goto label_410c1c;
        case 0x410c20u: goto label_410c20;
        case 0x410c24u: goto label_410c24;
        case 0x410c28u: goto label_410c28;
        case 0x410c2cu: goto label_410c2c;
        case 0x410c30u: goto label_410c30;
        case 0x410c34u: goto label_410c34;
        case 0x410c38u: goto label_410c38;
        case 0x410c3cu: goto label_410c3c;
        case 0x410c40u: goto label_410c40;
        case 0x410c44u: goto label_410c44;
        case 0x410c48u: goto label_410c48;
        case 0x410c4cu: goto label_410c4c;
        case 0x410c50u: goto label_410c50;
        case 0x410c54u: goto label_410c54;
        case 0x410c58u: goto label_410c58;
        case 0x410c5cu: goto label_410c5c;
        case 0x410c60u: goto label_410c60;
        case 0x410c64u: goto label_410c64;
        case 0x410c68u: goto label_410c68;
        case 0x410c6cu: goto label_410c6c;
        case 0x410c70u: goto label_410c70;
        case 0x410c74u: goto label_410c74;
        case 0x410c78u: goto label_410c78;
        case 0x410c7cu: goto label_410c7c;
        case 0x410c80u: goto label_410c80;
        case 0x410c84u: goto label_410c84;
        case 0x410c88u: goto label_410c88;
        case 0x410c8cu: goto label_410c8c;
        case 0x410c90u: goto label_410c90;
        case 0x410c94u: goto label_410c94;
        case 0x410c98u: goto label_410c98;
        case 0x410c9cu: goto label_410c9c;
        case 0x410ca0u: goto label_410ca0;
        case 0x410ca4u: goto label_410ca4;
        case 0x410ca8u: goto label_410ca8;
        case 0x410cacu: goto label_410cac;
        case 0x410cb0u: goto label_410cb0;
        case 0x410cb4u: goto label_410cb4;
        case 0x410cb8u: goto label_410cb8;
        case 0x410cbcu: goto label_410cbc;
        case 0x410cc0u: goto label_410cc0;
        case 0x410cc4u: goto label_410cc4;
        case 0x410cc8u: goto label_410cc8;
        case 0x410cccu: goto label_410ccc;
        case 0x410cd0u: goto label_410cd0;
        case 0x410cd4u: goto label_410cd4;
        case 0x410cd8u: goto label_410cd8;
        case 0x410cdcu: goto label_410cdc;
        case 0x410ce0u: goto label_410ce0;
        case 0x410ce4u: goto label_410ce4;
        case 0x410ce8u: goto label_410ce8;
        case 0x410cecu: goto label_410cec;
        case 0x410cf0u: goto label_410cf0;
        case 0x410cf4u: goto label_410cf4;
        case 0x410cf8u: goto label_410cf8;
        case 0x410cfcu: goto label_410cfc;
        case 0x410d00u: goto label_410d00;
        case 0x410d04u: goto label_410d04;
        case 0x410d08u: goto label_410d08;
        case 0x410d0cu: goto label_410d0c;
        case 0x410d10u: goto label_410d10;
        case 0x410d14u: goto label_410d14;
        case 0x410d18u: goto label_410d18;
        case 0x410d1cu: goto label_410d1c;
        case 0x410d20u: goto label_410d20;
        case 0x410d24u: goto label_410d24;
        case 0x410d28u: goto label_410d28;
        case 0x410d2cu: goto label_410d2c;
        case 0x410d30u: goto label_410d30;
        case 0x410d34u: goto label_410d34;
        case 0x410d38u: goto label_410d38;
        case 0x410d3cu: goto label_410d3c;
        case 0x410d40u: goto label_410d40;
        case 0x410d44u: goto label_410d44;
        case 0x410d48u: goto label_410d48;
        case 0x410d4cu: goto label_410d4c;
        case 0x410d50u: goto label_410d50;
        case 0x410d54u: goto label_410d54;
        case 0x410d58u: goto label_410d58;
        case 0x410d5cu: goto label_410d5c;
        case 0x410d60u: goto label_410d60;
        case 0x410d64u: goto label_410d64;
        case 0x410d68u: goto label_410d68;
        case 0x410d6cu: goto label_410d6c;
        case 0x410d70u: goto label_410d70;
        case 0x410d74u: goto label_410d74;
        case 0x410d78u: goto label_410d78;
        case 0x410d7cu: goto label_410d7c;
        case 0x410d80u: goto label_410d80;
        case 0x410d84u: goto label_410d84;
        case 0x410d88u: goto label_410d88;
        case 0x410d8cu: goto label_410d8c;
        case 0x410d90u: goto label_410d90;
        case 0x410d94u: goto label_410d94;
        case 0x410d98u: goto label_410d98;
        case 0x410d9cu: goto label_410d9c;
        case 0x410da0u: goto label_410da0;
        case 0x410da4u: goto label_410da4;
        case 0x410da8u: goto label_410da8;
        case 0x410dacu: goto label_410dac;
        case 0x410db0u: goto label_410db0;
        case 0x410db4u: goto label_410db4;
        case 0x410db8u: goto label_410db8;
        case 0x410dbcu: goto label_410dbc;
        case 0x410dc0u: goto label_410dc0;
        case 0x410dc4u: goto label_410dc4;
        case 0x410dc8u: goto label_410dc8;
        case 0x410dccu: goto label_410dcc;
        case 0x410dd0u: goto label_410dd0;
        case 0x410dd4u: goto label_410dd4;
        case 0x410dd8u: goto label_410dd8;
        case 0x410ddcu: goto label_410ddc;
        case 0x410de0u: goto label_410de0;
        case 0x410de4u: goto label_410de4;
        case 0x410de8u: goto label_410de8;
        case 0x410decu: goto label_410dec;
        case 0x410df0u: goto label_410df0;
        case 0x410df4u: goto label_410df4;
        case 0x410df8u: goto label_410df8;
        case 0x410dfcu: goto label_410dfc;
        case 0x410e00u: goto label_410e00;
        case 0x410e04u: goto label_410e04;
        default: break;
    }

    ctx->pc = 0x410b70u;

label_410b70:
    // 0x410b70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x410b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_410b74:
    // 0x410b74: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x410b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_410b78:
    // 0x410b78: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x410b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_410b7c:
    // 0x410b7c: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x410b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
label_410b80:
    // 0x410b80: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x410b80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_410b84:
    // 0x410b84: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x410b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_410b88:
    // 0x410b88: 0x8e045340  lw          $a0, 0x5340($s0)
    ctx->pc = 0x410b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 21312)));
label_410b8c:
    // 0x410b8c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x410b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_410b90:
    // 0x410b90: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x410b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_410b94:
    // 0x410b94: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x410b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_410b98:
    // 0x410b98: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x410b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_410b9c:
    // 0x410b9c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x410b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_410ba0:
    // 0x410ba0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x410ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_410ba4:
    // 0x410ba4: 0xc05529a  jal         func_154A68
label_410ba8:
    if (ctx->pc == 0x410BA8u) {
        ctx->pc = 0x410BACu;
        goto label_410bac;
    }
    ctx->pc = 0x410BA4u;
    SET_GPR_U32(ctx, 31, 0x410BACu);
    ctx->pc = 0x154A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154A68u, 0x410BA4u, 0x410BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410BACu;
label_410bac:
    // 0x410bac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_410bb0:
    if (ctx->pc == 0x410BB0u) {
        ctx->pc = 0x410BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410BACu;
        // 0x410bb0: 0x8e045340  lw          $a0, 0x5340($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410BB4u;
        goto label_410bb4;
    }
    ctx->pc = 0x410BACu;
    {
        const bool branch_taken_0x410bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x410BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410BACu;
        // 0x410bb0: 0x8e045340  lw          $a0, 0x5340($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 21312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410bac) {
            ctx->pc = 0x410BBCu;
            goto label_410bbc;
        }
    }
    ctx->pc = 0x410BB4u;
label_410bb4:
    // 0x410bb4: 0xc0552b8  jal         func_154AE0
label_410bb8:
    if (ctx->pc == 0x410BB8u) {
        ctx->pc = 0x410BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410BB4u;
        // 0x410bb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410BBCu;
        goto label_410bbc;
    }
    ctx->pc = 0x410BB4u;
    SET_GPR_U32(ctx, 31, 0x410BBCu);
    ctx->pc = 0x410BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410BB4u;
    // 0x410bb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x410BB4u, 0x410BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410BBCu;
label_410bbc:
    // 0x410bbc: 0x8e622168  lw          $v0, 0x2168($s3)
    ctx->pc = 0x410bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8552)));
label_410bc0:
    // 0x410bc0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x410bc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410bc4:
    // 0x410bc4: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x410bc4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_410bc8:
    // 0x410bc8: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
label_410bcc:
    if (ctx->pc == 0x410BCCu) {
        ctx->pc = 0x410BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410BC8u;
        // 0x410bcc: 0x3c16006f  lui         $s6, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410BD0u;
        goto label_410bd0;
    }
    ctx->pc = 0x410BC8u;
    {
        const bool branch_taken_0x410bc8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x410BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410BC8u;
        // 0x410bcc: 0x3c16006f  lui         $s6, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410bc8) {
            ctx->pc = 0x410C38u;
            goto label_410c38;
        }
    }
    ctx->pc = 0x410BD0u;
label_410bd0:
    // 0x410bd0: 0x26740038  addiu       $s4, $s3, 0x38
    ctx->pc = 0x410bd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
label_410bd4:
    // 0x410bd4: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x410bd4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_410bd8:
    // 0x410bd8: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x410bd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_410bdc:
    // 0x410bdc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x410bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_410be0:
    // 0x410be0: 0x8e44ced0  lw          $a0, -0x3130($s2)
    ctx->pc = 0x410be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954704)));
label_410be4:
    // 0x410be4: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x410be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_410be8:
    // 0x410be8: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x410be8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_410bec:
    // 0x410bec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x410becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_410bf0:
    // 0x410bf0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x410bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_410bf4:
    // 0x410bf4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x410bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_410bf8:
    // 0x410bf8: 0x5475000b  bnel        $v1, $s5, . + 4 + (0xB << 2)
label_410bfc:
    if (ctx->pc == 0x410BFCu) {
        ctx->pc = 0x410BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410BF8u;
        // 0x410bfc: 0x8e622168  lw          $v0, 0x2168($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410C00u;
        goto label_410c00;
    }
    ctx->pc = 0x410BF8u;
    {
        const bool branch_taken_0x410bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        if (branch_taken_0x410bf8) {
            ctx->pc = 0x410BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x410BF8u;
            // 0x410bfc: 0x8e622168  lw          $v0, 0x2168($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x410C28u;
            goto label_410c28;
        }
    }
    ctx->pc = 0x410C00u;
label_410c00:
    // 0x410c00: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x410c00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_410c04:
    // 0x410c04: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x410c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_410c08:
    // 0x410c08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x410c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_410c0c:
    // 0x410c0c: 0x8e42ced0  lw          $v0, -0x3130($s2)
    ctx->pc = 0x410c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954704)));
label_410c10:
    // 0x410c10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x410c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_410c14:
    // 0x410c14: 0xc104574  jal         func_4115D0
label_410c18:
    if (ctx->pc == 0x410C18u) {
        ctx->pc = 0x410C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410C14u;
        // 0x410c18: 0x8c65000c  lw          $a1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410C1Cu;
        goto label_410c1c;
    }
    ctx->pc = 0x410C14u;
    SET_GPR_U32(ctx, 31, 0x410C1Cu);
    ctx->pc = 0x410C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410C14u;
    // 0x410c18: 0x8c65000c  lw          $a1, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4115D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4115D0u, 0x410C14u, 0x410C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410C1Cu;
label_410c1c:
    // 0x410c1c: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
label_410c20:
    if (ctx->pc == 0x410C20u) {
        ctx->pc = 0x410C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410C1Cu;
        // 0x410c20: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410C24u;
        goto label_410c24;
    }
    ctx->pc = 0x410C1Cu;
    {
        const bool branch_taken_0x410c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x410c1c) {
            ctx->pc = 0x410C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x410C1Cu;
            // 0x410c20: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x410C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_410c08;
        }
    }
    ctx->pc = 0x410C24u;
label_410c24:
    // 0x410c24: 0x8e622168  lw          $v0, 0x2168($s3)
    ctx->pc = 0x410c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8552)));
label_410c28:
    // 0x410c28: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x410c28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_410c2c:
    // 0x410c2c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x410c2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_410c30:
    // 0x410c30: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_410c34:
    if (ctx->pc == 0x410C34u) {
        ctx->pc = 0x410C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410C30u;
        // 0x410c34: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410C38u;
        goto label_410c38;
    }
    ctx->pc = 0x410C30u;
    {
        const bool branch_taken_0x410c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x410C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410C30u;
        // 0x410c34: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410c30) {
            ctx->pc = 0x410BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_410be0;
        }
    }
    ctx->pc = 0x410C38u;
label_410c38:
    // 0x410c38: 0x26720940  addiu       $s2, $s3, 0x940
    ctx->pc = 0x410c38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 2368));
label_410c3c:
    // 0x410c3c: 0x2414008b  addiu       $s4, $zero, 0x8B
    ctx->pc = 0x410c3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
label_410c40:
    // 0x410c40: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x410c40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_410c44:
    // 0x410c44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x410c44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410c48:
    // 0x410c48: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x410c48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_410c4c:
    // 0x410c4c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x410c4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_410c50:
    // 0x410c50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x410c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_410c54:
    // 0x410c54: 0xc10c1bb  jal         func_4306EC
label_410c58:
    if (ctx->pc == 0x410C58u) {
        ctx->pc = 0x410C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410C54u;
        // 0x410c58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410C5Cu;
        goto label_410c5c;
    }
    ctx->pc = 0x410C54u;
    SET_GPR_U32(ctx, 31, 0x410C5Cu);
    ctx->pc = 0x410C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410C54u;
    // 0x410c58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x410C54u, 0x410C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410C5Cu;
label_410c5c:
    // 0x410c5c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x410c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_410c60:
    // 0x410c60: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x410c60u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_410c64:
    // 0x410c64: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x410c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_410c68:
    // 0x410c68: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x410c68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_410c6c:
    // 0x410c6c: 0x681fff4  bgez        $s4, . + 4 + (-0xC << 2)
label_410c70:
    if (ctx->pc == 0x410C70u) {
        ctx->pc = 0x410C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410C6Cu;
        // 0x410c70: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410C74u;
        goto label_410c74;
    }
    ctx->pc = 0x410C6Cu;
    {
        const bool branch_taken_0x410c6c = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x410C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410C6Cu;
        // 0x410c70: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410c6c) {
            ctx->pc = 0x410C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_410c40;
        }
    }
    ctx->pc = 0x410C74u;
label_410c74:
    // 0x410c74: 0x8e672154  lw          $a3, 0x2154($s3)
    ctx->pc = 0x410c74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8532)));
label_410c78:
    // 0x410c78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x410c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_410c7c:
    // 0x410c7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x410c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410c80:
    // 0x410c80: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x410c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_410c84:
    // 0x410c84: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x410c84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_410c88:
    // 0x410c88: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x410c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_410c8c:
    // 0x410c8c: 0x60f809  jalr        $v1
label_410c90:
    if (ctx->pc == 0x410C90u) {
        ctx->pc = 0x410C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410C8Cu;
        // 0x410c90: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410C94u;
        goto label_410c94;
    }
    ctx->pc = 0x410C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x410C94u);
        ctx->pc = 0x410C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410C8Cu;
        // 0x410c90: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410C8Cu, 0x410C94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410C94u;
label_410c94:
    // 0x410c94: 0x8ee627e4  lw          $a2, 0x27E4($s7)
    ctx->pc = 0x410c94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
label_410c98:
    // 0x410c98: 0x8e652154  lw          $a1, 0x2154($s3)
    ctx->pc = 0x410c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8532)));
label_410c9c:
    // 0x410c9c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x410c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_410ca0:
    // 0x410ca0: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x410ca0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_410ca4:
    // 0x410ca4: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x410ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_410ca8:
    // 0x410ca8: 0x60f809  jalr        $v1
label_410cac:
    if (ctx->pc == 0x410CACu) {
        ctx->pc = 0x410CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410CA8u;
        // 0x410cac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410CB0u;
        goto label_410cb0;
    }
    ctx->pc = 0x410CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x410CB0u);
        ctx->pc = 0x410CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410CA8u;
        // 0x410cac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410CA8u, 0x410CB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410CB0u;
label_410cb0:
    // 0x410cb0: 0xc11c384  jal         func_470E10
label_410cb4:
    if (ctx->pc == 0x410CB4u) {
        ctx->pc = 0x410CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410CB0u;
        // 0x410cb4: 0x8e64215c  lw          $a0, 0x215C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8540)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410CB8u;
        goto label_410cb8;
    }
    ctx->pc = 0x410CB0u;
    SET_GPR_U32(ctx, 31, 0x410CB8u);
    ctx->pc = 0x410CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410CB0u;
    // 0x410cb4: 0x8e64215c  lw          $a0, 0x215C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x470E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470E10u, 0x410CB0u, 0x410CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410CB8u;
label_410cb8:
    // 0x410cb8: 0xc122316  jal         func_488C58
label_410cbc:
    if (ctx->pc == 0x410CBCu) {
        ctx->pc = 0x410CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410CB8u;
        // 0x410cbc: 0x8e642158  lw          $a0, 0x2158($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410CC0u;
        goto label_410cc0;
    }
    ctx->pc = 0x410CB8u;
    SET_GPR_U32(ctx, 31, 0x410CC0u);
    ctx->pc = 0x410CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410CB8u;
    // 0x410cbc: 0x8e642158  lw          $a0, 0x2158($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488C58u, 0x410CB8u, 0x410CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410CC0u;
label_410cc0:
    // 0x410cc0: 0x8ee627e4  lw          $a2, 0x27E4($s7)
    ctx->pc = 0x410cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
label_410cc4:
    // 0x410cc4: 0x8e652154  lw          $a1, 0x2154($s3)
    ctx->pc = 0x410cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8532)));
label_410cc8:
    // 0x410cc8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x410cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_410ccc:
    // 0x410ccc: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x410cccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_410cd0:
    // 0x410cd0: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x410cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_410cd4:
    // 0x410cd4: 0x60f809  jalr        $v1
label_410cd8:
    if (ctx->pc == 0x410CD8u) {
        ctx->pc = 0x410CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410CD4u;
        // 0x410cd8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410CDCu;
        goto label_410cdc;
    }
    ctx->pc = 0x410CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x410CDCu);
        ctx->pc = 0x410CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410CD4u;
        // 0x410cd8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410CD4u, 0x410CDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410CDCu;
label_410cdc:
    // 0x410cdc: 0x8e672154  lw          $a3, 0x2154($s3)
    ctx->pc = 0x410cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8532)));
label_410ce0:
    // 0x410ce0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x410ce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410ce4:
    // 0x410ce4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x410ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410ce8:
    // 0x410ce8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x410ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_410cec:
    // 0x410cec: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x410cecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_410cf0:
    // 0x410cf0: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x410cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_410cf4:
    // 0x410cf4: 0x60f809  jalr        $v1
label_410cf8:
    if (ctx->pc == 0x410CF8u) {
        ctx->pc = 0x410CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410CF4u;
        // 0x410cf8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410CFCu;
        goto label_410cfc;
    }
    ctx->pc = 0x410CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x410CFCu);
        ctx->pc = 0x410CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410CF4u;
        // 0x410cf8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410CF4u, 0x410CFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410CFCu;
label_410cfc:
    // 0x410cfc: 0x8ee627e4  lw          $a2, 0x27E4($s7)
    ctx->pc = 0x410cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
label_410d00:
    // 0x410d00: 0x8ec5b9c8  lw          $a1, -0x4638($s6)
    ctx->pc = 0x410d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949320)));
label_410d04:
    // 0x410d04: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x410d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_410d08:
    // 0x410d08: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x410d08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_410d0c:
    // 0x410d0c: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x410d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_410d10:
    // 0x410d10: 0x60f809  jalr        $v1
label_410d14:
    if (ctx->pc == 0x410D14u) {
        ctx->pc = 0x410D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410D10u;
        // 0x410d14: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410D18u;
        goto label_410d18;
    }
    ctx->pc = 0x410D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x410D18u);
        ctx->pc = 0x410D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410D10u;
        // 0x410d14: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410D10u, 0x410D18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410D18u;
label_410d18:
    // 0x410d18: 0x8ee627e4  lw          $a2, 0x27E4($s7)
    ctx->pc = 0x410d18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
label_410d1c:
    // 0x410d1c: 0x8e652154  lw          $a1, 0x2154($s3)
    ctx->pc = 0x410d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8532)));
label_410d20:
    // 0x410d20: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x410d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_410d24:
    // 0x410d24: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x410d24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_410d28:
    // 0x410d28: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x410d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_410d2c:
    // 0x410d2c: 0x60f809  jalr        $v1
label_410d30:
    if (ctx->pc == 0x410D30u) {
        ctx->pc = 0x410D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410D2Cu;
        // 0x410d30: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410D34u;
        goto label_410d34;
    }
    ctx->pc = 0x410D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x410D34u);
        ctx->pc = 0x410D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410D2Cu;
        // 0x410d30: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410D2Cu, 0x410D34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410D34u;
label_410d34:
    // 0x410d34: 0x8ec7b9c8  lw          $a3, -0x4638($s6)
    ctx->pc = 0x410d34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949320)));
label_410d38:
    // 0x410d38: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x410d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_410d3c:
    // 0x410d3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x410d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410d40:
    // 0x410d40: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x410d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_410d44:
    // 0x410d44: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x410d44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_410d48:
    // 0x410d48: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x410d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_410d4c:
    // 0x410d4c: 0x60f809  jalr        $v1
label_410d50:
    if (ctx->pc == 0x410D50u) {
        ctx->pc = 0x410D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410D4Cu;
        // 0x410d50: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410D54u;
        goto label_410d54;
    }
    ctx->pc = 0x410D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x410D54u);
        ctx->pc = 0x410D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410D4Cu;
        // 0x410d50: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410D4Cu, 0x410D54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410D54u;
label_410d54:
    // 0x410d54: 0x8e662154  lw          $a2, 0x2154($s3)
    ctx->pc = 0x410d54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8532)));
label_410d58:
    // 0x410d58: 0x8ec5b9c8  lw          $a1, -0x4638($s6)
    ctx->pc = 0x410d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949320)));
label_410d5c:
    // 0x410d5c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x410d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_410d60:
    // 0x410d60: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x410d60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_410d64:
    // 0x410d64: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x410d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_410d68:
    // 0x410d68: 0x60f809  jalr        $v1
label_410d6c:
    if (ctx->pc == 0x410D6Cu) {
        ctx->pc = 0x410D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410D68u;
        // 0x410d6c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410D70u;
        goto label_410d70;
    }
    ctx->pc = 0x410D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x410D70u);
        ctx->pc = 0x410D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410D68u;
        // 0x410d6c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410D68u, 0x410D70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410D70u;
label_410d70:
    // 0x410d70: 0x8e642154  lw          $a0, 0x2154($s3)
    ctx->pc = 0x410d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8532)));
label_410d74:
    // 0x410d74: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x410d74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_410d78:
    // 0x410d78: 0x24a58dc0  addiu       $a1, $a1, -0x7240
    ctx->pc = 0x410d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938048));
label_410d7c:
    // 0x410d7c: 0xc1378f6  jal         func_4DE3D8
label_410d80:
    if (ctx->pc == 0x410D80u) {
        ctx->pc = 0x410D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410D7Cu;
        // 0x410d80: 0x24060158  addiu       $a2, $zero, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410D84u;
        goto label_410d84;
    }
    ctx->pc = 0x410D7Cu;
    SET_GPR_U32(ctx, 31, 0x410D84u);
    ctx->pc = 0x410D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410D7Cu;
    // 0x410d80: 0x24060158  addiu       $a2, $zero, 0x158 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE3D8u, 0x410D7Cu, 0x410D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410D84u;
label_410d84:
    // 0x410d84: 0x8ec7b9c8  lw          $a3, -0x4638($s6)
    ctx->pc = 0x410d84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949320)));
label_410d88:
    // 0x410d88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x410d88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410d8c:
    // 0x410d8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x410d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410d90:
    // 0x410d90: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x410d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_410d94:
    // 0x410d94: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x410d94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_410d98:
    // 0x410d98: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x410d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_410d9c:
    // 0x410d9c: 0x60f809  jalr        $v1
label_410da0:
    if (ctx->pc == 0x410DA0u) {
        ctx->pc = 0x410DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410D9Cu;
        // 0x410da0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410DA4u;
        goto label_410da4;
    }
    ctx->pc = 0x410D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x410DA4u);
        ctx->pc = 0x410DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410D9Cu;
        // 0x410da0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410D9Cu, 0x410DA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410DA4u;
label_410da4:
    // 0x410da4: 0x8ee627e4  lw          $a2, 0x27E4($s7)
    ctx->pc = 0x410da4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
label_410da8:
    // 0x410da8: 0x8ec5b9c8  lw          $a1, -0x4638($s6)
    ctx->pc = 0x410da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949320)));
label_410dac:
    // 0x410dac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x410dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_410db0:
    // 0x410db0: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x410db0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_410db4:
    // 0x410db4: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x410db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_410db8:
    // 0x410db8: 0x60f809  jalr        $v1
label_410dbc:
    if (ctx->pc == 0x410DBCu) {
        ctx->pc = 0x410DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410DB8u;
        // 0x410dbc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410DC0u;
        goto label_410dc0;
    }
    ctx->pc = 0x410DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x410DC0u);
        ctx->pc = 0x410DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410DB8u;
        // 0x410dbc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410DB8u, 0x410DC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410DC0u;
label_410dc0:
    // 0x410dc0: 0xae60216c  sw          $zero, 0x216C($s3)
    ctx->pc = 0x410dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8556), GPR_U32(ctx, 0));
label_410dc4:
    // 0x410dc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x410dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_410dc8:
    // 0x410dc8: 0xae602158  sw          $zero, 0x2158($s3)
    ctx->pc = 0x410dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8536), GPR_U32(ctx, 0));
label_410dcc:
    // 0x410dcc: 0xae60215c  sw          $zero, 0x215C($s3)
    ctx->pc = 0x410dccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8540), GPR_U32(ctx, 0));
label_410dd0:
    // 0x410dd0: 0xae602160  sw          $zero, 0x2160($s3)
    ctx->pc = 0x410dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8544), GPR_U32(ctx, 0));
label_410dd4:
    // 0x410dd4: 0xae602164  sw          $zero, 0x2164($s3)
    ctx->pc = 0x410dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8548), GPR_U32(ctx, 0));
label_410dd8:
    // 0x410dd8: 0xae602168  sw          $zero, 0x2168($s3)
    ctx->pc = 0x410dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8552), GPR_U32(ctx, 0));
label_410ddc:
    // 0x410ddc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x410ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_410de0:
    // 0x410de0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x410de0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_410de4:
    // 0x410de4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x410de4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_410de8:
    // 0x410de8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x410de8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_410dec:
    // 0x410dec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x410decu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_410df0:
    // 0x410df0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x410df0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_410df4:
    // 0x410df4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x410df4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_410df8:
    // 0x410df8: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x410df8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_410dfc:
    // 0x410dfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x410dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_410e00:
    // 0x410e00: 0x3e00008  jr          $ra
label_410e04:
    if (ctx->pc == 0x410E04u) {
        ctx->pc = 0x410E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410E00u;
        // 0x410e04: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410E08u;
        goto label_fallthrough_0x410e00;
    }
    ctx->pc = 0x410E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x410E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410E00u;
        // 0x410e04: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x410e00:
    ctx->pc = 0x410E08u;
}
