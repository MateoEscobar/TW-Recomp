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

// Function: sub_00172940
// Address: 0x172940 - 0x172c70
void sub_00172940_0x172940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172940_0x172940");
#endif

    switch (ctx->pc) {
        case 0x172940u: goto label_172940;
        case 0x172944u: goto label_172944;
        case 0x172948u: goto label_172948;
        case 0x17294cu: goto label_17294c;
        case 0x172950u: goto label_172950;
        case 0x172954u: goto label_172954;
        case 0x172958u: goto label_172958;
        case 0x17295cu: goto label_17295c;
        case 0x172960u: goto label_172960;
        case 0x172964u: goto label_172964;
        case 0x172968u: goto label_172968;
        case 0x17296cu: goto label_17296c;
        case 0x172970u: goto label_172970;
        case 0x172974u: goto label_172974;
        case 0x172978u: goto label_172978;
        case 0x17297cu: goto label_17297c;
        case 0x172980u: goto label_172980;
        case 0x172984u: goto label_172984;
        case 0x172988u: goto label_172988;
        case 0x17298cu: goto label_17298c;
        case 0x172990u: goto label_172990;
        case 0x172994u: goto label_172994;
        case 0x172998u: goto label_172998;
        case 0x17299cu: goto label_17299c;
        case 0x1729a0u: goto label_1729a0;
        case 0x1729a4u: goto label_1729a4;
        case 0x1729a8u: goto label_1729a8;
        case 0x1729acu: goto label_1729ac;
        case 0x1729b0u: goto label_1729b0;
        case 0x1729b4u: goto label_1729b4;
        case 0x1729b8u: goto label_1729b8;
        case 0x1729bcu: goto label_1729bc;
        case 0x1729c0u: goto label_1729c0;
        case 0x1729c4u: goto label_1729c4;
        case 0x1729c8u: goto label_1729c8;
        case 0x1729ccu: goto label_1729cc;
        case 0x1729d0u: goto label_1729d0;
        case 0x1729d4u: goto label_1729d4;
        case 0x1729d8u: goto label_1729d8;
        case 0x1729dcu: goto label_1729dc;
        case 0x1729e0u: goto label_1729e0;
        case 0x1729e4u: goto label_1729e4;
        case 0x1729e8u: goto label_1729e8;
        case 0x1729ecu: goto label_1729ec;
        case 0x1729f0u: goto label_1729f0;
        case 0x1729f4u: goto label_1729f4;
        case 0x1729f8u: goto label_1729f8;
        case 0x1729fcu: goto label_1729fc;
        case 0x172a00u: goto label_172a00;
        case 0x172a04u: goto label_172a04;
        case 0x172a08u: goto label_172a08;
        case 0x172a0cu: goto label_172a0c;
        case 0x172a10u: goto label_172a10;
        case 0x172a14u: goto label_172a14;
        case 0x172a18u: goto label_172a18;
        case 0x172a1cu: goto label_172a1c;
        case 0x172a20u: goto label_172a20;
        case 0x172a24u: goto label_172a24;
        case 0x172a28u: goto label_172a28;
        case 0x172a2cu: goto label_172a2c;
        case 0x172a30u: goto label_172a30;
        case 0x172a34u: goto label_172a34;
        case 0x172a38u: goto label_172a38;
        case 0x172a3cu: goto label_172a3c;
        case 0x172a40u: goto label_172a40;
        case 0x172a44u: goto label_172a44;
        case 0x172a48u: goto label_172a48;
        case 0x172a4cu: goto label_172a4c;
        case 0x172a50u: goto label_172a50;
        case 0x172a54u: goto label_172a54;
        case 0x172a58u: goto label_172a58;
        case 0x172a5cu: goto label_172a5c;
        case 0x172a60u: goto label_172a60;
        case 0x172a64u: goto label_172a64;
        case 0x172a68u: goto label_172a68;
        case 0x172a6cu: goto label_172a6c;
        case 0x172a70u: goto label_172a70;
        case 0x172a74u: goto label_172a74;
        case 0x172a78u: goto label_172a78;
        case 0x172a7cu: goto label_172a7c;
        case 0x172a80u: goto label_172a80;
        case 0x172a84u: goto label_172a84;
        case 0x172a88u: goto label_172a88;
        case 0x172a8cu: goto label_172a8c;
        case 0x172a90u: goto label_172a90;
        case 0x172a94u: goto label_172a94;
        case 0x172a98u: goto label_172a98;
        case 0x172a9cu: goto label_172a9c;
        case 0x172aa0u: goto label_172aa0;
        case 0x172aa4u: goto label_172aa4;
        case 0x172aa8u: goto label_172aa8;
        case 0x172aacu: goto label_172aac;
        case 0x172ab0u: goto label_172ab0;
        case 0x172ab4u: goto label_172ab4;
        case 0x172ab8u: goto label_172ab8;
        case 0x172abcu: goto label_172abc;
        case 0x172ac0u: goto label_172ac0;
        case 0x172ac4u: goto label_172ac4;
        case 0x172ac8u: goto label_172ac8;
        case 0x172accu: goto label_172acc;
        case 0x172ad0u: goto label_172ad0;
        case 0x172ad4u: goto label_172ad4;
        case 0x172ad8u: goto label_172ad8;
        case 0x172adcu: goto label_172adc;
        case 0x172ae0u: goto label_172ae0;
        case 0x172ae4u: goto label_172ae4;
        case 0x172ae8u: goto label_172ae8;
        case 0x172aecu: goto label_172aec;
        case 0x172af0u: goto label_172af0;
        case 0x172af4u: goto label_172af4;
        case 0x172af8u: goto label_172af8;
        case 0x172afcu: goto label_172afc;
        case 0x172b00u: goto label_172b00;
        case 0x172b04u: goto label_172b04;
        case 0x172b08u: goto label_172b08;
        case 0x172b0cu: goto label_172b0c;
        case 0x172b10u: goto label_172b10;
        case 0x172b14u: goto label_172b14;
        case 0x172b18u: goto label_172b18;
        case 0x172b1cu: goto label_172b1c;
        case 0x172b20u: goto label_172b20;
        case 0x172b24u: goto label_172b24;
        case 0x172b28u: goto label_172b28;
        case 0x172b2cu: goto label_172b2c;
        case 0x172b30u: goto label_172b30;
        case 0x172b34u: goto label_172b34;
        case 0x172b38u: goto label_172b38;
        case 0x172b3cu: goto label_172b3c;
        case 0x172b40u: goto label_172b40;
        case 0x172b44u: goto label_172b44;
        case 0x172b48u: goto label_172b48;
        case 0x172b4cu: goto label_172b4c;
        case 0x172b50u: goto label_172b50;
        case 0x172b54u: goto label_172b54;
        case 0x172b58u: goto label_172b58;
        case 0x172b5cu: goto label_172b5c;
        case 0x172b60u: goto label_172b60;
        case 0x172b64u: goto label_172b64;
        case 0x172b68u: goto label_172b68;
        case 0x172b6cu: goto label_172b6c;
        case 0x172b70u: goto label_172b70;
        case 0x172b74u: goto label_172b74;
        case 0x172b78u: goto label_172b78;
        case 0x172b7cu: goto label_172b7c;
        case 0x172b80u: goto label_172b80;
        case 0x172b84u: goto label_172b84;
        case 0x172b88u: goto label_172b88;
        case 0x172b8cu: goto label_172b8c;
        case 0x172b90u: goto label_172b90;
        case 0x172b94u: goto label_172b94;
        case 0x172b98u: goto label_172b98;
        case 0x172b9cu: goto label_172b9c;
        case 0x172ba0u: goto label_172ba0;
        case 0x172ba4u: goto label_172ba4;
        case 0x172ba8u: goto label_172ba8;
        case 0x172bacu: goto label_172bac;
        case 0x172bb0u: goto label_172bb0;
        case 0x172bb4u: goto label_172bb4;
        case 0x172bb8u: goto label_172bb8;
        case 0x172bbcu: goto label_172bbc;
        case 0x172bc0u: goto label_172bc0;
        case 0x172bc4u: goto label_172bc4;
        case 0x172bc8u: goto label_172bc8;
        case 0x172bccu: goto label_172bcc;
        case 0x172bd0u: goto label_172bd0;
        case 0x172bd4u: goto label_172bd4;
        case 0x172bd8u: goto label_172bd8;
        case 0x172bdcu: goto label_172bdc;
        case 0x172be0u: goto label_172be0;
        case 0x172be4u: goto label_172be4;
        case 0x172be8u: goto label_172be8;
        case 0x172becu: goto label_172bec;
        case 0x172bf0u: goto label_172bf0;
        case 0x172bf4u: goto label_172bf4;
        case 0x172bf8u: goto label_172bf8;
        case 0x172bfcu: goto label_172bfc;
        case 0x172c00u: goto label_172c00;
        case 0x172c04u: goto label_172c04;
        case 0x172c08u: goto label_172c08;
        case 0x172c0cu: goto label_172c0c;
        case 0x172c10u: goto label_172c10;
        case 0x172c14u: goto label_172c14;
        case 0x172c18u: goto label_172c18;
        case 0x172c1cu: goto label_172c1c;
        case 0x172c20u: goto label_172c20;
        case 0x172c24u: goto label_172c24;
        case 0x172c28u: goto label_172c28;
        case 0x172c2cu: goto label_172c2c;
        case 0x172c30u: goto label_172c30;
        case 0x172c34u: goto label_172c34;
        case 0x172c38u: goto label_172c38;
        case 0x172c3cu: goto label_172c3c;
        case 0x172c40u: goto label_172c40;
        case 0x172c44u: goto label_172c44;
        case 0x172c48u: goto label_172c48;
        case 0x172c4cu: goto label_172c4c;
        case 0x172c50u: goto label_172c50;
        case 0x172c54u: goto label_172c54;
        case 0x172c58u: goto label_172c58;
        case 0x172c5cu: goto label_172c5c;
        case 0x172c60u: goto label_172c60;
        case 0x172c64u: goto label_172c64;
        case 0x172c68u: goto label_172c68;
        case 0x172c6cu: goto label_172c6c;
        default: break;
    }

    ctx->pc = 0x172940u;

label_172940:
    // 0x172940: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x172940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_172944:
    // 0x172944: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x172944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_172948:
    // 0x172948: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x172948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_17294c:
    // 0x17294c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x17294cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_172950:
    // 0x172950: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x172950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_172954:
    // 0x172954: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x172954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_172958:
    // 0x172958: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x172958u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17295c:
    // 0x17295c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x17295cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_172960:
    // 0x172960: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x172960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_172964:
    // 0x172964: 0xc118a7a  jal         func_4629E8
label_172968:
    if (ctx->pc == 0x172968u) {
        ctx->pc = 0x172968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172964u;
        // 0x172968: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17296Cu;
        goto label_17296c;
    }
    ctx->pc = 0x172964u;
    SET_GPR_U32(ctx, 31, 0x17296Cu);
    ctx->pc = 0x172968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172964u;
    // 0x172968: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4629E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4629E8u, 0x172964u, 0x17296Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17296Cu;
label_17296c:
    // 0x17296c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17296cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172970:
    // 0x172970: 0x2e02001a  sltiu       $v0, $s0, 0x1A
    ctx->pc = 0x172970u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
label_172974:
    // 0x172974: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_172978:
    if (ctx->pc == 0x172978u) {
        ctx->pc = 0x172978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172974u;
        // 0x172978: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17297Cu;
        goto label_17297c;
    }
    ctx->pc = 0x172974u;
    {
        const bool branch_taken_0x172974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172974u;
        // 0x172978: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172974) {
            ctx->pc = 0x172984u;
            goto label_172984;
        }
    }
    ctx->pc = 0x17297Cu;
label_17297c:
    // 0x17297c: 0x2610ffe7  addiu       $s0, $s0, -0x19
    ctx->pc = 0x17297cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967271));
label_172980:
    // 0x172980: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x172980u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_172984:
    // 0x172984: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x172984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_172988:
    // 0x172988: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x172988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17298c:
    // 0x17298c: 0x2062804  sllv        $a1, $a2, $s0
    ctx->pc = 0x17298cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 16) & 0x1F));
label_172990:
    // 0x172990: 0x8c6211fc  lw          $v0, 0x11FC($v1)
    ctx->pc = 0x172990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4604)));
label_172994:
    // 0x172994: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x172994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_172998:
    // 0x172998: 0x104000ab  beqz        $v0, . + 4 + (0xAB << 2)
label_17299c:
    if (ctx->pc == 0x17299Cu) {
        ctx->pc = 0x17299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172998u;
        // 0x17299c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1729A0u;
        goto label_1729a0;
    }
    ctx->pc = 0x172998u;
    {
        const bool branch_taken_0x172998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172998u;
        // 0x17299c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172998) {
            ctx->pc = 0x172C48u;
            goto label_172c48;
        }
    }
    ctx->pc = 0x1729A0u;
label_1729a0:
    // 0x1729a0: 0x92420041  lbu         $v0, 0x41($s2)
    ctx->pc = 0x1729a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 65)));
label_1729a4:
    // 0x1729a4: 0x2e03001a  sltiu       $v1, $s0, 0x1A
    ctx->pc = 0x1729a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
label_1729a8:
    // 0x1729a8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_1729ac:
    if (ctx->pc == 0x1729ACu) {
        ctx->pc = 0x1729ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729A8u;
        // 0x1729ac: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1729B0u;
        goto label_1729b0;
    }
    ctx->pc = 0x1729A8u;
    {
        const bool branch_taken_0x1729a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1729ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729A8u;
        // 0x1729ac: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1729a8) {
            ctx->pc = 0x1729D4u;
            goto label_1729d4;
        }
    }
    ctx->pc = 0x1729B0u;
label_1729b0:
    // 0x1729b0: 0x2603ffe7  addiu       $v1, $s0, -0x19
    ctx->pc = 0x1729b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967271));
label_1729b4:
    // 0x1729b4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1729b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1729b8:
    // 0x1729b8: 0x661804  sllv        $v1, $a2, $v1
    ctx->pc = 0x1729b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
label_1729bc:
    // 0x1729bc: 0x344280c0  ori         $v0, $v0, 0x80C0
    ctx->pc = 0x1729bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32960);
label_1729c0:
    // 0x1729c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1729c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1729c4:
    // 0x1729c4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_1729c8:
    if (ctx->pc == 0x1729C8u) {
        ctx->pc = 0x1729CCu;
        goto label_1729cc;
    }
    ctx->pc = 0x1729C4u;
    {
        const bool branch_taken_0x1729c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1729c4) {
            ctx->pc = 0x1729E8u;
            goto label_1729e8;
        }
    }
    ctx->pc = 0x1729CCu;
label_1729cc:
    // 0x1729cc: 0x1000000a  b           . + 4 + (0xA << 2)
label_1729d0:
    if (ctx->pc == 0x1729D0u) {
        ctx->pc = 0x1729D4u;
        goto label_1729d4;
    }
    ctx->pc = 0x1729CCu;
    {
        const bool branch_taken_0x1729cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1729cc) {
            ctx->pc = 0x1729F8u;
            goto label_1729f8;
        }
    }
    ctx->pc = 0x1729D4u;
label_1729d4:
    // 0x1729d4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1729d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1729d8:
    // 0x1729d8: 0x344280c0  ori         $v0, $v0, 0x80C0
    ctx->pc = 0x1729d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32960);
label_1729dc:
    // 0x1729dc: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1729dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1729e0:
    // 0x1729e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1729e4:
    if (ctx->pc == 0x1729E4u) {
        ctx->pc = 0x1729E8u;
        goto label_1729e8;
    }
    ctx->pc = 0x1729E0u;
    {
        const bool branch_taken_0x1729e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1729e0) {
            ctx->pc = 0x1729F8u;
            goto label_1729f8;
        }
    }
    ctx->pc = 0x1729E8u;
label_1729e8:
    // 0x1729e8: 0x10860098  beq         $a0, $a2, . + 4 + (0x98 << 2)
label_1729ec:
    if (ctx->pc == 0x1729ECu) {
        ctx->pc = 0x1729ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729E8u;
        // 0x1729ec: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1729F0u;
        goto label_1729f0;
    }
    ctx->pc = 0x1729E8u;
    {
        const bool branch_taken_0x1729e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x1729ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729E8u;
        // 0x1729ec: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1729e8) {
            ctx->pc = 0x172C4Cu;
            goto label_172c4c;
        }
    }
    ctx->pc = 0x1729F0u;
label_1729f0:
    // 0x1729f0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1729f4:
    if (ctx->pc == 0x1729F4u) {
        ctx->pc = 0x1729F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729F0u;
        // 0x1729f4: 0x8ce311f0  lw          $v1, 0x11F0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4592)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1729F8u;
        goto label_1729f8;
    }
    ctx->pc = 0x1729F0u;
    {
        const bool branch_taken_0x1729f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1729F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729F0u;
        // 0x1729f4: 0x8ce311f0  lw          $v1, 0x11F0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1729f0) {
            ctx->pc = 0x172A04u;
            goto label_172a04;
        }
    }
    ctx->pc = 0x1729F8u;
label_1729f8:
    // 0x1729f8: 0x10800094  beqz        $a0, . + 4 + (0x94 << 2)
label_1729fc:
    if (ctx->pc == 0x1729FCu) {
        ctx->pc = 0x1729FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729F8u;
        // 0x1729fc: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172A00u;
        goto label_172a00;
    }
    ctx->pc = 0x1729F8u;
    {
        const bool branch_taken_0x1729f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1729FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729F8u;
        // 0x1729fc: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1729f8) {
            ctx->pc = 0x172C4Cu;
            goto label_172c4c;
        }
    }
    ctx->pc = 0x172A00u;
label_172a00:
    // 0x172a00: 0x8ce311f0  lw          $v1, 0x11F0($a3)
    ctx->pc = 0x172a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4592)));
label_172a04:
    // 0x172a04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x172a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_172a08:
    // 0x172a08: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x172a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
label_172a0c:
    // 0x172a0c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x172a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_172a10:
    // 0x172a10: 0x1460008e  bnez        $v1, . + 4 + (0x8E << 2)
label_172a14:
    if (ctx->pc == 0x172A14u) {
        ctx->pc = 0x172A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A10u;
        // 0x172a14: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172A18u;
        goto label_172a18;
    }
    ctx->pc = 0x172A10u;
    {
        const bool branch_taken_0x172a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x172A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A10u;
        // 0x172a14: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a10) {
            ctx->pc = 0x172C4Cu;
            goto label_172c4c;
        }
    }
    ctx->pc = 0x172A18u;
label_172a18:
    // 0x172a18: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x172a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_172a1c:
    // 0x172a1c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x172a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_172a20:
    // 0x172a20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x172a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_172a24:
    // 0x172a24: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x172a24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_172a28:
    // 0x172a28: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x172a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_172a2c:
    // 0x172a2c: 0xc4400230  lwc1        $f0, 0x230($v0)
    ctx->pc = 0x172a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172a30:
    // 0x172a30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x172a30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_172a34:
    // 0x172a34: 0x0  nop
    ctx->pc = 0x172a34u;
    // NOP
label_172a38:
    // 0x172a38: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_172a3c:
    if (ctx->pc == 0x172A3Cu) {
        ctx->pc = 0x172A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A38u;
        // 0x172a3c: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172A40u;
        goto label_172a40;
    }
    ctx->pc = 0x172A38u;
    {
        const bool branch_taken_0x172a38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x172A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A38u;
        // 0x172a3c: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a38) {
            ctx->pc = 0x172A54u;
            goto label_172a54;
        }
    }
    ctx->pc = 0x172A40u;
label_172a40:
    // 0x172a40: 0x15000082  bnez        $t0, . + 4 + (0x82 << 2)
label_172a44:
    if (ctx->pc == 0x172A44u) {
        ctx->pc = 0x172A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A40u;
        // 0x172a44: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172A48u;
        goto label_172a48;
    }
    ctx->pc = 0x172A40u;
    {
        const bool branch_taken_0x172a40 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x172A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A40u;
        // 0x172a44: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a40) {
            ctx->pc = 0x172C4Cu;
            goto label_172c4c;
        }
    }
    ctx->pc = 0x172A48u;
label_172a48:
    // 0x172a48: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x172a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_172a4c:
    // 0x172a4c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x172a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_172a50:
    // 0x172a50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x172a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_172a54:
    // 0x172a54: 0x2021818  mult        $v1, $s0, $v0
    ctx->pc = 0x172a54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_172a58:
    // 0x172a58: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x172a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_172a5c:
    // 0x172a5c: 0xc4400230  lwc1        $f0, 0x230($v0)
    ctx->pc = 0x172a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172a60:
    // 0x172a60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172a60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_172a64:
    // 0x172a64: 0x0  nop
    ctx->pc = 0x172a64u;
    // NOP
label_172a68:
    // 0x172a68: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_172a6c:
    if (ctx->pc == 0x172A6Cu) {
        ctx->pc = 0x172A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A68u;
        // 0x172a6c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172A70u;
        goto label_172a70;
    }
    ctx->pc = 0x172A68u;
    {
        const bool branch_taken_0x172a68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x172A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A68u;
        // 0x172a6c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a68) {
            ctx->pc = 0x172A88u;
            goto label_172a88;
        }
    }
    ctx->pc = 0x172A70u;
label_172a70:
    // 0x172a70: 0x15000006  bnez        $t0, . + 4 + (0x6 << 2)
label_172a74:
    if (ctx->pc == 0x172A74u) {
        ctx->pc = 0x172A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A70u;
        // 0x172a74: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172A78u;
        goto label_172a78;
    }
    ctx->pc = 0x172A70u;
    {
        const bool branch_taken_0x172a70 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x172A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A70u;
        // 0x172a74: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a70) {
            ctx->pc = 0x172A8Cu;
            goto label_172a8c;
        }
    }
    ctx->pc = 0x172A78u;
label_172a78:
    // 0x172a78: 0x2602ffea  addiu       $v0, $s0, -0x16
    ctx->pc = 0x172a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967274));
label_172a7c:
    // 0x172a7c: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x172a7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_172a80:
    // 0x172a80: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
label_172a84:
    if (ctx->pc == 0x172A84u) {
        ctx->pc = 0x172A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A80u;
        // 0x172a84: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172A88u;
        goto label_172a88;
    }
    ctx->pc = 0x172A80u;
    {
        const bool branch_taken_0x172a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A80u;
        // 0x172a84: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a80) {
            ctx->pc = 0x172C48u;
            goto label_172c48;
        }
    }
    ctx->pc = 0x172A88u;
label_172a88:
    // 0x172a88: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x172a88u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_172a8c:
    // 0x172a8c: 0xc05fa04  jal         func_17E810
label_172a90:
    if (ctx->pc == 0x172A90u) {
        ctx->pc = 0x172A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A8Cu;
        // 0x172a90: 0x8c44cce4  lw          $a0, -0x331C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172A94u;
        goto label_172a94;
    }
    ctx->pc = 0x172A8Cu;
    SET_GPR_U32(ctx, 31, 0x172A94u);
    ctx->pc = 0x172A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172A8Cu;
    // 0x172a90: 0x8c44cce4  lw          $a0, -0x331C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E810u, 0x172A8Cu, 0x172A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172A94u;
label_172a94:
    // 0x172a94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x172a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_172a98:
    // 0x172a98: 0xc05fde8  jal         func_17F7A0
label_172a9c:
    if (ctx->pc == 0x172A9Cu) {
        ctx->pc = 0x172A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A98u;
        // 0x172a9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172AA0u;
        goto label_172aa0;
    }
    ctx->pc = 0x172A98u;
    SET_GPR_U32(ctx, 31, 0x172AA0u);
    ctx->pc = 0x172A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172A98u;
    // 0x172a9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F7A0u, 0x172A98u, 0x172AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172AA0u;
label_172aa0:
    // 0x172aa0: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x172aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_172aa4:
    // 0x172aa4: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x172aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_172aa8:
    // 0x172aa8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x172aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_172aac:
    // 0x172aac: 0xc11b404  jal         func_46D010
label_172ab0:
    if (ctx->pc == 0x172AB0u) {
        ctx->pc = 0x172AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172AACu;
        // 0x172ab0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172AB4u;
        goto label_172ab4;
    }
    ctx->pc = 0x172AACu;
    SET_GPR_U32(ctx, 31, 0x172AB4u);
    ctx->pc = 0x172AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172AACu;
    // 0x172ab0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D010u, 0x172AACu, 0x172AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172AB4u;
label_172ab4:
    // 0x172ab4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x172ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_172ab8:
    // 0x172ab8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x172ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_172abc:
    // 0x172abc: 0xc05ca38  jal         func_1728E0
label_172ac0:
    if (ctx->pc == 0x172AC0u) {
        ctx->pc = 0x172AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172ABCu;
        // 0x172ac0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172AC4u;
        goto label_172ac4;
    }
    ctx->pc = 0x172ABCu;
    SET_GPR_U32(ctx, 31, 0x172AC4u);
    ctx->pc = 0x172AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172ABCu;
    // 0x172ac0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1728E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1728E0u, 0x172ABCu, 0x172AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172AC4u;
label_172ac4:
    // 0x172ac4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x172ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_172ac8:
    // 0x172ac8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x172ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_172acc:
    // 0x172acc: 0x8e85b8b8  lw          $a1, -0x4748($s4)
    ctx->pc = 0x172accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949048)));
label_172ad0:
    // 0x172ad0: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x172ad0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_172ad4:
    // 0x172ad4: 0x93a30010  lbu         $v1, 0x10($sp)
    ctx->pc = 0x172ad4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_172ad8:
    // 0x172ad8: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x172ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
label_172adc:
    // 0x172adc: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x172adcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
label_172ae0:
    // 0x172ae0: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x172ae0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_172ae4:
    // 0x172ae4: 0x8e50002c  lw          $s0, 0x2C($s2)
    ctx->pc = 0x172ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_172ae8:
    // 0x172ae8: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x172ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
label_172aec:
    // 0x172aec: 0x261003e8  addiu       $s0, $s0, 0x3E8
    ctx->pc = 0x172aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1000));
label_172af0:
    // 0x172af0: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x172af0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_172af4:
    // 0x172af4: 0xa3a20002  sb          $v0, 0x2($sp)
    ctx->pc = 0x172af4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
label_172af8:
    // 0x172af8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x172af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_172afc:
    // 0x172afc: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x172afcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_172b00:
    // 0x172b00: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x172b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_172b04:
    // 0x172b04: 0x40f809  jalr        $v0
label_172b08:
    if (ctx->pc == 0x172B08u) {
        ctx->pc = 0x172B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B04u;
        // 0x172b08: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172B0Cu;
        goto label_172b0c;
    }
    ctx->pc = 0x172B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x172B0Cu);
        ctx->pc = 0x172B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B04u;
        // 0x172b08: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172B04u, 0x172B0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172B0Cu;
label_172b0c:
    // 0x172b0c: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x172b0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_172b10:
    // 0x172b10: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_172b14:
    if (ctx->pc == 0x172B14u) {
        ctx->pc = 0x172B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B10u;
        // 0x172b14: 0x8e85b8b8  lw          $a1, -0x4748($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172B18u;
        goto label_172b18;
    }
    ctx->pc = 0x172B10u;
    {
        const bool branch_taken_0x172b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B10u;
        // 0x172b14: 0x8e85b8b8  lw          $a1, -0x4748($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b10) {
            ctx->pc = 0x172B98u;
            goto label_172b98;
        }
    }
    ctx->pc = 0x172B18u;
label_172b18:
    // 0x172b18: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x172b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_172b1c:
    // 0x172b1c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x172b1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_172b20:
    // 0x172b20: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x172b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_172b24:
    // 0x172b24: 0x40f809  jalr        $v0
label_172b28:
    if (ctx->pc == 0x172B28u) {
        ctx->pc = 0x172B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B24u;
        // 0x172b28: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172B2Cu;
        goto label_172b2c;
    }
    ctx->pc = 0x172B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x172B2Cu);
        ctx->pc = 0x172B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B24u;
        // 0x172b28: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172B24u, 0x172B2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172B2Cu;
label_172b2c:
    // 0x172b2c: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x172b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_172b30:
    // 0x172b30: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x172b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_172b34:
    // 0x172b34: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_172b38:
    if (ctx->pc == 0x172B38u) {
        ctx->pc = 0x172B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B34u;
        // 0x172b38: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172B3Cu;
        goto label_172b3c;
    }
    ctx->pc = 0x172B34u;
    {
        const bool branch_taken_0x172b34 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x172B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B34u;
        // 0x172b38: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b34) {
            ctx->pc = 0x172B50u;
            goto label_172b50;
        }
    }
    ctx->pc = 0x172B3Cu;
label_172b3c:
    // 0x172b3c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x172b3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_172b40:
    // 0x172b40: 0x0  nop
    ctx->pc = 0x172b40u;
    // NOP
label_172b44:
    // 0x172b44: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x172b44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_172b48:
    // 0x172b48: 0x10000008  b           . + 4 + (0x8 << 2)
label_172b4c:
    if (ctx->pc == 0x172B4Cu) {
        ctx->pc = 0x172B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B48u;
        // 0x172b4c: 0x93a20003  lbu         $v0, 0x3($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172B50u;
        goto label_172b50;
    }
    ctx->pc = 0x172B48u;
    {
        const bool branch_taken_0x172b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B48u;
        // 0x172b4c: 0x93a20003  lbu         $v0, 0x3($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b48) {
            ctx->pc = 0x172B6Cu;
            goto label_172b6c;
        }
    }
    ctx->pc = 0x172B50u;
label_172b50:
    // 0x172b50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x172b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_172b54:
    // 0x172b54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x172b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_172b58:
    // 0x172b58: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x172b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_172b5c:
    // 0x172b5c: 0x0  nop
    ctx->pc = 0x172b5cu;
    // NOP
label_172b60:
    // 0x172b60: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x172b60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_172b64:
    // 0x172b64: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x172b64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_172b68:
    // 0x172b68: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x172b68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_172b6c:
    // 0x172b6c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x172b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_172b70:
    // 0x172b70: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x172b70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_172b74:
    // 0x172b74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x172b74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_172b78:
    // 0x172b78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x172b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_172b7c:
    // 0x172b7c: 0x0  nop
    ctx->pc = 0x172b7cu;
    // NOP
label_172b80:
    // 0x172b80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x172b80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_172b84:
    // 0x172b84: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x172b84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_172b88:
    // 0x172b88: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x172b88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_172b8c:
    // 0x172b8c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172b8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_172b90:
    // 0x172b90: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x172b90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_172b94:
    // 0x172b94: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x172b94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
label_172b98:
    // 0x172b98: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x172b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_172b9c:
    // 0x172b9c: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x172b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_172ba0:
    // 0x172ba0: 0xaa220007  swl         $v0, 0x7($s1)
    ctx->pc = 0x172ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_172ba4:
    // 0x172ba4: 0xba220004  swr         $v0, 0x4($s1)
    ctx->pc = 0x172ba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_172ba8:
    // 0x172ba8: 0xc1194f6  jal         func_4653D8
label_172bac:
    if (ctx->pc == 0x172BACu) {
        ctx->pc = 0x172BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BA8u;
        // 0x172bac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172BB0u;
        goto label_172bb0;
    }
    ctx->pc = 0x172BA8u;
    SET_GPR_U32(ctx, 31, 0x172BB0u);
    ctx->pc = 0x172BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172BA8u;
    // 0x172bac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4653D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4653D8u, 0x172BA8u, 0x172BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172BB0u;
label_172bb0:
    // 0x172bb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x172bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172bb4:
    // 0x172bb4: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
label_172bb8:
    if (ctx->pc == 0x172BB8u) {
        ctx->pc = 0x172BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BB4u;
        // 0x172bb8: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172BBCu;
        goto label_172bbc;
    }
    ctx->pc = 0x172BB4u;
    {
        const bool branch_taken_0x172bb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x172BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BB4u;
        // 0x172bb8: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172bb4) {
            ctx->pc = 0x172C28u;
            goto label_172c28;
        }
    }
    ctx->pc = 0x172BBCu;
label_172bbc:
    // 0x172bbc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x172bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_172bc0:
    // 0x172bc0: 0x8c43ad18  lw          $v1, -0x52E8($v0)
    ctx->pc = 0x172bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946072)));
label_172bc4:
    // 0x172bc4: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
label_172bc8:
    if (ctx->pc == 0x172BC8u) {
        ctx->pc = 0x172BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BC4u;
        // 0x172bc8: 0x8c700004  lw          $s0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172BCCu;
        goto label_172bcc;
    }
    ctx->pc = 0x172BC4u;
    {
        const bool branch_taken_0x172bc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x172BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BC4u;
        // 0x172bc8: 0x8c700004  lw          $s0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172bc4) {
            ctx->pc = 0x172BE0u;
            goto label_172be0;
        }
    }
    ctx->pc = 0x172BCCu;
label_172bcc:
    // 0x172bcc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x172bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_172bd0:
    // 0x172bd0: 0x10a2000e  beq         $a1, $v0, . + 4 + (0xE << 2)
label_172bd4:
    if (ctx->pc == 0x172BD4u) {
        ctx->pc = 0x172BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BD0u;
        // 0x172bd4: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172BD8u;
        goto label_172bd8;
    }
    ctx->pc = 0x172BD0u;
    {
        const bool branch_taken_0x172bd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x172BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BD0u;
        // 0x172bd4: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172bd0) {
            ctx->pc = 0x172C0Cu;
            goto label_172c0c;
        }
    }
    ctx->pc = 0x172BD8u;
label_172bd8:
    // 0x172bd8: 0x10000015  b           . + 4 + (0x15 << 2)
label_172bdc:
    if (ctx->pc == 0x172BDCu) {
        ctx->pc = 0x172BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BD8u;
        // 0x172bdc: 0x8c62d030  lw          $v0, -0x2FD0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955056)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172BE0u;
        goto label_172be0;
    }
    ctx->pc = 0x172BD8u;
    {
        const bool branch_taken_0x172bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BD8u;
        // 0x172bdc: 0x8c62d030  lw          $v0, -0x2FD0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172bd8) {
            ctx->pc = 0x172C30u;
            goto label_172c30;
        }
    }
    ctx->pc = 0x172BE0u;
label_172be0:
    // 0x172be0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x172be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_172be4:
    // 0x172be4: 0xc05fde8  jal         func_17F7A0
label_172be8:
    if (ctx->pc == 0x172BE8u) {
        ctx->pc = 0x172BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BE4u;
        // 0x172be8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172BECu;
        goto label_172bec;
    }
    ctx->pc = 0x172BE4u;
    SET_GPR_U32(ctx, 31, 0x172BECu);
    ctx->pc = 0x172BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172BE4u;
    // 0x172be8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F7A0u, 0x172BE4u, 0x172BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172BECu;
label_172bec:
    // 0x172bec: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x172becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_172bf0:
    // 0x172bf0: 0xc11954e  jal         func_465538
label_172bf4:
    if (ctx->pc == 0x172BF4u) {
        ctx->pc = 0x172BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BF0u;
        // 0x172bf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172BF8u;
        goto label_172bf8;
    }
    ctx->pc = 0x172BF0u;
    SET_GPR_U32(ctx, 31, 0x172BF8u);
    ctx->pc = 0x172BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172BF0u;
    // 0x172bf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x465538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465538u, 0x172BF0u, 0x172BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172BF8u;
label_172bf8:
    // 0x172bf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x172bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172bfc:
    // 0x172bfc: 0xc119578  jal         func_4655E0
label_172c00:
    if (ctx->pc == 0x172C00u) {
        ctx->pc = 0x172C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BFCu;
        // 0x172c00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172C04u;
        goto label_172c04;
    }
    ctx->pc = 0x172BFCu;
    SET_GPR_U32(ctx, 31, 0x172C04u);
    ctx->pc = 0x172C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172BFCu;
    // 0x172c00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4655E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655E0u, 0x172BFCu, 0x172C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172C04u;
label_172c04:
    // 0x172c04: 0x10000008  b           . + 4 + (0x8 << 2)
label_172c08:
    if (ctx->pc == 0x172C08u) {
        ctx->pc = 0x172C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C04u;
        // 0x172c08: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172C0Cu;
        goto label_172c0c;
    }
    ctx->pc = 0x172C04u;
    {
        const bool branch_taken_0x172c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C04u;
        // 0x172c08: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172c04) {
            ctx->pc = 0x172C28u;
            goto label_172c28;
        }
    }
    ctx->pc = 0x172C0Cu;
label_172c0c:
    // 0x172c0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x172c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_172c10:
    // 0x172c10: 0xc05fde8  jal         func_17F7A0
label_172c14:
    if (ctx->pc == 0x172C14u) {
        ctx->pc = 0x172C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C10u;
        // 0x172c14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172C18u;
        goto label_172c18;
    }
    ctx->pc = 0x172C10u;
    SET_GPR_U32(ctx, 31, 0x172C18u);
    ctx->pc = 0x172C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172C10u;
    // 0x172c14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F7A0u, 0x172C10u, 0x172C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172C18u;
label_172c18:
    // 0x172c18: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x172c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_172c1c:
    // 0x172c1c: 0xc119604  jal         func_465810
label_172c20:
    if (ctx->pc == 0x172C20u) {
        ctx->pc = 0x172C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C1Cu;
        // 0x172c20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172C24u;
        goto label_172c24;
    }
    ctx->pc = 0x172C1Cu;
    SET_GPR_U32(ctx, 31, 0x172C24u);
    ctx->pc = 0x172C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172C1Cu;
    // 0x172c20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x465810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465810u, 0x172C1Cu, 0x172C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172C24u;
label_172c24:
    // 0x172c24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x172c24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172c28:
    // 0x172c28: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x172c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_172c2c:
    // 0x172c2c: 0x8c62d030  lw          $v0, -0x2FD0($v1)
    ctx->pc = 0x172c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955056)));
label_172c30:
    // 0x172c30: 0x40f809  jalr        $v0
label_172c34:
    if (ctx->pc == 0x172C34u) {
        ctx->pc = 0x172C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C30u;
        // 0x172c34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172C38u;
        goto label_172c38;
    }
    ctx->pc = 0x172C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x172C38u);
        ctx->pc = 0x172C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C30u;
        // 0x172c34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172C30u, 0x172C38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172C38u;
label_172c38:
    // 0x172c38: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x172c38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172c3c:
    // 0x172c3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x172c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_172c40:
    // 0x172c40: 0xc11b404  jal         func_46D010
label_172c44:
    if (ctx->pc == 0x172C44u) {
        ctx->pc = 0x172C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C40u;
        // 0x172c44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172C48u;
        goto label_172c48;
    }
    ctx->pc = 0x172C40u;
    SET_GPR_U32(ctx, 31, 0x172C48u);
    ctx->pc = 0x172C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172C40u;
    // 0x172c44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D010u, 0x172C40u, 0x172C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172C48u;
label_172c48:
    // 0x172c48: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x172c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_172c4c:
    // 0x172c4c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x172c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_172c50:
    // 0x172c50: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x172c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_172c54:
    // 0x172c54: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x172c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_172c58:
    // 0x172c58: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x172c58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_172c5c:
    // 0x172c5c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x172c5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_172c60:
    // 0x172c60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x172c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_172c64:
    // 0x172c64: 0x3e00008  jr          $ra
label_172c68:
    if (ctx->pc == 0x172C68u) {
        ctx->pc = 0x172C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C64u;
        // 0x172c68: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172C6Cu;
        goto label_172c6c;
    }
    ctx->pc = 0x172C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C64u;
        // 0x172c68: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172C6Cu;
label_172c6c:
    // 0x172c6c: 0x0  nop
    ctx->pc = 0x172c6cu;
    // NOP
    ctx->pc = 0x172c70u;
}
