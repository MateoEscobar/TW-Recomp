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

// Function: sub_004C1990
// Address: 0x4c1990 - 0x4c1cd0
void sub_004C1990_0x4c1990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C1990_0x4c1990");
#endif

    switch (ctx->pc) {
        case 0x4c1990u: goto label_4c1990;
        case 0x4c1994u: goto label_4c1994;
        case 0x4c1998u: goto label_4c1998;
        case 0x4c199cu: goto label_4c199c;
        case 0x4c19a0u: goto label_4c19a0;
        case 0x4c19a4u: goto label_4c19a4;
        case 0x4c19a8u: goto label_4c19a8;
        case 0x4c19acu: goto label_4c19ac;
        case 0x4c19b0u: goto label_4c19b0;
        case 0x4c19b4u: goto label_4c19b4;
        case 0x4c19b8u: goto label_4c19b8;
        case 0x4c19bcu: goto label_4c19bc;
        case 0x4c19c0u: goto label_4c19c0;
        case 0x4c19c4u: goto label_4c19c4;
        case 0x4c19c8u: goto label_4c19c8;
        case 0x4c19ccu: goto label_4c19cc;
        case 0x4c19d0u: goto label_4c19d0;
        case 0x4c19d4u: goto label_4c19d4;
        case 0x4c19d8u: goto label_4c19d8;
        case 0x4c19dcu: goto label_4c19dc;
        case 0x4c19e0u: goto label_4c19e0;
        case 0x4c19e4u: goto label_4c19e4;
        case 0x4c19e8u: goto label_4c19e8;
        case 0x4c19ecu: goto label_4c19ec;
        case 0x4c19f0u: goto label_4c19f0;
        case 0x4c19f4u: goto label_4c19f4;
        case 0x4c19f8u: goto label_4c19f8;
        case 0x4c19fcu: goto label_4c19fc;
        case 0x4c1a00u: goto label_4c1a00;
        case 0x4c1a04u: goto label_4c1a04;
        case 0x4c1a08u: goto label_4c1a08;
        case 0x4c1a0cu: goto label_4c1a0c;
        case 0x4c1a10u: goto label_4c1a10;
        case 0x4c1a14u: goto label_4c1a14;
        case 0x4c1a18u: goto label_4c1a18;
        case 0x4c1a1cu: goto label_4c1a1c;
        case 0x4c1a20u: goto label_4c1a20;
        case 0x4c1a24u: goto label_4c1a24;
        case 0x4c1a28u: goto label_4c1a28;
        case 0x4c1a2cu: goto label_4c1a2c;
        case 0x4c1a30u: goto label_4c1a30;
        case 0x4c1a34u: goto label_4c1a34;
        case 0x4c1a38u: goto label_4c1a38;
        case 0x4c1a3cu: goto label_4c1a3c;
        case 0x4c1a40u: goto label_4c1a40;
        case 0x4c1a44u: goto label_4c1a44;
        case 0x4c1a48u: goto label_4c1a48;
        case 0x4c1a4cu: goto label_4c1a4c;
        case 0x4c1a50u: goto label_4c1a50;
        case 0x4c1a54u: goto label_4c1a54;
        case 0x4c1a58u: goto label_4c1a58;
        case 0x4c1a5cu: goto label_4c1a5c;
        case 0x4c1a60u: goto label_4c1a60;
        case 0x4c1a64u: goto label_4c1a64;
        case 0x4c1a68u: goto label_4c1a68;
        case 0x4c1a6cu: goto label_4c1a6c;
        case 0x4c1a70u: goto label_4c1a70;
        case 0x4c1a74u: goto label_4c1a74;
        case 0x4c1a78u: goto label_4c1a78;
        case 0x4c1a7cu: goto label_4c1a7c;
        case 0x4c1a80u: goto label_4c1a80;
        case 0x4c1a84u: goto label_4c1a84;
        case 0x4c1a88u: goto label_4c1a88;
        case 0x4c1a8cu: goto label_4c1a8c;
        case 0x4c1a90u: goto label_4c1a90;
        case 0x4c1a94u: goto label_4c1a94;
        case 0x4c1a98u: goto label_4c1a98;
        case 0x4c1a9cu: goto label_4c1a9c;
        case 0x4c1aa0u: goto label_4c1aa0;
        case 0x4c1aa4u: goto label_4c1aa4;
        case 0x4c1aa8u: goto label_4c1aa8;
        case 0x4c1aacu: goto label_4c1aac;
        case 0x4c1ab0u: goto label_4c1ab0;
        case 0x4c1ab4u: goto label_4c1ab4;
        case 0x4c1ab8u: goto label_4c1ab8;
        case 0x4c1abcu: goto label_4c1abc;
        case 0x4c1ac0u: goto label_4c1ac0;
        case 0x4c1ac4u: goto label_4c1ac4;
        case 0x4c1ac8u: goto label_4c1ac8;
        case 0x4c1accu: goto label_4c1acc;
        case 0x4c1ad0u: goto label_4c1ad0;
        case 0x4c1ad4u: goto label_4c1ad4;
        case 0x4c1ad8u: goto label_4c1ad8;
        case 0x4c1adcu: goto label_4c1adc;
        case 0x4c1ae0u: goto label_4c1ae0;
        case 0x4c1ae4u: goto label_4c1ae4;
        case 0x4c1ae8u: goto label_4c1ae8;
        case 0x4c1aecu: goto label_4c1aec;
        case 0x4c1af0u: goto label_4c1af0;
        case 0x4c1af4u: goto label_4c1af4;
        case 0x4c1af8u: goto label_4c1af8;
        case 0x4c1afcu: goto label_4c1afc;
        case 0x4c1b00u: goto label_4c1b00;
        case 0x4c1b04u: goto label_4c1b04;
        case 0x4c1b08u: goto label_4c1b08;
        case 0x4c1b0cu: goto label_4c1b0c;
        case 0x4c1b10u: goto label_4c1b10;
        case 0x4c1b14u: goto label_4c1b14;
        case 0x4c1b18u: goto label_4c1b18;
        case 0x4c1b1cu: goto label_4c1b1c;
        case 0x4c1b20u: goto label_4c1b20;
        case 0x4c1b24u: goto label_4c1b24;
        case 0x4c1b28u: goto label_4c1b28;
        case 0x4c1b2cu: goto label_4c1b2c;
        case 0x4c1b30u: goto label_4c1b30;
        case 0x4c1b34u: goto label_4c1b34;
        case 0x4c1b38u: goto label_4c1b38;
        case 0x4c1b3cu: goto label_4c1b3c;
        case 0x4c1b40u: goto label_4c1b40;
        case 0x4c1b44u: goto label_4c1b44;
        case 0x4c1b48u: goto label_4c1b48;
        case 0x4c1b4cu: goto label_4c1b4c;
        case 0x4c1b50u: goto label_4c1b50;
        case 0x4c1b54u: goto label_4c1b54;
        case 0x4c1b58u: goto label_4c1b58;
        case 0x4c1b5cu: goto label_4c1b5c;
        case 0x4c1b60u: goto label_4c1b60;
        case 0x4c1b64u: goto label_4c1b64;
        case 0x4c1b68u: goto label_4c1b68;
        case 0x4c1b6cu: goto label_4c1b6c;
        case 0x4c1b70u: goto label_4c1b70;
        case 0x4c1b74u: goto label_4c1b74;
        case 0x4c1b78u: goto label_4c1b78;
        case 0x4c1b7cu: goto label_4c1b7c;
        case 0x4c1b80u: goto label_4c1b80;
        case 0x4c1b84u: goto label_4c1b84;
        case 0x4c1b88u: goto label_4c1b88;
        case 0x4c1b8cu: goto label_4c1b8c;
        case 0x4c1b90u: goto label_4c1b90;
        case 0x4c1b94u: goto label_4c1b94;
        case 0x4c1b98u: goto label_4c1b98;
        case 0x4c1b9cu: goto label_4c1b9c;
        case 0x4c1ba0u: goto label_4c1ba0;
        case 0x4c1ba4u: goto label_4c1ba4;
        case 0x4c1ba8u: goto label_4c1ba8;
        case 0x4c1bacu: goto label_4c1bac;
        case 0x4c1bb0u: goto label_4c1bb0;
        case 0x4c1bb4u: goto label_4c1bb4;
        case 0x4c1bb8u: goto label_4c1bb8;
        case 0x4c1bbcu: goto label_4c1bbc;
        case 0x4c1bc0u: goto label_4c1bc0;
        case 0x4c1bc4u: goto label_4c1bc4;
        case 0x4c1bc8u: goto label_4c1bc8;
        case 0x4c1bccu: goto label_4c1bcc;
        case 0x4c1bd0u: goto label_4c1bd0;
        case 0x4c1bd4u: goto label_4c1bd4;
        case 0x4c1bd8u: goto label_4c1bd8;
        case 0x4c1bdcu: goto label_4c1bdc;
        case 0x4c1be0u: goto label_4c1be0;
        case 0x4c1be4u: goto label_4c1be4;
        case 0x4c1be8u: goto label_4c1be8;
        case 0x4c1becu: goto label_4c1bec;
        case 0x4c1bf0u: goto label_4c1bf0;
        case 0x4c1bf4u: goto label_4c1bf4;
        case 0x4c1bf8u: goto label_4c1bf8;
        case 0x4c1bfcu: goto label_4c1bfc;
        case 0x4c1c00u: goto label_4c1c00;
        case 0x4c1c04u: goto label_4c1c04;
        case 0x4c1c08u: goto label_4c1c08;
        case 0x4c1c0cu: goto label_4c1c0c;
        case 0x4c1c10u: goto label_4c1c10;
        case 0x4c1c14u: goto label_4c1c14;
        case 0x4c1c18u: goto label_4c1c18;
        case 0x4c1c1cu: goto label_4c1c1c;
        case 0x4c1c20u: goto label_4c1c20;
        case 0x4c1c24u: goto label_4c1c24;
        case 0x4c1c28u: goto label_4c1c28;
        case 0x4c1c2cu: goto label_4c1c2c;
        case 0x4c1c30u: goto label_4c1c30;
        case 0x4c1c34u: goto label_4c1c34;
        case 0x4c1c38u: goto label_4c1c38;
        case 0x4c1c3cu: goto label_4c1c3c;
        case 0x4c1c40u: goto label_4c1c40;
        case 0x4c1c44u: goto label_4c1c44;
        case 0x4c1c48u: goto label_4c1c48;
        case 0x4c1c4cu: goto label_4c1c4c;
        case 0x4c1c50u: goto label_4c1c50;
        case 0x4c1c54u: goto label_4c1c54;
        case 0x4c1c58u: goto label_4c1c58;
        case 0x4c1c5cu: goto label_4c1c5c;
        case 0x4c1c60u: goto label_4c1c60;
        case 0x4c1c64u: goto label_4c1c64;
        case 0x4c1c68u: goto label_4c1c68;
        case 0x4c1c6cu: goto label_4c1c6c;
        case 0x4c1c70u: goto label_4c1c70;
        case 0x4c1c74u: goto label_4c1c74;
        case 0x4c1c78u: goto label_4c1c78;
        case 0x4c1c7cu: goto label_4c1c7c;
        case 0x4c1c80u: goto label_4c1c80;
        case 0x4c1c84u: goto label_4c1c84;
        case 0x4c1c88u: goto label_4c1c88;
        case 0x4c1c8cu: goto label_4c1c8c;
        case 0x4c1c90u: goto label_4c1c90;
        case 0x4c1c94u: goto label_4c1c94;
        case 0x4c1c98u: goto label_4c1c98;
        case 0x4c1c9cu: goto label_4c1c9c;
        case 0x4c1ca0u: goto label_4c1ca0;
        case 0x4c1ca4u: goto label_4c1ca4;
        case 0x4c1ca8u: goto label_4c1ca8;
        case 0x4c1cacu: goto label_4c1cac;
        case 0x4c1cb0u: goto label_4c1cb0;
        case 0x4c1cb4u: goto label_4c1cb4;
        case 0x4c1cb8u: goto label_4c1cb8;
        case 0x4c1cbcu: goto label_4c1cbc;
        case 0x4c1cc0u: goto label_4c1cc0;
        case 0x4c1cc4u: goto label_4c1cc4;
        case 0x4c1cc8u: goto label_4c1cc8;
        case 0x4c1cccu: goto label_4c1ccc;
        default: break;
    }

    ctx->pc = 0x4c1990u;

label_4c1990:
    // 0x4c1990: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4c1990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4c1994:
    // 0x4c1994: 0x2403017c  addiu       $v1, $zero, 0x17C
    ctx->pc = 0x4c1994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
label_4c1998:
    // 0x4c1998: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4c1998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_4c199c:
    // 0x4c199c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4c199cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_4c19a0:
    // 0x4c19a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c19a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c19a4:
    // 0x4c19a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4c19a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_4c19a8:
    // 0x4c19a8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4c19a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_4c19ac:
    // 0x4c19ac: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4c19acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_4c19b0:
    // 0x4c19b0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4c19b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_4c19b4:
    // 0x4c19b4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4c19b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_4c19b8:
    // 0x4c19b8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4c19b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_4c19bc:
    // 0x4c19bc: 0x8e220300  lw          $v0, 0x300($s1)
    ctx->pc = 0x4c19bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
label_4c19c0:
    // 0x4c19c0: 0x8e240308  lw          $a0, 0x308($s1)
    ctx->pc = 0x4c19c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
label_4c19c4:
    // 0x4c19c4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4c19c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4c19c8:
    // 0x4c19c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4c19c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4c19cc:
    // 0x4c19cc: 0x8c43fe84  lw          $v1, -0x17C($v0)
    ctx->pc = 0x4c19ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966916)));
label_4c19d0:
    // 0x4c19d0: 0x106000b5  beqz        $v1, . + 4 + (0xB5 << 2)
label_4c19d4:
    if (ctx->pc == 0x4C19D4u) {
        ctx->pc = 0x4C19D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C19D0u;
        // 0x4c19d4: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C19D8u;
        goto label_4c19d8;
    }
    ctx->pc = 0x4C19D0u;
    {
        const bool branch_taken_0x4c19d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C19D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C19D0u;
        // 0x4c19d4: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c19d0) {
            ctx->pc = 0x4C1CA8u;
            goto label_4c1ca8;
        }
    }
    ctx->pc = 0x4C19D8u;
label_4c19d8:
    // 0x4c19d8: 0x26250358  addiu       $a1, $s1, 0x358
    ctx->pc = 0x4c19d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 856));
label_4c19dc:
    // 0x4c19dc: 0x8c442790  lw          $a0, 0x2790($v0)
    ctx->pc = 0x4c19dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10128)));
label_4c19e0:
    // 0x4c19e0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x4c19e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c19e4:
    // 0x4c19e4: 0xc132380  jal         func_4C8E00
label_4c19e8:
    if (ctx->pc == 0x4C19E8u) {
        ctx->pc = 0x4C19E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C19E4u;
        // 0x4c19e8: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C19ECu;
        goto label_4c19ec;
    }
    ctx->pc = 0x4C19E4u;
    SET_GPR_U32(ctx, 31, 0x4C19ECu);
    ctx->pc = 0x4C19E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C19E4u;
    // 0x4c19e8: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8E00u, 0x4C19E4u, 0x4C19ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C19ECu;
label_4c19ec:
    // 0x4c19ec: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
label_4c19f0:
    if (ctx->pc == 0x4C19F0u) {
        ctx->pc = 0x4C19F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C19ECu;
        // 0x4c19f0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C19F4u;
        goto label_4c19f4;
    }
    ctx->pc = 0x4C19ECu;
    {
        const bool branch_taken_0x4c19ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C19F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C19ECu;
        // 0x4c19f0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c19ec) {
            ctx->pc = 0x4C1CACu;
            goto label_4c1cac;
        }
    }
    ctx->pc = 0x4C19F4u;
label_4c19f4:
    // 0x4c19f4: 0x8e220300  lw          $v0, 0x300($s1)
    ctx->pc = 0x4c19f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
label_4c19f8:
    // 0x4c19f8: 0x104000a8  beqz        $v0, . + 4 + (0xA8 << 2)
label_4c19fc:
    if (ctx->pc == 0x4C19FCu) {
        ctx->pc = 0x4C19FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C19F8u;
        // 0x4c19fc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1A00u;
        goto label_4c1a00;
    }
    ctx->pc = 0x4C19F8u;
    {
        const bool branch_taken_0x4c19f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C19FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C19F8u;
        // 0x4c19fc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c19f8) {
            ctx->pc = 0x4C1C9Cu;
            goto label_4c1c9c;
        }
    }
    ctx->pc = 0x4C1A00u;
label_4c1a00:
    // 0x4c1a00: 0x2413017c  addiu       $s3, $zero, 0x17C
    ctx->pc = 0x4c1a00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
label_4c1a04:
    // 0x4c1a04: 0x10000098  b           . + 4 + (0x98 << 2)
label_4c1a08:
    if (ctx->pc == 0x4C1A08u) {
        ctx->pc = 0x4C1A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1A04u;
        // 0x4c1a08: 0x26540001  addiu       $s4, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1A0Cu;
        goto label_4c1a0c;
    }
    ctx->pc = 0x4C1A04u;
    {
        const bool branch_taken_0x4c1a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1A04u;
        // 0x4c1a08: 0x26540001  addiu       $s4, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1a04) {
            ctx->pc = 0x4C1C68u;
            goto label_4c1c68;
        }
    }
    ctx->pc = 0x4C1A0Cu;
label_4c1a0c:
    // 0x4c1a0c: 0x0  nop
    ctx->pc = 0x4c1a0cu;
    // NOP
label_4c1a10:
    // 0x4c1a10: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x4c1a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_4c1a14:
    // 0x4c1a14: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x4c1a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_4c1a18:
    // 0x4c1a18: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x4c1a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_4c1a1c:
    // 0x4c1a1c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x4c1a1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_4c1a20:
    // 0x4c1a20: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_4c1a24:
    if (ctx->pc == 0x4C1A24u) {
        ctx->pc = 0x4C1A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1A20u;
        // 0x4c1a24: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1A28u;
        goto label_4c1a28;
    }
    ctx->pc = 0x4C1A20u;
    {
        const bool branch_taken_0x4c1a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c1a20) {
            ctx->pc = 0x4C1A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C1A20u;
            // 0x4c1a24: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C1A48u;
            goto label_4c1a48;
        }
    }
    ctx->pc = 0x4C1A28u;
label_4c1a28:
    // 0x4c1a28: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x4c1a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4c1a2c:
    // 0x4c1a2c: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x4c1a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4c1a30:
    // 0x4c1a30: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x4c1a30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4c1a34:
    // 0x4c1a34: 0x50400095  beql        $v0, $zero, . + 4 + (0x95 << 2)
label_4c1a38:
    if (ctx->pc == 0x4C1A38u) {
        ctx->pc = 0x4C1A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1A34u;
        // 0x4c1a38: 0x8e220300  lw          $v0, 0x300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1A3Cu;
        goto label_4c1a3c;
    }
    ctx->pc = 0x4C1A34u;
    {
        const bool branch_taken_0x4c1a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c1a34) {
            ctx->pc = 0x4C1A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C1A34u;
            // 0x4c1a38: 0x8e220300  lw          $v0, 0x300($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C1C8Cu;
            goto label_4c1c8c;
        }
    }
    ctx->pc = 0x4C1A3Cu;
label_4c1a3c:
    // 0x4c1a3c: 0x50a00093  beql        $a1, $zero, . + 4 + (0x93 << 2)
label_4c1a40:
    if (ctx->pc == 0x4C1A40u) {
        ctx->pc = 0x4C1A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1A3Cu;
        // 0x4c1a40: 0x8e220300  lw          $v0, 0x300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1A44u;
        goto label_4c1a44;
    }
    ctx->pc = 0x4C1A3Cu;
    {
        const bool branch_taken_0x4c1a3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c1a3c) {
            ctx->pc = 0x4C1A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C1A3Cu;
            // 0x4c1a40: 0x8e220300  lw          $v0, 0x300($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C1C8Cu;
            goto label_4c1c8c;
        }
    }
    ctx->pc = 0x4C1A44u;
label_4c1a44:
    // 0x4c1a44: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4c1a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4c1a48:
    // 0x4c1a48: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4c1a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4c1a4c:
    // 0x4c1a4c: 0x40f809  jalr        $v0
label_4c1a50:
    if (ctx->pc == 0x4C1A50u) {
        ctx->pc = 0x4C1A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1A4Cu;
        // 0x4c1a50: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1A54u;
        goto label_4c1a54;
    }
    ctx->pc = 0x4C1A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C1A54u);
        ctx->pc = 0x4C1A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1A4Cu;
        // 0x4c1a50: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C1A4Cu, 0x4C1A54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C1A54u;
label_4c1a54:
    // 0x4c1a54: 0x5040008d  beql        $v0, $zero, . + 4 + (0x8D << 2)
label_4c1a58:
    if (ctx->pc == 0x4C1A58u) {
        ctx->pc = 0x4C1A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1A54u;
        // 0x4c1a58: 0x8e220300  lw          $v0, 0x300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1A5Cu;
        goto label_4c1a5c;
    }
    ctx->pc = 0x4C1A54u;
    {
        const bool branch_taken_0x4c1a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c1a54) {
            ctx->pc = 0x4C1A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C1A54u;
            // 0x4c1a58: 0x8e220300  lw          $v0, 0x300($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C1C8Cu;
            goto label_4c1c8c;
        }
    }
    ctx->pc = 0x4C1A5Cu;
label_4c1a5c:
    // 0x4c1a5c: 0x8e220308  lw          $v0, 0x308($s1)
    ctx->pc = 0x4c1a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
label_4c1a60:
    // 0x4c1a60: 0x2023821  addu        $a3, $s0, $v0
    ctx->pc = 0x4c1a60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_4c1a64:
    // 0x4c1a64: 0x8ce30044  lw          $v1, 0x44($a3)
    ctx->pc = 0x4c1a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 68)));
label_4c1a68:
    // 0x4c1a68: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_4c1a6c:
    if (ctx->pc == 0x4C1A6Cu) {
        ctx->pc = 0x4C1A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1A68u;
        // 0x4c1a6c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1A70u;
        goto label_4c1a70;
    }
    ctx->pc = 0x4C1A68u;
    {
        const bool branch_taken_0x4c1a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1A68u;
        // 0x4c1a6c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1a68) {
            ctx->pc = 0x4C1A78u;
            goto label_4c1a78;
        }
    }
    ctx->pc = 0x4C1A70u;
label_4c1a70:
    // 0x4c1a70: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c1a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4c1a74:
    // 0x4c1a74: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4c1a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_4c1a78:
    // 0x4c1a78: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x4c1a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4c1a7c:
    // 0x4c1a7c: 0x8ce30040  lw          $v1, 0x40($a3)
    ctx->pc = 0x4c1a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
label_4c1a80:
    // 0x4c1a80: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4c1a80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4c1a84:
    // 0x4c1a84: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4c1a88:
    if (ctx->pc == 0x4C1A88u) {
        ctx->pc = 0x4C1A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1A84u;
        // 0x4c1a88: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1A8Cu;
        goto label_4c1a8c;
    }
    ctx->pc = 0x4C1A84u;
    {
        const bool branch_taken_0x4c1a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c1a84) {
            ctx->pc = 0x4C1A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C1A84u;
            // 0x4c1a88: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C1A8Cu;
            goto label_4c1a8c;
        }
    }
    ctx->pc = 0x4C1A8Cu;
label_4c1a8c:
    // 0x4c1a8c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x4c1a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4c1a90:
    // 0x4c1a90: 0x8ce20048  lw          $v0, 0x48($a3)
    ctx->pc = 0x4c1a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
label_4c1a94:
    // 0x4c1a94: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x4c1a94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4c1a98:
    // 0x4c1a98: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_4c1a9c:
    if (ctx->pc == 0x4C1A9Cu) {
        ctx->pc = 0x4C1A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1A98u;
        // 0x4c1a9c: 0x8ce20040  lw          $v0, 0x40($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1AA0u;
        goto label_4c1aa0;
    }
    ctx->pc = 0x4C1A98u;
    {
        const bool branch_taken_0x4c1a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c1a98) {
            ctx->pc = 0x4C1A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C1A98u;
            // 0x4c1a9c: 0x8ce20040  lw          $v0, 0x40($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C1ABCu;
            goto label_4c1abc;
        }
    }
    ctx->pc = 0x4C1AA0u;
label_4c1aa0:
    // 0x4c1aa0: 0x8ce20058  lw          $v0, 0x58($a3)
    ctx->pc = 0x4c1aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
label_4c1aa4:
    // 0x4c1aa4: 0x8ce40044  lw          $a0, 0x44($a3)
    ctx->pc = 0x4c1aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 68)));
label_4c1aa8:
    // 0x4c1aa8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4c1aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4c1aac:
    // 0x4c1aac: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x4c1aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_4c1ab0:
    // 0x4c1ab0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c1ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c1ab4:
    // 0x4c1ab4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4c1ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_4c1ab8:
    // 0x4c1ab8: 0x8ce20040  lw          $v0, 0x40($a3)
    ctx->pc = 0x4c1ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
label_4c1abc:
    // 0x4c1abc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4c1abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4c1ac0:
    // 0x4c1ac0: 0x8ce40030  lw          $a0, 0x30($a3)
    ctx->pc = 0x4c1ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
label_4c1ac4:
    // 0x4c1ac4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4c1ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4c1ac8:
    // 0x4c1ac8: 0x8ce50038  lw          $a1, 0x38($a3)
    ctx->pc = 0x4c1ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
label_4c1acc:
    // 0x4c1acc: 0xace20040  sw          $v0, 0x40($a3)
    ctx->pc = 0x4c1accu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 2));
label_4c1ad0:
    // 0x4c1ad0: 0x858023  subu        $s0, $a0, $a1
    ctx->pc = 0x4c1ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4c1ad4:
    // 0x4c1ad4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x4c1ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4c1ad8:
    // 0x4c1ad8: 0x206102b  sltu        $v0, $s0, $a2
    ctx->pc = 0x4c1ad8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_4c1adc:
    // 0x4c1adc: 0x5040003d  beql        $v0, $zero, . + 4 + (0x3D << 2)
label_4c1ae0:
    if (ctx->pc == 0x4C1AE0u) {
        ctx->pc = 0x4C1AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1ADCu;
        // 0x4c1ae0: 0x8ce20044  lw          $v0, 0x44($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1AE4u;
        goto label_4c1ae4;
    }
    ctx->pc = 0x4C1ADCu;
    {
        const bool branch_taken_0x4c1adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c1adc) {
            ctx->pc = 0x4C1AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C1ADCu;
            // 0x4c1ae0: 0x8ce20044  lw          $v0, 0x44($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C1BD4u;
            goto label_4c1bd4;
        }
    }
    ctx->pc = 0x4C1AE4u;
label_4c1ae4:
    // 0x4c1ae4: 0x52000018  beql        $s0, $zero, . + 4 + (0x18 << 2)
label_4c1ae8:
    if (ctx->pc == 0x4C1AE8u) {
        ctx->pc = 0x4C1AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1AE4u;
        // 0x4c1ae8: 0x2532018  mult        $a0, $s2, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1AECu;
        goto label_4c1aec;
    }
    ctx->pc = 0x4C1AE4u;
    {
        const bool branch_taken_0x4c1ae4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c1ae4) {
            ctx->pc = 0x4C1AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C1AE4u;
            // 0x4c1ae8: 0x2532018  mult        $a0, $s2, $s3 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C1B48u;
            goto label_4c1b48;
        }
    }
    ctx->pc = 0x4C1AECu;
label_4c1aec:
    // 0x4c1aec: 0x8ce20044  lw          $v0, 0x44($a3)
    ctx->pc = 0x4c1aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 68)));
label_4c1af0:
    // 0x4c1af0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4c1af4:
    if (ctx->pc == 0x4C1AF4u) {
        ctx->pc = 0x4C1AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1AF0u;
        // 0x4c1af4: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1AF8u;
        goto label_4c1af8;
    }
    ctx->pc = 0x4C1AF0u;
    {
        const bool branch_taken_0x4c1af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1AF0u;
        // 0x4c1af4: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1af0) {
            ctx->pc = 0x4C1B2Cu;
            goto label_4c1b2c;
        }
    }
    ctx->pc = 0x4C1AF8u;
label_4c1af8:
    // 0x4c1af8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_4c1afc:
    if (ctx->pc == 0x4C1AFCu) {
        ctx->pc = 0x4C1AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1AF8u;
        // 0x4c1afc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1B00u;
        goto label_4c1b00;
    }
    ctx->pc = 0x4C1AF8u;
    {
        const bool branch_taken_0x4c1af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1AF8u;
        // 0x4c1afc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1af8) {
            ctx->pc = 0x4C1B24u;
            goto label_4c1b24;
        }
    }
    ctx->pc = 0x4C1B00u;
label_4c1b00:
    // 0x4c1b00: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c1b00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4c1b04:
    // 0x4c1b04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4c1b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4c1b08:
    // 0x4c1b08: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4c1b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_4c1b0c:
    // 0x4c1b0c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c1b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4c1b10:
    // 0x4c1b10: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x4c1b10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_4c1b14:
    // 0x4c1b14: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x4c1b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
label_4c1b18:
    // 0x4c1b18: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x4c1b18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_4c1b1c:
    // 0x4c1b1c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_4c1b20:
    if (ctx->pc == 0x4C1B20u) {
        ctx->pc = 0x4C1B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1B1Cu;
        // 0x4c1b20: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1B24u;
        goto label_4c1b24;
    }
    ctx->pc = 0x4C1B1Cu;
    {
        const bool branch_taken_0x4c1b1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C1B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1B1Cu;
        // 0x4c1b20: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1b1c) {
            ctx->pc = 0x4C1B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c1b00;
        }
    }
    ctx->pc = 0x4C1B24u;
label_4c1b24:
    // 0x4c1b24: 0x10000007  b           . + 4 + (0x7 << 2)
label_4c1b28:
    if (ctx->pc == 0x4C1B28u) {
        ctx->pc = 0x4C1B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1B24u;
        // 0x4c1b28: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1B2Cu;
        goto label_4c1b2c;
    }
    ctx->pc = 0x4C1B24u;
    {
        const bool branch_taken_0x4c1b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1B24u;
        // 0x4c1b28: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1b24) {
            ctx->pc = 0x4C1B44u;
            goto label_4c1b44;
        }
    }
    ctx->pc = 0x4C1B2Cu;
label_4c1b2c:
    // 0x4c1b2c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4c1b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4c1b30:
    // 0x4c1b30: 0xc133518  jal         func_4CD460
label_4c1b34:
    if (ctx->pc == 0x4C1B34u) {
        ctx->pc = 0x4C1B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1B30u;
        // 0x4c1b34: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1B38u;
        goto label_4c1b38;
    }
    ctx->pc = 0x4C1B30u;
    SET_GPR_U32(ctx, 31, 0x4C1B38u);
    ctx->pc = 0x4C1B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1B30u;
    // 0x4c1b34: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD460u, 0x4C1B30u, 0x4C1B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1B38u;
label_4c1b38:
    // 0x4c1b38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4c1b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4c1b3c:
    // 0x4c1b3c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4c1b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4c1b40:
    // 0x4c1b40: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4c1b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4c1b44:
    // 0x4c1b44: 0x2532018  mult        $a0, $s2, $s3
    ctx->pc = 0x4c1b44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4c1b48:
    // 0x4c1b48: 0x8e220308  lw          $v0, 0x308($s1)
    ctx->pc = 0x4c1b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
label_4c1b4c:
    // 0x4c1b4c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4c1b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4c1b50:
    // 0x4c1b50: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x4c1b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_4c1b54:
    // 0x4c1b54: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_4c1b58:
    if (ctx->pc == 0x4C1B58u) {
        ctx->pc = 0x4C1B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1B54u;
        // 0x4c1b58: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1B5Cu;
        goto label_4c1b5c;
    }
    ctx->pc = 0x4C1B54u;
    {
        const bool branch_taken_0x4c1b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1B54u;
        // 0x4c1b58: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1b54) {
            ctx->pc = 0x4C1B9Cu;
            goto label_4c1b9c;
        }
    }
    ctx->pc = 0x4C1B5Cu;
label_4c1b5c:
    // 0x4c1b5c: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x4c1b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_4c1b60:
    // 0x4c1b60: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x4c1b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4c1b64:
    // 0x4c1b64: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x4c1b64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_4c1b68:
    // 0x4c1b68: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_4c1b6c:
    if (ctx->pc == 0x4C1B6Cu) {
        ctx->pc = 0x4C1B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1B68u;
        // 0x4c1b6c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1B70u;
        goto label_4c1b70;
    }
    ctx->pc = 0x4C1B68u;
    {
        const bool branch_taken_0x4c1b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1B68u;
        // 0x4c1b6c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1b68) {
            ctx->pc = 0x4C1BB0u;
            goto label_4c1bb0;
        }
    }
    ctx->pc = 0x4C1B70u;
label_4c1b70:
    // 0x4c1b70: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4c1b70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_4c1b74:
    // 0x4c1b74: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4c1b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4c1b78:
    // 0x4c1b78: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x4c1b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_4c1b7c:
    // 0x4c1b7c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c1b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4c1b80:
    // 0x4c1b80: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x4c1b80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_4c1b84:
    // 0x4c1b84: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x4c1b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
label_4c1b88:
    // 0x4c1b88: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4c1b88u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_4c1b8c:
    // 0x4c1b8c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_4c1b90:
    if (ctx->pc == 0x4C1B90u) {
        ctx->pc = 0x4C1B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1B8Cu;
        // 0x4c1b90: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1B94u;
        goto label_4c1b94;
    }
    ctx->pc = 0x4C1B8Cu;
    {
        const bool branch_taken_0x4c1b8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C1B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1B8Cu;
        // 0x4c1b90: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1b8c) {
            ctx->pc = 0x4C1B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c1b70;
        }
    }
    ctx->pc = 0x4C1B94u;
label_4c1b94:
    // 0x4c1b94: 0x10000007  b           . + 4 + (0x7 << 2)
label_4c1b98:
    if (ctx->pc == 0x4C1B98u) {
        ctx->pc = 0x4C1B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1B94u;
        // 0x4c1b98: 0x2532018  mult        $a0, $s2, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1B9Cu;
        goto label_4c1b9c;
    }
    ctx->pc = 0x4C1B94u;
    {
        const bool branch_taken_0x4c1b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1B94u;
        // 0x4c1b98: 0x2532018  mult        $a0, $s2, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1b94) {
            ctx->pc = 0x4C1BB4u;
            goto label_4c1bb4;
        }
    }
    ctx->pc = 0x4C1B9Cu;
label_4c1b9c:
    // 0x4c1b9c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x4c1b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4c1ba0:
    // 0x4c1ba0: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x4c1ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_4c1ba4:
    // 0x4c1ba4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4c1ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4c1ba8:
    // 0x4c1ba8: 0xc133518  jal         func_4CD460
label_4c1bac:
    if (ctx->pc == 0x4C1BACu) {
        ctx->pc = 0x4C1BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1BA8u;
        // 0x4c1bac: 0xd03023  subu        $a2, $a2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1BB0u;
        goto label_4c1bb0;
    }
    ctx->pc = 0x4C1BA8u;
    SET_GPR_U32(ctx, 31, 0x4C1BB0u);
    ctx->pc = 0x4C1BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1BA8u;
    // 0x4c1bac: 0xd03023  subu        $a2, $a2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD460u, 0x4C1BA8u, 0x4C1BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1BB0u;
label_4c1bb0:
    // 0x4c1bb0: 0x2532018  mult        $a0, $s2, $s3
    ctx->pc = 0x4c1bb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4c1bb4:
    // 0x4c1bb4: 0x8e250308  lw          $a1, 0x308($s1)
    ctx->pc = 0x4c1bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
label_4c1bb8:
    // 0x4c1bb8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4c1bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4c1bbc:
    // 0x4c1bbc: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x4c1bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4c1bc0:
    // 0x4c1bc0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4c1bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4c1bc4:
    // 0x4c1bc4: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x4c1bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_4c1bc8:
    // 0x4c1bc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4c1bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4c1bcc:
    // 0x4c1bcc: 0x1000001a  b           . + 4 + (0x1A << 2)
label_4c1bd0:
    if (ctx->pc == 0x4C1BD0u) {
        ctx->pc = 0x4C1BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1BCCu;
        // 0x4c1bd0: 0xac820038  sw          $v0, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1BD4u;
        goto label_4c1bd4;
    }
    ctx->pc = 0x4C1BCCu;
    {
        const bool branch_taken_0x4c1bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1BCCu;
        // 0x4c1bd0: 0xac820038  sw          $v0, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1bcc) {
            ctx->pc = 0x4C1C38u;
            goto label_4c1c38;
        }
    }
    ctx->pc = 0x4C1BD4u;
label_4c1bd4:
    // 0x4c1bd4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_4c1bd8:
    if (ctx->pc == 0x4C1BD8u) {
        ctx->pc = 0x4C1BDCu;
        goto label_4c1bdc;
    }
    ctx->pc = 0x4C1BD4u;
    {
        const bool branch_taken_0x4c1bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c1bd4) {
            ctx->pc = 0x4C1C14u;
            goto label_4c1c14;
        }
    }
    ctx->pc = 0x4C1BDCu;
label_4c1bdc:
    // 0x4c1bdc: 0x63042  srl         $a2, $a2, 1
    ctx->pc = 0x4c1bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_4c1be0:
    // 0x4c1be0: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
label_4c1be4:
    if (ctx->pc == 0x4C1BE4u) {
        ctx->pc = 0x4C1BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1BE0u;
        // 0x4c1be4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1BE8u;
        goto label_4c1be8;
    }
    ctx->pc = 0x4C1BE0u;
    {
        const bool branch_taken_0x4c1be0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1BE0u;
        // 0x4c1be4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1be0) {
            ctx->pc = 0x4C1C1Cu;
            goto label_4c1c1c;
        }
    }
    ctx->pc = 0x4C1BE8u;
label_4c1be8:
    // 0x4c1be8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c1be8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4c1bec:
    // 0x4c1bec: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4c1becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_4c1bf0:
    // 0x4c1bf0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4c1bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_4c1bf4:
    // 0x4c1bf4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c1bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4c1bf8:
    // 0x4c1bf8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x4c1bf8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_4c1bfc:
    // 0x4c1bfc: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x4c1bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
label_4c1c00:
    // 0x4c1c00: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x4c1c00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_4c1c04:
    // 0x4c1c04: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
label_4c1c08:
    if (ctx->pc == 0x4C1C08u) {
        ctx->pc = 0x4C1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1C04u;
        // 0x4c1c08: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1C0Cu;
        goto label_4c1c0c;
    }
    ctx->pc = 0x4C1C04u;
    {
        const bool branch_taken_0x4c1c04 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1C04u;
        // 0x4c1c08: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1c04) {
            ctx->pc = 0x4C1BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c1be8;
        }
    }
    ctx->pc = 0x4C1C0Cu;
label_4c1c0c:
    // 0x4c1c0c: 0x10000004  b           . + 4 + (0x4 << 2)
label_4c1c10:
    if (ctx->pc == 0x4C1C10u) {
        ctx->pc = 0x4C1C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1C0Cu;
        // 0x4c1c10: 0x2531818  mult        $v1, $s2, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1C14u;
        goto label_4c1c14;
    }
    ctx->pc = 0x4C1C0Cu;
    {
        const bool branch_taken_0x4c1c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1C0Cu;
        // 0x4c1c10: 0x2531818  mult        $v1, $s2, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1c0c) {
            ctx->pc = 0x4C1C20u;
            goto label_4c1c20;
        }
    }
    ctx->pc = 0x4C1C14u;
label_4c1c14:
    // 0x4c1c14: 0xc133518  jal         func_4CD460
label_4c1c18:
    if (ctx->pc == 0x4C1C18u) {
        ctx->pc = 0x4C1C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1C14u;
        // 0x4c1c18: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1C1Cu;
        goto label_4c1c1c;
    }
    ctx->pc = 0x4C1C14u;
    SET_GPR_U32(ctx, 31, 0x4C1C1Cu);
    ctx->pc = 0x4C1C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1C14u;
    // 0x4c1c18: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD460u, 0x4C1C14u, 0x4C1C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1C1Cu;
label_4c1c1c:
    // 0x4c1c1c: 0x2531818  mult        $v1, $s2, $s3
    ctx->pc = 0x4c1c1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4c1c20:
    // 0x4c1c20: 0x8e240308  lw          $a0, 0x308($s1)
    ctx->pc = 0x4c1c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
label_4c1c24:
    // 0x4c1c24: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x4c1c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4c1c28:
    // 0x4c1c28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4c1c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4c1c2c:
    // 0x4c1c2c: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x4c1c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_4c1c30:
    // 0x4c1c30: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4c1c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4c1c34:
    // 0x4c1c34: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x4c1c34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
label_4c1c38:
    // 0x4c1c38: 0x2532018  mult        $a0, $s2, $s3
    ctx->pc = 0x4c1c38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4c1c3c:
    // 0x4c1c3c: 0x8e220308  lw          $v0, 0x308($s1)
    ctx->pc = 0x4c1c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
label_4c1c40:
    // 0x4c1c40: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x4c1c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4c1c44:
    // 0x4c1c44: 0x8cc30044  lw          $v1, 0x44($a2)
    ctx->pc = 0x4c1c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
label_4c1c48:
    // 0x4c1c48: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_4c1c4c:
    if (ctx->pc == 0x4C1C4Cu) {
        ctx->pc = 0x4C1C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1C48u;
        // 0x4c1c4c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1C50u;
        goto label_4c1c50;
    }
    ctx->pc = 0x4C1C48u;
    {
        const bool branch_taken_0x4c1c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1C48u;
        // 0x4c1c4c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1c48) {
            ctx->pc = 0x4C1C58u;
            goto label_4c1c58;
        }
    }
    ctx->pc = 0x4C1C50u;
label_4c1c50:
    // 0x4c1c50: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x4c1c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_4c1c54:
    // 0x4c1c54: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4c1c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_4c1c58:
    // 0x4c1c58: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x4c1c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4c1c5c:
    // 0x4c1c5c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4c1c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4c1c60:
    // 0x4c1c60: 0x40f809  jalr        $v0
label_4c1c64:
    if (ctx->pc == 0x4C1C64u) {
        ctx->pc = 0x4C1C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1C60u;
        // 0x4c1c64: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1C68u;
        goto label_4c1c68;
    }
    ctx->pc = 0x4C1C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C1C68u);
        ctx->pc = 0x4C1C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1C60u;
        // 0x4c1c64: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C1C60u, 0x4C1C68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C1C68u;
label_4c1c68:
    // 0x4c1c68: 0x2538018  mult        $s0, $s2, $s3
    ctx->pc = 0x4c1c68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_4c1c6c:
    // 0x4c1c6c: 0x8e240308  lw          $a0, 0x308($s1)
    ctx->pc = 0x4c1c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
label_4c1c70:
    // 0x4c1c70: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x4c1c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_4c1c74:
    // 0x4c1c74: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4c1c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c1c78:
    // 0x4c1c78: 0x40f809  jalr        $v0
label_4c1c7c:
    if (ctx->pc == 0x4C1C7Cu) {
        ctx->pc = 0x4C1C80u;
        goto label_4c1c80;
    }
    ctx->pc = 0x4C1C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C1C80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C1C78u, 0x4C1C80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C1C80u;
label_4c1c80:
    // 0x4c1c80: 0x5440ff63  bnel        $v0, $zero, . + 4 + (-0x9D << 2)
label_4c1c84:
    if (ctx->pc == 0x4C1C84u) {
        ctx->pc = 0x4C1C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1C80u;
        // 0x4c1c84: 0x8e220308  lw          $v0, 0x308($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1C88u;
        goto label_4c1c88;
    }
    ctx->pc = 0x4C1C80u;
    {
        const bool branch_taken_0x4c1c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c1c80) {
            ctx->pc = 0x4C1C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C1C80u;
            // 0x4c1c84: 0x8e220308  lw          $v0, 0x308($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C1A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c1a10;
        }
    }
    ctx->pc = 0x4C1C88u;
label_4c1c88:
    // 0x4c1c88: 0x8e220300  lw          $v0, 0x300($s1)
    ctx->pc = 0x4c1c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
label_4c1c8c:
    // 0x4c1c8c: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x4c1c8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4c1c90:
    // 0x4c1c90: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x4c1c90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4c1c94:
    // 0x4c1c94: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_4c1c98:
    if (ctx->pc == 0x4C1C98u) {
        ctx->pc = 0x4C1C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1C94u;
        // 0x4c1c98: 0x26540001  addiu       $s4, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1C9Cu;
        goto label_4c1c9c;
    }
    ctx->pc = 0x4C1C94u;
    {
        const bool branch_taken_0x4c1c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C1C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1C94u;
        // 0x4c1c98: 0x26540001  addiu       $s4, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1c94) {
            ctx->pc = 0x4C1C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c1c68;
        }
    }
    ctx->pc = 0x4C1C9Cu;
label_4c1c9c:
    // 0x4c1c9c: 0x8ec42790  lw          $a0, 0x2790($s6)
    ctx->pc = 0x4c1c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10128)));
label_4c1ca0:
    // 0x4c1ca0: 0xc132386  jal         func_4C8E18
label_4c1ca4:
    if (ctx->pc == 0x4C1CA4u) {
        ctx->pc = 0x4C1CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1CA0u;
        // 0x4c1ca4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1CA8u;
        goto label_4c1ca8;
    }
    ctx->pc = 0x4C1CA0u;
    SET_GPR_U32(ctx, 31, 0x4C1CA8u);
    ctx->pc = 0x4C1CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C1CA0u;
    // 0x4c1ca4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8E18u, 0x4C1CA0u, 0x4C1CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C1CA8u;
label_4c1ca8:
    // 0x4c1ca8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4c1ca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4c1cac:
    // 0x4c1cac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4c1cacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4c1cb0:
    // 0x4c1cb0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4c1cb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c1cb4:
    // 0x4c1cb4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4c1cb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4c1cb8:
    // 0x4c1cb8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4c1cb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4c1cbc:
    // 0x4c1cbc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4c1cbcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4c1cc0:
    // 0x4c1cc0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4c1cc0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4c1cc4:
    // 0x4c1cc4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4c1cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_4c1cc8:
    // 0x4c1cc8: 0x3e00008  jr          $ra
label_4c1ccc:
    if (ctx->pc == 0x4C1CCCu) {
        ctx->pc = 0x4C1CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1CC8u;
        // 0x4c1ccc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C1CD0u;
        goto label_fallthrough_0x4c1cc8;
    }
    ctx->pc = 0x4C1CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C1CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1CC8u;
        // 0x4c1ccc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C1CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4c1cc8:
    ctx->pc = 0x4C1CD0u;
}
