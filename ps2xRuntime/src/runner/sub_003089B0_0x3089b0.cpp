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

// Function: sub_003089B0
// Address: 0x3089b0 - 0x308c58
void sub_003089B0_0x3089b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003089B0_0x3089b0");
#endif

    switch (ctx->pc) {
        case 0x3089b0u: goto label_3089b0;
        case 0x3089b4u: goto label_3089b4;
        case 0x3089b8u: goto label_3089b8;
        case 0x3089bcu: goto label_3089bc;
        case 0x3089c0u: goto label_3089c0;
        case 0x3089c4u: goto label_3089c4;
        case 0x3089c8u: goto label_3089c8;
        case 0x3089ccu: goto label_3089cc;
        case 0x3089d0u: goto label_3089d0;
        case 0x3089d4u: goto label_3089d4;
        case 0x3089d8u: goto label_3089d8;
        case 0x3089dcu: goto label_3089dc;
        case 0x3089e0u: goto label_3089e0;
        case 0x3089e4u: goto label_3089e4;
        case 0x3089e8u: goto label_3089e8;
        case 0x3089ecu: goto label_3089ec;
        case 0x3089f0u: goto label_3089f0;
        case 0x3089f4u: goto label_3089f4;
        case 0x3089f8u: goto label_3089f8;
        case 0x3089fcu: goto label_3089fc;
        case 0x308a00u: goto label_308a00;
        case 0x308a04u: goto label_308a04;
        case 0x308a08u: goto label_308a08;
        case 0x308a0cu: goto label_308a0c;
        case 0x308a10u: goto label_308a10;
        case 0x308a14u: goto label_308a14;
        case 0x308a18u: goto label_308a18;
        case 0x308a1cu: goto label_308a1c;
        case 0x308a20u: goto label_308a20;
        case 0x308a24u: goto label_308a24;
        case 0x308a28u: goto label_308a28;
        case 0x308a2cu: goto label_308a2c;
        case 0x308a30u: goto label_308a30;
        case 0x308a34u: goto label_308a34;
        case 0x308a38u: goto label_308a38;
        case 0x308a3cu: goto label_308a3c;
        case 0x308a40u: goto label_308a40;
        case 0x308a44u: goto label_308a44;
        case 0x308a48u: goto label_308a48;
        case 0x308a4cu: goto label_308a4c;
        case 0x308a50u: goto label_308a50;
        case 0x308a54u: goto label_308a54;
        case 0x308a58u: goto label_308a58;
        case 0x308a5cu: goto label_308a5c;
        case 0x308a60u: goto label_308a60;
        case 0x308a64u: goto label_308a64;
        case 0x308a68u: goto label_308a68;
        case 0x308a6cu: goto label_308a6c;
        case 0x308a70u: goto label_308a70;
        case 0x308a74u: goto label_308a74;
        case 0x308a78u: goto label_308a78;
        case 0x308a7cu: goto label_308a7c;
        case 0x308a80u: goto label_308a80;
        case 0x308a84u: goto label_308a84;
        case 0x308a88u: goto label_308a88;
        case 0x308a8cu: goto label_308a8c;
        case 0x308a90u: goto label_308a90;
        case 0x308a94u: goto label_308a94;
        case 0x308a98u: goto label_308a98;
        case 0x308a9cu: goto label_308a9c;
        case 0x308aa0u: goto label_308aa0;
        case 0x308aa4u: goto label_308aa4;
        case 0x308aa8u: goto label_308aa8;
        case 0x308aacu: goto label_308aac;
        case 0x308ab0u: goto label_308ab0;
        case 0x308ab4u: goto label_308ab4;
        case 0x308ab8u: goto label_308ab8;
        case 0x308abcu: goto label_308abc;
        case 0x308ac0u: goto label_308ac0;
        case 0x308ac4u: goto label_308ac4;
        case 0x308ac8u: goto label_308ac8;
        case 0x308accu: goto label_308acc;
        case 0x308ad0u: goto label_308ad0;
        case 0x308ad4u: goto label_308ad4;
        case 0x308ad8u: goto label_308ad8;
        case 0x308adcu: goto label_308adc;
        case 0x308ae0u: goto label_308ae0;
        case 0x308ae4u: goto label_308ae4;
        case 0x308ae8u: goto label_308ae8;
        case 0x308aecu: goto label_308aec;
        case 0x308af0u: goto label_308af0;
        case 0x308af4u: goto label_308af4;
        case 0x308af8u: goto label_308af8;
        case 0x308afcu: goto label_308afc;
        case 0x308b00u: goto label_308b00;
        case 0x308b04u: goto label_308b04;
        case 0x308b08u: goto label_308b08;
        case 0x308b0cu: goto label_308b0c;
        case 0x308b10u: goto label_308b10;
        case 0x308b14u: goto label_308b14;
        case 0x308b18u: goto label_308b18;
        case 0x308b1cu: goto label_308b1c;
        case 0x308b20u: goto label_308b20;
        case 0x308b24u: goto label_308b24;
        case 0x308b28u: goto label_308b28;
        case 0x308b2cu: goto label_308b2c;
        case 0x308b30u: goto label_308b30;
        case 0x308b34u: goto label_308b34;
        case 0x308b38u: goto label_308b38;
        case 0x308b3cu: goto label_308b3c;
        case 0x308b40u: goto label_308b40;
        case 0x308b44u: goto label_308b44;
        case 0x308b48u: goto label_308b48;
        case 0x308b4cu: goto label_308b4c;
        case 0x308b50u: goto label_308b50;
        case 0x308b54u: goto label_308b54;
        case 0x308b58u: goto label_308b58;
        case 0x308b5cu: goto label_308b5c;
        case 0x308b60u: goto label_308b60;
        case 0x308b64u: goto label_308b64;
        case 0x308b68u: goto label_308b68;
        case 0x308b6cu: goto label_308b6c;
        case 0x308b70u: goto label_308b70;
        case 0x308b74u: goto label_308b74;
        case 0x308b78u: goto label_308b78;
        case 0x308b7cu: goto label_308b7c;
        case 0x308b80u: goto label_308b80;
        case 0x308b84u: goto label_308b84;
        case 0x308b88u: goto label_308b88;
        case 0x308b8cu: goto label_308b8c;
        case 0x308b90u: goto label_308b90;
        case 0x308b94u: goto label_308b94;
        case 0x308b98u: goto label_308b98;
        case 0x308b9cu: goto label_308b9c;
        case 0x308ba0u: goto label_308ba0;
        case 0x308ba4u: goto label_308ba4;
        case 0x308ba8u: goto label_308ba8;
        case 0x308bacu: goto label_308bac;
        case 0x308bb0u: goto label_308bb0;
        case 0x308bb4u: goto label_308bb4;
        case 0x308bb8u: goto label_308bb8;
        case 0x308bbcu: goto label_308bbc;
        case 0x308bc0u: goto label_308bc0;
        case 0x308bc4u: goto label_308bc4;
        case 0x308bc8u: goto label_308bc8;
        case 0x308bccu: goto label_308bcc;
        case 0x308bd0u: goto label_308bd0;
        case 0x308bd4u: goto label_308bd4;
        case 0x308bd8u: goto label_308bd8;
        case 0x308bdcu: goto label_308bdc;
        case 0x308be0u: goto label_308be0;
        case 0x308be4u: goto label_308be4;
        case 0x308be8u: goto label_308be8;
        case 0x308becu: goto label_308bec;
        case 0x308bf0u: goto label_308bf0;
        case 0x308bf4u: goto label_308bf4;
        case 0x308bf8u: goto label_308bf8;
        case 0x308bfcu: goto label_308bfc;
        case 0x308c00u: goto label_308c00;
        case 0x308c04u: goto label_308c04;
        case 0x308c08u: goto label_308c08;
        case 0x308c0cu: goto label_308c0c;
        case 0x308c10u: goto label_308c10;
        case 0x308c14u: goto label_308c14;
        case 0x308c18u: goto label_308c18;
        case 0x308c1cu: goto label_308c1c;
        case 0x308c20u: goto label_308c20;
        case 0x308c24u: goto label_308c24;
        case 0x308c28u: goto label_308c28;
        case 0x308c2cu: goto label_308c2c;
        case 0x308c30u: goto label_308c30;
        case 0x308c34u: goto label_308c34;
        case 0x308c38u: goto label_308c38;
        case 0x308c3cu: goto label_308c3c;
        case 0x308c40u: goto label_308c40;
        case 0x308c44u: goto label_308c44;
        case 0x308c48u: goto label_308c48;
        case 0x308c4cu: goto label_308c4c;
        case 0x308c50u: goto label_308c50;
        case 0x308c54u: goto label_308c54;
        default: break;
    }

    ctx->pc = 0x3089b0u;

label_3089b0:
    // 0x3089b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3089b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3089b4:
    // 0x3089b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3089b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3089b8:
    // 0x3089b8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3089b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3089bc:
    // 0x3089bc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3089bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3089c0:
    // 0x3089c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3089c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3089c4:
    // 0x3089c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3089c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3089c8:
    // 0x3089c8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3089c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3089cc:
    // 0x3089cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3089ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3089d0:
    // 0x3089d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3089d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3089d4:
    // 0x3089d4: 0xc137826  jal         func_4DE098
label_3089d8:
    if (ctx->pc == 0x3089D8u) {
        ctx->pc = 0x3089D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3089D4u;
        // 0x3089d8: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3089DCu;
        goto label_3089dc;
    }
    ctx->pc = 0x3089D4u;
    SET_GPR_U32(ctx, 31, 0x3089DCu);
    ctx->pc = 0x3089D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3089D4u;
    // 0x3089d8: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x3089D4u, 0x3089DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3089DCu;
label_3089dc:
    // 0x3089dc: 0xc0e409a  jal         func_390268
label_3089e0:
    if (ctx->pc == 0x3089E0u) {
        ctx->pc = 0x3089E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3089DCu;
        // 0x3089e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3089E4u;
        goto label_3089e4;
    }
    ctx->pc = 0x3089DCu;
    SET_GPR_U32(ctx, 31, 0x3089E4u);
    ctx->pc = 0x3089E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3089DCu;
    // 0x3089e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3089DCu, 0x3089E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3089E4u;
label_3089e4:
    // 0x3089e4: 0x92030024  lbu         $v1, 0x24($s0)
    ctx->pc = 0x3089e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
label_3089e8:
    // 0x3089e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3089e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3089ec:
    // 0x3089ec: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x3089ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_3089f0:
    // 0x3089f0: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
label_3089f4:
    if (ctx->pc == 0x3089F4u) {
        ctx->pc = 0x3089F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3089F0u;
        // 0x3089f4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3089F8u;
        goto label_3089f8;
    }
    ctx->pc = 0x3089F0u;
    {
        const bool branch_taken_0x3089f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3089F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3089F0u;
        // 0x3089f4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3089f0) {
            ctx->pc = 0x308C38u;
            goto label_308c38;
        }
    }
    ctx->pc = 0x3089F8u;
label_3089f8:
    // 0x3089f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3089f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3089fc:
    // 0x3089fc: 0x2442b4c0  addiu       $v0, $v0, -0x4B40
    ctx->pc = 0x3089fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948032));
label_308a00:
    // 0x308a00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x308a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_308a04:
    // 0x308a04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x308a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_308a08:
    // 0x308a08: 0x800008  jr          $a0
label_308a0c:
    if (ctx->pc == 0x308A0Cu) {
        ctx->pc = 0x308A10u;
        goto label_308a10;
    }
    ctx->pc = 0x308A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x308A10u: goto label_308a10;
            case 0x308AACu: goto label_308aac;
            case 0x308B18u: goto label_308b18;
            case 0x308BD0u: goto label_308bd0;
            case 0x308BF8u: goto label_308bf8;
            case 0x308C1Cu: goto label_308c1c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308A08u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x308A10u;
label_308a10:
    // 0x308a10: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x308a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_308a14:
    // 0x308a14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x308a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_308a18:
    // 0x308a18: 0xac459408  sw          $a1, -0x6BF8($v0)
    ctx->pc = 0x308a18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294939656), GPR_U32(ctx, 5));
label_308a1c:
    // 0x308a1c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x308a1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_308a20:
    // 0x308a20: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x308a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_308a24:
    // 0x308a24: 0x40f809  jalr        $v0
label_308a28:
    if (ctx->pc == 0x308A28u) {
        ctx->pc = 0x308A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A24u;
        // 0x308a28: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308A2Cu;
        goto label_308a2c;
    }
    ctx->pc = 0x308A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308A2Cu);
        ctx->pc = 0x308A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A24u;
        // 0x308a28: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308A24u, 0x308A2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308A2Cu;
label_308a2c:
    // 0x308a2c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x308a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_308a30:
    // 0x308a30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x308a30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308a34:
    // 0x308a34: 0xc105712  jal         func_415C48
label_308a38:
    if (ctx->pc == 0x308A38u) {
        ctx->pc = 0x308A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A34u;
        // 0x308a38: 0x2484b478  addiu       $a0, $a0, -0x4B88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308A3Cu;
        goto label_308a3c;
    }
    ctx->pc = 0x308A34u;
    SET_GPR_U32(ctx, 31, 0x308A3Cu);
    ctx->pc = 0x308A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308A34u;
    // 0x308a38: 0x2484b478  addiu       $a0, $a0, -0x4B88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C48u, 0x308A34u, 0x308A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308A3Cu;
label_308a3c:
    // 0x308a3c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x308a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_308a40:
    // 0x308a40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x308a40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308a44:
    // 0x308a44: 0xc105712  jal         func_415C48
label_308a48:
    if (ctx->pc == 0x308A48u) {
        ctx->pc = 0x308A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A44u;
        // 0x308a48: 0x2484b488  addiu       $a0, $a0, -0x4B78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308A4Cu;
        goto label_308a4c;
    }
    ctx->pc = 0x308A44u;
    SET_GPR_U32(ctx, 31, 0x308A4Cu);
    ctx->pc = 0x308A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308A44u;
    // 0x308a48: 0x2484b488  addiu       $a0, $a0, -0x4B78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C48u, 0x308A44u, 0x308A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308A4Cu;
label_308a4c:
    // 0x308a4c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x308a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_308a50:
    // 0x308a50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x308a50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308a54:
    // 0x308a54: 0xc105712  jal         func_415C48
label_308a58:
    if (ctx->pc == 0x308A58u) {
        ctx->pc = 0x308A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A54u;
        // 0x308a58: 0x2484b498  addiu       $a0, $a0, -0x4B68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308A5Cu;
        goto label_308a5c;
    }
    ctx->pc = 0x308A54u;
    SET_GPR_U32(ctx, 31, 0x308A5Cu);
    ctx->pc = 0x308A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308A54u;
    // 0x308a58: 0x2484b498  addiu       $a0, $a0, -0x4B68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C48u, 0x308A54u, 0x308A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308A5Cu;
label_308a5c:
    // 0x308a5c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x308a5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308a60:
    // 0x308a60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x308a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_308a64:
    // 0x308a64: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x308a64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_308a68:
    // 0x308a68: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x308a68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_308a6c:
    // 0x308a6c: 0xc0a86aa  jal         func_2A1AA8
label_308a70:
    if (ctx->pc == 0x308A70u) {
        ctx->pc = 0x308A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A6Cu;
        // 0x308a70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308A74u;
        goto label_308a74;
    }
    ctx->pc = 0x308A6Cu;
    SET_GPR_U32(ctx, 31, 0x308A74u);
    ctx->pc = 0x308A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308A6Cu;
    // 0x308a70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1AA8u, 0x308A6Cu, 0x308A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308A74u;
label_308a74:
    // 0x308a74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x308a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_308a78:
    // 0x308a78: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x308a78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_308a7c:
    // 0x308a7c: 0x8c46941c  lw          $a2, -0x6BE4($v0)
    ctx->pc = 0x308a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939676)));
label_308a80:
    // 0x308a80: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x308a80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_308a84:
    // 0x308a84: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x308a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_308a88:
    // 0x308a88: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x308a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_308a8c:
    // 0x308a8c: 0x2484b4f0  addiu       $a0, $a0, -0x4B10
    ctx->pc = 0x308a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948080));
label_308a90:
    // 0x308a90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x308a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_308a94:
    // 0x308a94: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x308a94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_308a98:
    // 0x308a98: 0xc070ca0  jal         func_1C3280
label_308a9c:
    if (ctx->pc == 0x308A9Cu) {
        ctx->pc = 0x308A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A98u;
        // 0x308a9c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308AA0u;
        goto label_308aa0;
    }
    ctx->pc = 0x308A98u;
    SET_GPR_U32(ctx, 31, 0x308AA0u);
    ctx->pc = 0x308A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308A98u;
    // 0x308a9c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3280u, 0x308A98u, 0x308AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308AA0u;
label_308aa0:
    // 0x308aa0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x308aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_308aa4:
    // 0x308aa4: 0x10000064  b           . + 4 + (0x64 << 2)
label_308aa8:
    if (ctx->pc == 0x308AA8u) {
        ctx->pc = 0x308AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308AA4u;
        // 0x308aa8: 0xac40b310  sw          $zero, -0x4CF0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294947600), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308AACu;
        goto label_308aac;
    }
    ctx->pc = 0x308AA4u;
    {
        const bool branch_taken_0x308aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308AA4u;
        // 0x308aa8: 0xac40b310  sw          $zero, -0x4CF0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294947600), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308aa4) {
            ctx->pc = 0x308C38u;
            goto label_308c38;
        }
    }
    ctx->pc = 0x308AACu;
label_308aac:
    // 0x308aac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x308aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_308ab0:
    // 0x308ab0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x308ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_308ab4:
    // 0x308ab4: 0xac459404  sw          $a1, -0x6BFC($v0)
    ctx->pc = 0x308ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294939652), GPR_U32(ctx, 5));
label_308ab8:
    // 0x308ab8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x308ab8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_308abc:
    // 0x308abc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x308abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_308ac0:
    // 0x308ac0: 0x40f809  jalr        $v0
label_308ac4:
    if (ctx->pc == 0x308AC4u) {
        ctx->pc = 0x308AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308AC0u;
        // 0x308ac4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308AC8u;
        goto label_308ac8;
    }
    ctx->pc = 0x308AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308AC8u);
        ctx->pc = 0x308AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308AC0u;
        // 0x308ac4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308AC0u, 0x308AC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308AC8u;
label_308ac8:
    // 0x308ac8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x308ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_308acc:
    // 0x308acc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x308accu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308ad0:
    // 0x308ad0: 0xc105712  jal         func_415C48
label_308ad4:
    if (ctx->pc == 0x308AD4u) {
        ctx->pc = 0x308AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308AD0u;
        // 0x308ad4: 0x2484b4a8  addiu       $a0, $a0, -0x4B58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308AD8u;
        goto label_308ad8;
    }
    ctx->pc = 0x308AD0u;
    SET_GPR_U32(ctx, 31, 0x308AD8u);
    ctx->pc = 0x308AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308AD0u;
    // 0x308ad4: 0x2484b4a8  addiu       $a0, $a0, -0x4B58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C48u, 0x308AD0u, 0x308AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308AD8u;
label_308ad8:
    // 0x308ad8: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x308ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
label_308adc:
    // 0x308adc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x308adcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308ae0:
    // 0x308ae0: 0x2610b488  addiu       $s0, $s0, -0x4B78
    ctx->pc = 0x308ae0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947976));
label_308ae4:
    // 0x308ae4: 0xc105712  jal         func_415C48
label_308ae8:
    if (ctx->pc == 0x308AE8u) {
        ctx->pc = 0x308AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308AE4u;
        // 0x308ae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308AECu;
        goto label_308aec;
    }
    ctx->pc = 0x308AE4u;
    SET_GPR_U32(ctx, 31, 0x308AECu);
    ctx->pc = 0x308AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308AE4u;
    // 0x308ae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C48u, 0x308AE4u, 0x308AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308AECu;
label_308aec:
    // 0x308aec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x308aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308af0:
    // 0x308af0: 0xc105712  jal         func_415C48
label_308af4:
    if (ctx->pc == 0x308AF4u) {
        ctx->pc = 0x308AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308AF0u;
        // 0x308af4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308AF8u;
        goto label_308af8;
    }
    ctx->pc = 0x308AF0u;
    SET_GPR_U32(ctx, 31, 0x308AF8u);
    ctx->pc = 0x308AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308AF0u;
    // 0x308af4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C48u, 0x308AF0u, 0x308AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308AF8u;
label_308af8:
    // 0x308af8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x308af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_308afc:
    // 0x308afc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x308afcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308b00:
    // 0x308b00: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x308b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_308b04:
    // 0x308b04: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x308b04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_308b08:
    // 0x308b08: 0xc0a86aa  jal         func_2A1AA8
label_308b0c:
    if (ctx->pc == 0x308B0Cu) {
        ctx->pc = 0x308B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B08u;
        // 0x308b0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308B10u;
        goto label_308b10;
    }
    ctx->pc = 0x308B08u;
    SET_GPR_U32(ctx, 31, 0x308B10u);
    ctx->pc = 0x308B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308B08u;
    // 0x308b0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1AA8u, 0x308B08u, 0x308B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308B10u;
label_308b10:
    // 0x308b10: 0x10000023  b           . + 4 + (0x23 << 2)
label_308b14:
    if (ctx->pc == 0x308B14u) {
        ctx->pc = 0x308B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B10u;
        // 0x308b14: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308B18u;
        goto label_308b18;
    }
    ctx->pc = 0x308B10u;
    {
        const bool branch_taken_0x308b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B10u;
        // 0x308b14: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308b10) {
            ctx->pc = 0x308BA0u;
            goto label_308ba0;
        }
    }
    ctx->pc = 0x308B18u;
label_308b18:
    // 0x308b18: 0x92030025  lbu         $v1, 0x25($s0)
    ctx->pc = 0x308b18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 37)));
label_308b1c:
    // 0x308b1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x308b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_308b20:
    // 0x308b20: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_308b24:
    if (ctx->pc == 0x308B24u) {
        ctx->pc = 0x308B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B20u;
        // 0x308b24: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x308B28u;
        goto label_308b28;
    }
    ctx->pc = 0x308B20u;
    {
        const bool branch_taken_0x308b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x308B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B20u;
        // 0x308b24: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x308b20) {
            ctx->pc = 0x308B58u;
            goto label_308b58;
        }
    }
    ctx->pc = 0x308B28u;
label_308b28:
    // 0x308b28: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_308b2c:
    if (ctx->pc == 0x308B2Cu) {
        ctx->pc = 0x308B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B28u;
        // 0x308b2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308B30u;
        goto label_308b30;
    }
    ctx->pc = 0x308B28u;
    {
        const bool branch_taken_0x308b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308b28) {
            ctx->pc = 0x308B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308B28u;
            // 0x308b2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308B40u;
            goto label_308b40;
        }
    }
    ctx->pc = 0x308B30u;
label_308b30:
    // 0x308b30: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
label_308b34:
    if (ctx->pc == 0x308B34u) {
        ctx->pc = 0x308B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B30u;
        // 0x308b34: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308B38u;
        goto label_308b38;
    }
    ctx->pc = 0x308B30u;
    {
        const bool branch_taken_0x308b30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x308b30) {
            ctx->pc = 0x308B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308B30u;
            // 0x308b34: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308B5Cu;
            goto label_308b5c;
        }
    }
    ctx->pc = 0x308B38u;
label_308b38:
    // 0x308b38: 0x10000040  b           . + 4 + (0x40 << 2)
label_308b3c:
    if (ctx->pc == 0x308B3Cu) {
        ctx->pc = 0x308B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B38u;
        // 0x308b3c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308B40u;
        goto label_308b40;
    }
    ctx->pc = 0x308B38u;
    {
        const bool branch_taken_0x308b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B38u;
        // 0x308b3c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308b38) {
            ctx->pc = 0x308C3Cu;
            goto label_308c3c;
        }
    }
    ctx->pc = 0x308B40u;
label_308b40:
    // 0x308b40: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_308b44:
    if (ctx->pc == 0x308B44u) {
        ctx->pc = 0x308B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B40u;
        // 0x308b44: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308B48u;
        goto label_308b48;
    }
    ctx->pc = 0x308B40u;
    {
        const bool branch_taken_0x308b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x308B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B40u;
        // 0x308b44: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308b40) {
            ctx->pc = 0x308B58u;
            goto label_308b58;
        }
    }
    ctx->pc = 0x308B48u;
label_308b48:
    // 0x308b48: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_308b4c:
    if (ctx->pc == 0x308B4Cu) {
        ctx->pc = 0x308B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B48u;
        // 0x308b4c: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308B50u;
        goto label_308b50;
    }
    ctx->pc = 0x308B48u;
    {
        const bool branch_taken_0x308b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x308b48) {
            ctx->pc = 0x308B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308B48u;
            // 0x308b4c: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308B80u;
            goto label_308b80;
        }
    }
    ctx->pc = 0x308B50u;
label_308b50:
    // 0x308b50: 0x1000003a  b           . + 4 + (0x3A << 2)
label_308b54:
    if (ctx->pc == 0x308B54u) {
        ctx->pc = 0x308B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B50u;
        // 0x308b54: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308B58u;
        goto label_308b58;
    }
    ctx->pc = 0x308B50u;
    {
        const bool branch_taken_0x308b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B50u;
        // 0x308b54: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308b50) {
            ctx->pc = 0x308C3Cu;
            goto label_308c3c;
        }
    }
    ctx->pc = 0x308B58u;
label_308b58:
    // 0x308b58: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x308b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_308b5c:
    // 0x308b5c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x308b5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_308b60:
    // 0x308b60: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x308b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_308b64:
    // 0x308b64: 0x40f809  jalr        $v0
label_308b68:
    if (ctx->pc == 0x308B68u) {
        ctx->pc = 0x308B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B64u;
        // 0x308b68: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308B6Cu;
        goto label_308b6c;
    }
    ctx->pc = 0x308B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308B6Cu);
        ctx->pc = 0x308B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B64u;
        // 0x308b68: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308B64u, 0x308B6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308B6Cu;
label_308b6c:
    // 0x308b6c: 0x92050025  lbu         $a1, 0x25($s0)
    ctx->pc = 0x308b6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 37)));
label_308b70:
    // 0x308b70: 0xc0a8300  jal         func_2A0C00
label_308b74:
    if (ctx->pc == 0x308B74u) {
        ctx->pc = 0x308B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B70u;
        // 0x308b74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308B78u;
        goto label_308b78;
    }
    ctx->pc = 0x308B70u;
    SET_GPR_U32(ctx, 31, 0x308B78u);
    ctx->pc = 0x308B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308B70u;
    // 0x308b74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0C00u, 0x308B70u, 0x308B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308B78u;
label_308b78:
    // 0x308b78: 0x10000030  b           . + 4 + (0x30 << 2)
label_308b7c:
    if (ctx->pc == 0x308B7Cu) {
        ctx->pc = 0x308B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B78u;
        // 0x308b7c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308B80u;
        goto label_308b80;
    }
    ctx->pc = 0x308B78u;
    {
        const bool branch_taken_0x308b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B78u;
        // 0x308b7c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308b78) {
            ctx->pc = 0x308C3Cu;
            goto label_308c3c;
        }
    }
    ctx->pc = 0x308B80u;
label_308b80:
    // 0x308b80: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x308b80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_308b84:
    // 0x308b84: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x308b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_308b88:
    // 0x308b88: 0x40f809  jalr        $v0
label_308b8c:
    if (ctx->pc == 0x308B8Cu) {
        ctx->pc = 0x308B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B88u;
        // 0x308b8c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308B90u;
        goto label_308b90;
    }
    ctx->pc = 0x308B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308B90u);
        ctx->pc = 0x308B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B88u;
        // 0x308b8c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308B88u, 0x308B90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308B90u;
label_308b90:
    // 0x308b90: 0x92050025  lbu         $a1, 0x25($s0)
    ctx->pc = 0x308b90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 37)));
label_308b94:
    // 0x308b94: 0xc0a8300  jal         func_2A0C00
label_308b98:
    if (ctx->pc == 0x308B98u) {
        ctx->pc = 0x308B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B94u;
        // 0x308b98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308B9Cu;
        goto label_308b9c;
    }
    ctx->pc = 0x308B94u;
    SET_GPR_U32(ctx, 31, 0x308B9Cu);
    ctx->pc = 0x308B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308B94u;
    // 0x308b98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0C00u, 0x308B94u, 0x308B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308B9Cu;
label_308b9c:
    // 0x308b9c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x308b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_308ba0:
    // 0x308ba0: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x308ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_308ba4:
    // 0x308ba4: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x308ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_308ba8:
    // 0x308ba8: 0x8c469420  lw          $a2, -0x6BE0($v0)
    ctx->pc = 0x308ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939680)));
label_308bac:
    // 0x308bac: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x308bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_308bb0:
    // 0x308bb0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x308bb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_308bb4:
    // 0x308bb4: 0x2484b4f0  addiu       $a0, $a0, -0x4B10
    ctx->pc = 0x308bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948080));
label_308bb8:
    // 0x308bb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x308bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_308bbc:
    // 0x308bbc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x308bbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_308bc0:
    // 0x308bc0: 0xc070ca0  jal         func_1C3280
label_308bc4:
    if (ctx->pc == 0x308BC4u) {
        ctx->pc = 0x308BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308BC0u;
        // 0x308bc4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308BC8u;
        goto label_308bc8;
    }
    ctx->pc = 0x308BC0u;
    SET_GPR_U32(ctx, 31, 0x308BC8u);
    ctx->pc = 0x308BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308BC0u;
    // 0x308bc4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3280u, 0x308BC0u, 0x308BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308BC8u;
label_308bc8:
    // 0x308bc8: 0x1000001c  b           . + 4 + (0x1C << 2)
label_308bcc:
    if (ctx->pc == 0x308BCCu) {
        ctx->pc = 0x308BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308BC8u;
        // 0x308bcc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308BD0u;
        goto label_308bd0;
    }
    ctx->pc = 0x308BC8u;
    {
        const bool branch_taken_0x308bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308BC8u;
        // 0x308bcc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308bc8) {
            ctx->pc = 0x308C3Cu;
            goto label_308c3c;
        }
    }
    ctx->pc = 0x308BD0u;
label_308bd0:
    // 0x308bd0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x308bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_308bd4:
    // 0x308bd4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x308bd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_308bd8:
    // 0x308bd8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x308bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_308bdc:
    // 0x308bdc: 0x40f809  jalr        $v0
label_308be0:
    if (ctx->pc == 0x308BE0u) {
        ctx->pc = 0x308BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308BDCu;
        // 0x308be0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308BE4u;
        goto label_308be4;
    }
    ctx->pc = 0x308BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308BE4u);
        ctx->pc = 0x308BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308BDCu;
        // 0x308be0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308BDCu, 0x308BE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308BE4u;
label_308be4:
    // 0x308be4: 0x92050025  lbu         $a1, 0x25($s0)
    ctx->pc = 0x308be4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 37)));
label_308be8:
    // 0x308be8: 0xc0a7eea  jal         func_29FBA8
label_308bec:
    if (ctx->pc == 0x308BECu) {
        ctx->pc = 0x308BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308BE8u;
        // 0x308bec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308BF0u;
        goto label_308bf0;
    }
    ctx->pc = 0x308BE8u;
    SET_GPR_U32(ctx, 31, 0x308BF0u);
    ctx->pc = 0x308BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308BE8u;
    // 0x308bec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FBA8u, 0x308BE8u, 0x308BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308BF0u;
label_308bf0:
    // 0x308bf0: 0x10000012  b           . + 4 + (0x12 << 2)
label_308bf4:
    if (ctx->pc == 0x308BF4u) {
        ctx->pc = 0x308BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308BF0u;
        // 0x308bf4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308BF8u;
        goto label_308bf8;
    }
    ctx->pc = 0x308BF0u;
    {
        const bool branch_taken_0x308bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308BF0u;
        // 0x308bf4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308bf0) {
            ctx->pc = 0x308C3Cu;
            goto label_308c3c;
        }
    }
    ctx->pc = 0x308BF8u;
label_308bf8:
    // 0x308bf8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x308bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_308bfc:
    // 0x308bfc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x308bfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_308c00:
    // 0x308c00: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x308c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_308c04:
    // 0x308c04: 0x40f809  jalr        $v0
label_308c08:
    if (ctx->pc == 0x308C08u) {
        ctx->pc = 0x308C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C04u;
        // 0x308c08: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C0Cu;
        goto label_308c0c;
    }
    ctx->pc = 0x308C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308C0Cu);
        ctx->pc = 0x308C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C04u;
        // 0x308c08: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308C04u, 0x308C0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308C0Cu;
label_308c0c:
    // 0x308c0c: 0xc0a82c2  jal         func_2A0B08
label_308c10:
    if (ctx->pc == 0x308C10u) {
        ctx->pc = 0x308C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C0Cu;
        // 0x308c10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C14u;
        goto label_308c14;
    }
    ctx->pc = 0x308C0Cu;
    SET_GPR_U32(ctx, 31, 0x308C14u);
    ctx->pc = 0x308C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308C0Cu;
    // 0x308c10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B08u, 0x308C0Cu, 0x308C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308C14u;
label_308c14:
    // 0x308c14: 0x10000009  b           . + 4 + (0x9 << 2)
label_308c18:
    if (ctx->pc == 0x308C18u) {
        ctx->pc = 0x308C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C14u;
        // 0x308c18: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C1Cu;
        goto label_308c1c;
    }
    ctx->pc = 0x308C14u;
    {
        const bool branch_taken_0x308c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C14u;
        // 0x308c18: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308c14) {
            ctx->pc = 0x308C3Cu;
            goto label_308c3c;
        }
    }
    ctx->pc = 0x308C1Cu;
label_308c1c:
    // 0x308c1c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x308c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_308c20:
    // 0x308c20: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x308c20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_308c24:
    // 0x308c24: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x308c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_308c28:
    // 0x308c28: 0x40f809  jalr        $v0
label_308c2c:
    if (ctx->pc == 0x308C2Cu) {
        ctx->pc = 0x308C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C28u;
        // 0x308c2c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C30u;
        goto label_308c30;
    }
    ctx->pc = 0x308C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308C30u);
        ctx->pc = 0x308C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C28u;
        // 0x308c2c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308C28u, 0x308C30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308C30u;
label_308c30:
    // 0x308c30: 0xc0a829a  jal         func_2A0A68
label_308c34:
    if (ctx->pc == 0x308C34u) {
        ctx->pc = 0x308C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C30u;
        // 0x308c34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C38u;
        goto label_308c38;
    }
    ctx->pc = 0x308C30u;
    SET_GPR_U32(ctx, 31, 0x308C38u);
    ctx->pc = 0x308C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308C30u;
    // 0x308c34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0A68u, 0x308C30u, 0x308C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308C38u;
label_308c38:
    // 0x308c38: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x308c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_308c3c:
    // 0x308c3c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x308c3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_308c40:
    // 0x308c40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x308c40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_308c44:
    // 0x308c44: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x308c44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_308c48:
    // 0x308c48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x308c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_308c4c:
    // 0x308c4c: 0x3e00008  jr          $ra
label_308c50:
    if (ctx->pc == 0x308C50u) {
        ctx->pc = 0x308C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C4Cu;
        // 0x308c50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C54u;
        goto label_308c54;
    }
    ctx->pc = 0x308C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C4Cu;
        // 0x308c50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308C54u;
label_308c54:
    // 0x308c54: 0x0  nop
    ctx->pc = 0x308c54u;
    // NOP
    ctx->pc = 0x308c58u;
}
