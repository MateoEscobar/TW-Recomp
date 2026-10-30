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

// Function: sub_00487958
// Address: 0x487958 - 0x487bd0
void sub_00487958_0x487958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00487958_0x487958");
#endif

    switch (ctx->pc) {
        case 0x487958u: goto label_487958;
        case 0x48795cu: goto label_48795c;
        case 0x487960u: goto label_487960;
        case 0x487964u: goto label_487964;
        case 0x487968u: goto label_487968;
        case 0x48796cu: goto label_48796c;
        case 0x487970u: goto label_487970;
        case 0x487974u: goto label_487974;
        case 0x487978u: goto label_487978;
        case 0x48797cu: goto label_48797c;
        case 0x487980u: goto label_487980;
        case 0x487984u: goto label_487984;
        case 0x487988u: goto label_487988;
        case 0x48798cu: goto label_48798c;
        case 0x487990u: goto label_487990;
        case 0x487994u: goto label_487994;
        case 0x487998u: goto label_487998;
        case 0x48799cu: goto label_48799c;
        case 0x4879a0u: goto label_4879a0;
        case 0x4879a4u: goto label_4879a4;
        case 0x4879a8u: goto label_4879a8;
        case 0x4879acu: goto label_4879ac;
        case 0x4879b0u: goto label_4879b0;
        case 0x4879b4u: goto label_4879b4;
        case 0x4879b8u: goto label_4879b8;
        case 0x4879bcu: goto label_4879bc;
        case 0x4879c0u: goto label_4879c0;
        case 0x4879c4u: goto label_4879c4;
        case 0x4879c8u: goto label_4879c8;
        case 0x4879ccu: goto label_4879cc;
        case 0x4879d0u: goto label_4879d0;
        case 0x4879d4u: goto label_4879d4;
        case 0x4879d8u: goto label_4879d8;
        case 0x4879dcu: goto label_4879dc;
        case 0x4879e0u: goto label_4879e0;
        case 0x4879e4u: goto label_4879e4;
        case 0x4879e8u: goto label_4879e8;
        case 0x4879ecu: goto label_4879ec;
        case 0x4879f0u: goto label_4879f0;
        case 0x4879f4u: goto label_4879f4;
        case 0x4879f8u: goto label_4879f8;
        case 0x4879fcu: goto label_4879fc;
        case 0x487a00u: goto label_487a00;
        case 0x487a04u: goto label_487a04;
        case 0x487a08u: goto label_487a08;
        case 0x487a0cu: goto label_487a0c;
        case 0x487a10u: goto label_487a10;
        case 0x487a14u: goto label_487a14;
        case 0x487a18u: goto label_487a18;
        case 0x487a1cu: goto label_487a1c;
        case 0x487a20u: goto label_487a20;
        case 0x487a24u: goto label_487a24;
        case 0x487a28u: goto label_487a28;
        case 0x487a2cu: goto label_487a2c;
        case 0x487a30u: goto label_487a30;
        case 0x487a34u: goto label_487a34;
        case 0x487a38u: goto label_487a38;
        case 0x487a3cu: goto label_487a3c;
        case 0x487a40u: goto label_487a40;
        case 0x487a44u: goto label_487a44;
        case 0x487a48u: goto label_487a48;
        case 0x487a4cu: goto label_487a4c;
        case 0x487a50u: goto label_487a50;
        case 0x487a54u: goto label_487a54;
        case 0x487a58u: goto label_487a58;
        case 0x487a5cu: goto label_487a5c;
        case 0x487a60u: goto label_487a60;
        case 0x487a64u: goto label_487a64;
        case 0x487a68u: goto label_487a68;
        case 0x487a6cu: goto label_487a6c;
        case 0x487a70u: goto label_487a70;
        case 0x487a74u: goto label_487a74;
        case 0x487a78u: goto label_487a78;
        case 0x487a7cu: goto label_487a7c;
        case 0x487a80u: goto label_487a80;
        case 0x487a84u: goto label_487a84;
        case 0x487a88u: goto label_487a88;
        case 0x487a8cu: goto label_487a8c;
        case 0x487a90u: goto label_487a90;
        case 0x487a94u: goto label_487a94;
        case 0x487a98u: goto label_487a98;
        case 0x487a9cu: goto label_487a9c;
        case 0x487aa0u: goto label_487aa0;
        case 0x487aa4u: goto label_487aa4;
        case 0x487aa8u: goto label_487aa8;
        case 0x487aacu: goto label_487aac;
        case 0x487ab0u: goto label_487ab0;
        case 0x487ab4u: goto label_487ab4;
        case 0x487ab8u: goto label_487ab8;
        case 0x487abcu: goto label_487abc;
        case 0x487ac0u: goto label_487ac0;
        case 0x487ac4u: goto label_487ac4;
        case 0x487ac8u: goto label_487ac8;
        case 0x487accu: goto label_487acc;
        case 0x487ad0u: goto label_487ad0;
        case 0x487ad4u: goto label_487ad4;
        case 0x487ad8u: goto label_487ad8;
        case 0x487adcu: goto label_487adc;
        case 0x487ae0u: goto label_487ae0;
        case 0x487ae4u: goto label_487ae4;
        case 0x487ae8u: goto label_487ae8;
        case 0x487aecu: goto label_487aec;
        case 0x487af0u: goto label_487af0;
        case 0x487af4u: goto label_487af4;
        case 0x487af8u: goto label_487af8;
        case 0x487afcu: goto label_487afc;
        case 0x487b00u: goto label_487b00;
        case 0x487b04u: goto label_487b04;
        case 0x487b08u: goto label_487b08;
        case 0x487b0cu: goto label_487b0c;
        case 0x487b10u: goto label_487b10;
        case 0x487b14u: goto label_487b14;
        case 0x487b18u: goto label_487b18;
        case 0x487b1cu: goto label_487b1c;
        case 0x487b20u: goto label_487b20;
        case 0x487b24u: goto label_487b24;
        case 0x487b28u: goto label_487b28;
        case 0x487b2cu: goto label_487b2c;
        case 0x487b30u: goto label_487b30;
        case 0x487b34u: goto label_487b34;
        case 0x487b38u: goto label_487b38;
        case 0x487b3cu: goto label_487b3c;
        case 0x487b40u: goto label_487b40;
        case 0x487b44u: goto label_487b44;
        case 0x487b48u: goto label_487b48;
        case 0x487b4cu: goto label_487b4c;
        case 0x487b50u: goto label_487b50;
        case 0x487b54u: goto label_487b54;
        case 0x487b58u: goto label_487b58;
        case 0x487b5cu: goto label_487b5c;
        case 0x487b60u: goto label_487b60;
        case 0x487b64u: goto label_487b64;
        case 0x487b68u: goto label_487b68;
        case 0x487b6cu: goto label_487b6c;
        case 0x487b70u: goto label_487b70;
        case 0x487b74u: goto label_487b74;
        case 0x487b78u: goto label_487b78;
        case 0x487b7cu: goto label_487b7c;
        case 0x487b80u: goto label_487b80;
        case 0x487b84u: goto label_487b84;
        case 0x487b88u: goto label_487b88;
        case 0x487b8cu: goto label_487b8c;
        case 0x487b90u: goto label_487b90;
        case 0x487b94u: goto label_487b94;
        case 0x487b98u: goto label_487b98;
        case 0x487b9cu: goto label_487b9c;
        case 0x487ba0u: goto label_487ba0;
        case 0x487ba4u: goto label_487ba4;
        case 0x487ba8u: goto label_487ba8;
        case 0x487bacu: goto label_487bac;
        case 0x487bb0u: goto label_487bb0;
        case 0x487bb4u: goto label_487bb4;
        case 0x487bb8u: goto label_487bb8;
        case 0x487bbcu: goto label_487bbc;
        case 0x487bc0u: goto label_487bc0;
        case 0x487bc4u: goto label_487bc4;
        case 0x487bc8u: goto label_487bc8;
        case 0x487bccu: goto label_487bcc;
        default: break;
    }

    ctx->pc = 0x487958u;

label_487958:
    // 0x487958: 0x27bdf970  addiu       $sp, $sp, -0x690
    ctx->pc = 0x487958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965616));
label_48795c:
    // 0x48795c: 0x7fb20660  sq          $s2, 0x660($sp)
    ctx->pc = 0x48795cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1632), GPR_VEC(ctx, 18));
label_487960:
    // 0x487960: 0x7fb30650  sq          $s3, 0x650($sp)
    ctx->pc = 0x487960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1616), GPR_VEC(ctx, 19));
label_487964:
    // 0x487964: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x487964u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_487968:
    // 0x487968: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x487968u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48796c:
    // 0x48796c: 0x7fb00680  sq          $s0, 0x680($sp)
    ctx->pc = 0x48796cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1664), GPR_VEC(ctx, 16));
label_487970:
    // 0x487970: 0x7fb10670  sq          $s1, 0x670($sp)
    ctx->pc = 0x487970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1648), GPR_VEC(ctx, 17));
label_487974:
    // 0x487974: 0x7fb40640  sq          $s4, 0x640($sp)
    ctx->pc = 0x487974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1600), GPR_VEC(ctx, 20));
label_487978:
    // 0x487978: 0xffbf0630  sd          $ra, 0x630($sp)
    ctx->pc = 0x487978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1584), GPR_U64(ctx, 31));
label_48797c:
    // 0x48797c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x48797cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_487980:
    // 0x487980: 0x2451ad18  addiu       $s1, $v0, -0x52E8
    ctx->pc = 0x487980u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_487984:
    // 0x487984: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x487984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_487988:
    // 0x487988: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x487988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_48798c:
    // 0x48798c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x48798cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_487990:
    // 0x487990: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x487990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_487994:
    // 0x487994: 0x40f809  jalr        $v0
label_487998:
    if (ctx->pc == 0x487998u) {
        ctx->pc = 0x487998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487994u;
        // 0x487998: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48799Cu;
        goto label_48799c;
    }
    ctx->pc = 0x487994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48799Cu);
        ctx->pc = 0x487998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487994u;
        // 0x487998: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487994u, 0x48799Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48799Cu;
label_48799c:
    // 0x48799c: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x48799cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_4879a0:
    // 0x4879a0: 0x40f809  jalr        $v0
label_4879a4:
    if (ctx->pc == 0x4879A4u) {
        ctx->pc = 0x4879A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4879A0u;
        // 0x4879a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4879A8u;
        goto label_4879a8;
    }
    ctx->pc = 0x4879A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4879A8u);
        ctx->pc = 0x4879A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4879A0u;
        // 0x4879a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4879A0u, 0x4879A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4879A8u;
label_4879a8:
    // 0x4879a8: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x4879a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_4879ac:
    // 0x4879ac: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_4879b0:
    if (ctx->pc == 0x4879B0u) {
        ctx->pc = 0x4879B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4879ACu;
        // 0x4879b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4879B4u;
        goto label_4879b4;
    }
    ctx->pc = 0x4879ACu;
    {
        const bool branch_taken_0x4879ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4879B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4879ACu;
        // 0x4879b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4879ac) {
            ctx->pc = 0x4879E8u;
            goto label_4879e8;
        }
    }
    ctx->pc = 0x4879B4u;
label_4879b4:
    // 0x4879b4: 0x826800ff  lb          $t0, 0xFF($s3)
    ctx->pc = 0x4879b4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 255)));
label_4879b8:
    // 0x4879b8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4879b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4879bc:
    // 0x4879bc: 0xafa20600  sw          $v0, 0x600($sp)
    ctx->pc = 0x4879bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1536), GPR_U32(ctx, 2));
label_4879c0:
    // 0x4879c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4879c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4879c4:
    // 0x4879c4: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x4879c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_4879c8:
    // 0x4879c8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x4879c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_4879cc:
    // 0x4879cc: 0xc11eff2  jal         func_47BFC8
label_4879d0:
    if (ctx->pc == 0x4879D0u) {
        ctx->pc = 0x4879D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4879CCu;
        // 0x4879d0: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4879D4u;
        goto label_4879d4;
    }
    ctx->pc = 0x4879CCu;
    SET_GPR_U32(ctx, 31, 0x4879D4u);
    ctx->pc = 0x4879D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4879CCu;
    // 0x4879d0: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4879CCu, 0x4879D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4879D4u;
label_4879d4:
    // 0x4879d4: 0xafa20604  sw          $v0, 0x604($sp)
    ctx->pc = 0x4879d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1540), GPR_U32(ctx, 2));
label_4879d8:
    // 0x4879d8: 0xc11f024  jal         func_47C090
label_4879dc:
    if (ctx->pc == 0x4879DCu) {
        ctx->pc = 0x4879DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4879D8u;
        // 0x4879dc: 0x27a40600  addiu       $a0, $sp, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4879E0u;
        goto label_4879e0;
    }
    ctx->pc = 0x4879D8u;
    SET_GPR_U32(ctx, 31, 0x4879E0u);
    ctx->pc = 0x4879DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4879D8u;
    // 0x4879dc: 0x27a40600  addiu       $a0, $sp, 0x600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4879D8u, 0x4879E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4879E0u;
label_4879e0:
    // 0x4879e0: 0xa3a004ff  sb          $zero, 0x4FF($sp)
    ctx->pc = 0x4879e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1279), (uint8_t)GPR_U32(ctx, 0));
label_4879e4:
    // 0x4879e4: 0x0  nop
    ctx->pc = 0x4879e4u;
    // NOP
label_4879e8:
    // 0x4879e8: 0xa3a00500  sb          $zero, 0x500($sp)
    ctx->pc = 0x4879e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1280), (uint8_t)GPR_U32(ctx, 0));
label_4879ec:
    // 0x4879ec: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
label_4879f0:
    if (ctx->pc == 0x4879F0u) {
        ctx->pc = 0x4879F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4879ECu;
        // 0x4879f0: 0x27b00500  addiu       $s0, $sp, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4879F4u;
        goto label_4879f4;
    }
    ctx->pc = 0x4879ECu;
    {
        const bool branch_taken_0x4879ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4879F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4879ECu;
        // 0x4879f0: 0x27b00500  addiu       $s0, $sp, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4879ec) {
            ctx->pc = 0x487A58u;
            goto label_487a58;
        }
    }
    ctx->pc = 0x4879F4u;
label_4879f4:
    // 0x4879f4: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x4879f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_4879f8:
    // 0x4879f8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_4879fc:
    if (ctx->pc == 0x4879FCu) {
        ctx->pc = 0x4879FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4879F8u;
        // 0x4879fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487A00u;
        goto label_487a00;
    }
    ctx->pc = 0x4879F8u;
    {
        const bool branch_taken_0x4879f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4879FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4879F8u;
        // 0x4879fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4879f8) {
            ctx->pc = 0x487A58u;
            goto label_487a58;
        }
    }
    ctx->pc = 0x487A00u;
label_487a00:
    // 0x487a00: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x487a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_487a04:
    // 0x487a04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x487a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_487a08:
    // 0x487a08: 0x40f809  jalr        $v0
label_487a0c:
    if (ctx->pc == 0x487A0Cu) {
        ctx->pc = 0x487A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487A08u;
        // 0x487a0c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487A10u;
        goto label_487a10;
    }
    ctx->pc = 0x487A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x487A10u);
        ctx->pc = 0x487A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487A08u;
        // 0x487a0c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487A08u, 0x487A10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x487A10u;
label_487a10:
    // 0x487a10: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x487a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_487a14:
    // 0x487a14: 0x40f809  jalr        $v0
label_487a18:
    if (ctx->pc == 0x487A18u) {
        ctx->pc = 0x487A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487A14u;
        // 0x487a18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487A1Cu;
        goto label_487a1c;
    }
    ctx->pc = 0x487A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x487A1Cu);
        ctx->pc = 0x487A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487A14u;
        // 0x487a18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487A14u, 0x487A1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x487A1Cu;
label_487a1c:
    // 0x487a1c: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x487a1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_487a20:
    // 0x487a20: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_487a24:
    if (ctx->pc == 0x487A24u) {
        ctx->pc = 0x487A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487A20u;
        // 0x487a24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487A28u;
        goto label_487a28;
    }
    ctx->pc = 0x487A20u;
    {
        const bool branch_taken_0x487a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x487A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487A20u;
        // 0x487a24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487a20) {
            ctx->pc = 0x487A58u;
            goto label_487a58;
        }
    }
    ctx->pc = 0x487A28u;
label_487a28:
    // 0x487a28: 0x824800ff  lb          $t0, 0xFF($s2)
    ctx->pc = 0x487a28u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 255)));
label_487a2c:
    // 0x487a2c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x487a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_487a30:
    // 0x487a30: 0xafa20600  sw          $v0, 0x600($sp)
    ctx->pc = 0x487a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1536), GPR_U32(ctx, 2));
label_487a34:
    // 0x487a34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x487a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_487a38:
    // 0x487a38: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x487a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_487a3c:
    // 0x487a3c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x487a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_487a40:
    // 0x487a40: 0xc11eff2  jal         func_47BFC8
label_487a44:
    if (ctx->pc == 0x487A44u) {
        ctx->pc = 0x487A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487A40u;
        // 0x487a44: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = 0x487A48u;
        goto label_487a48;
    }
    ctx->pc = 0x487A40u;
    SET_GPR_U32(ctx, 31, 0x487A48u);
    ctx->pc = 0x487A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487A40u;
    // 0x487a44: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x487A40u, 0x487A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487A48u;
label_487a48:
    // 0x487a48: 0xafa20604  sw          $v0, 0x604($sp)
    ctx->pc = 0x487a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1540), GPR_U32(ctx, 2));
label_487a4c:
    // 0x487a4c: 0xc11f024  jal         func_47C090
label_487a50:
    if (ctx->pc == 0x487A50u) {
        ctx->pc = 0x487A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487A4Cu;
        // 0x487a50: 0x27a40600  addiu       $a0, $sp, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487A54u;
        goto label_487a54;
    }
    ctx->pc = 0x487A4Cu;
    SET_GPR_U32(ctx, 31, 0x487A54u);
    ctx->pc = 0x487A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487A4Cu;
    // 0x487a50: 0x27a40600  addiu       $a0, $sp, 0x600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x487A4Cu, 0x487A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487A54u;
label_487a54:
    // 0x487a54: 0xa3a005ff  sb          $zero, 0x5FF($sp)
    ctx->pc = 0x487a54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1535), (uint8_t)GPR_U32(ctx, 0));
label_487a58:
    // 0x487a58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x487a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_487a5c:
    // 0x487a5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x487a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_487a60:
    // 0x487a60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x487a60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_487a64:
    // 0x487a64: 0xc122266  jal         func_488998
label_487a68:
    if (ctx->pc == 0x487A68u) {
        ctx->pc = 0x487A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487A64u;
        // 0x487a68: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487A6Cu;
        goto label_487a6c;
    }
    ctx->pc = 0x487A64u;
    SET_GPR_U32(ctx, 31, 0x487A6Cu);
    ctx->pc = 0x487A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487A64u;
    // 0x487a68: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488998u, 0x487A64u, 0x487A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487A6Cu;
label_487a6c:
    // 0x487a6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x487a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_487a70:
    // 0x487a70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x487a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_487a74:
    // 0x487a74: 0xafa00610  sw          $zero, 0x610($sp)
    ctx->pc = 0x487a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1552), GPR_U32(ctx, 0));
label_487a78:
    // 0x487a78: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x487a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_487a7c:
    // 0x487a7c: 0xafa00614  sw          $zero, 0x614($sp)
    ctx->pc = 0x487a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1556), GPR_U32(ctx, 0));
label_487a80:
    // 0x487a80: 0x27a70610  addiu       $a3, $sp, 0x610
    ctx->pc = 0x487a80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1552));
label_487a84:
    // 0x487a84: 0x27a80614  addiu       $t0, $sp, 0x614
    ctx->pc = 0x487a84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1556));
label_487a88:
    // 0x487a88: 0x27a90618  addiu       $t1, $sp, 0x618
    ctx->pc = 0x487a88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1560));
label_487a8c:
    // 0x487a8c: 0xc121d4a  jal         func_487528
label_487a90:
    if (ctx->pc == 0x487A90u) {
        ctx->pc = 0x487A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487A8Cu;
        // 0x487a90: 0x27aa061c  addiu       $t2, $sp, 0x61C (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1564));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487A94u;
        goto label_487a94;
    }
    ctx->pc = 0x487A8Cu;
    SET_GPR_U32(ctx, 31, 0x487A94u);
    ctx->pc = 0x487A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487A8Cu;
    // 0x487a90: 0x27aa061c  addiu       $t2, $sp, 0x61C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1564));
    ctx->in_delay_slot = false;
    ctx->pc = 0x487528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487528u, 0x487A8Cu, 0x487A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487A94u;
label_487a94:
    // 0x487a94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_487a98:
    if (ctx->pc == 0x487A98u) {
        ctx->pc = 0x487A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487A94u;
        // 0x487a98: 0xafa20620  sw          $v0, 0x620($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487A9Cu;
        goto label_487a9c;
    }
    ctx->pc = 0x487A94u;
    {
        const bool branch_taken_0x487a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x487A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487A94u;
        // 0x487a98: 0xafa20620  sw          $v0, 0x620($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487a94) {
            ctx->pc = 0x487AA4u;
            goto label_487aa4;
        }
    }
    ctx->pc = 0x487A9Cu;
label_487a9c:
    // 0x487a9c: 0x10000043  b           . + 4 + (0x43 << 2)
label_487aa0:
    if (ctx->pc == 0x487AA0u) {
        ctx->pc = 0x487AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487A9Cu;
        // 0x487aa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487AA4u;
        goto label_487aa4;
    }
    ctx->pc = 0x487A9Cu;
    {
        const bool branch_taken_0x487a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x487AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487A9Cu;
        // 0x487aa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487a9c) {
            ctx->pc = 0x487BACu;
            goto label_487bac;
        }
    }
    ctx->pc = 0x487AA4u;
label_487aa4:
    // 0x487aa4: 0x8fa40610  lw          $a0, 0x610($sp)
    ctx->pc = 0x487aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1552)));
label_487aa8:
    // 0x487aa8: 0x8fa50614  lw          $a1, 0x614($sp)
    ctx->pc = 0x487aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1556)));
label_487aac:
    // 0x487aac: 0x8fa60618  lw          $a2, 0x618($sp)
    ctx->pc = 0x487aacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1560)));
label_487ab0:
    // 0x487ab0: 0xc121848  jal         func_486120
label_487ab4:
    if (ctx->pc == 0x487AB4u) {
        ctx->pc = 0x487AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487AB0u;
        // 0x487ab4: 0x8fa7061c  lw          $a3, 0x61C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1564)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487AB8u;
        goto label_487ab8;
    }
    ctx->pc = 0x487AB0u;
    SET_GPR_U32(ctx, 31, 0x487AB8u);
    ctx->pc = 0x487AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487AB0u;
    // 0x487ab4: 0x8fa7061c  lw          $a3, 0x61C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1564)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486120u, 0x487AB0u, 0x487AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487AB8u;
label_487ab8:
    // 0x487ab8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x487ab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_487abc:
    // 0x487abc: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
label_487ac0:
    if (ctx->pc == 0x487AC0u) {
        ctx->pc = 0x487AC4u;
        goto label_487ac4;
    }
    ctx->pc = 0x487ABCu;
    {
        const bool branch_taken_0x487abc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x487abc) {
            ctx->pc = 0x487B3Cu;
            goto label_487b3c;
        }
    }
    ctx->pc = 0x487AC4u;
label_487ac4:
    // 0x487ac4: 0x92220023  lbu         $v0, 0x23($s1)
    ctx->pc = 0x487ac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_487ac8:
    // 0x487ac8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x487ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_487acc:
    // 0x487acc: 0x30436000  andi        $v1, $v0, 0x6000
    ctx->pc = 0x487accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
label_487ad0:
    // 0x487ad0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_487ad4:
    if (ctx->pc == 0x487AD4u) {
        ctx->pc = 0x487AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487AD0u;
        // 0x487ad4: 0x30424000  andi        $v0, $v0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        ctx->pc = 0x487AD8u;
        goto label_487ad8;
    }
    ctx->pc = 0x487AD0u;
    {
        const bool branch_taken_0x487ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x487AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487AD0u;
        // 0x487ad4: 0x30424000  andi        $v0, $v0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x487ad0) {
            ctx->pc = 0x487B18u;
            goto label_487b18;
        }
    }
    ctx->pc = 0x487AD8u;
label_487ad8:
    // 0x487ad8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_487adc:
    if (ctx->pc == 0x487ADCu) {
        ctx->pc = 0x487ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487AD8u;
        // 0x487adc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487AE0u;
        goto label_487ae0;
    }
    ctx->pc = 0x487AD8u;
    {
        const bool branch_taken_0x487ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x487ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487AD8u;
        // 0x487adc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487ad8) {
            ctx->pc = 0x487AFCu;
            goto label_487afc;
        }
    }
    ctx->pc = 0x487AE0u;
label_487ae0:
    // 0x487ae0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x487ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_487ae4:
    // 0x487ae4: 0x27a60620  addiu       $a2, $sp, 0x620
    ctx->pc = 0x487ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
label_487ae8:
    // 0x487ae8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x487ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_487aec:
    // 0x487aec: 0xc121cc8  jal         func_487320
label_487af0:
    if (ctx->pc == 0x487AF0u) {
        ctx->pc = 0x487AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487AECu;
        // 0x487af0: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487AF4u;
        goto label_487af4;
    }
    ctx->pc = 0x487AECu;
    SET_GPR_U32(ctx, 31, 0x487AF4u);
    ctx->pc = 0x487AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487AECu;
    // 0x487af0: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x487320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487320u, 0x487AECu, 0x487AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487AF4u;
label_487af4:
    // 0x487af4: 0x10000007  b           . + 4 + (0x7 << 2)
label_487af8:
    if (ctx->pc == 0x487AF8u) {
        ctx->pc = 0x487AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487AF4u;
        // 0x487af8: 0x8fa20620  lw          $v0, 0x620($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487AFCu;
        goto label_487afc;
    }
    ctx->pc = 0x487AF4u;
    {
        const bool branch_taken_0x487af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x487AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487AF4u;
        // 0x487af8: 0x8fa20620  lw          $v0, 0x620($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487af4) {
            ctx->pc = 0x487B14u;
            goto label_487b14;
        }
    }
    ctx->pc = 0x487AFCu;
label_487afc:
    // 0x487afc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x487afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_487b00:
    // 0x487b00: 0x27a60620  addiu       $a2, $sp, 0x620
    ctx->pc = 0x487b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
label_487b04:
    // 0x487b04: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x487b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_487b08:
    // 0x487b08: 0xc121cc8  jal         func_487320
label_487b0c:
    if (ctx->pc == 0x487B0Cu) {
        ctx->pc = 0x487B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487B08u;
        // 0x487b0c: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487B10u;
        goto label_487b10;
    }
    ctx->pc = 0x487B08u;
    SET_GPR_U32(ctx, 31, 0x487B10u);
    ctx->pc = 0x487B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487B08u;
    // 0x487b0c: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x487320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487320u, 0x487B08u, 0x487B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487B10u;
label_487b10:
    // 0x487b10: 0x8fa20620  lw          $v0, 0x620($sp)
    ctx->pc = 0x487b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
label_487b14:
    // 0x487b14: 0xac5d0018  sw          $sp, 0x18($v0)
    ctx->pc = 0x487b14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 29));
label_487b18:
    // 0x487b18: 0xc1215a4  jal         func_485690
label_487b1c:
    if (ctx->pc == 0x487B1Cu) {
        ctx->pc = 0x487B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487B18u;
        // 0x487b1c: 0x8fa40620  lw          $a0, 0x620($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487B20u;
        goto label_487b20;
    }
    ctx->pc = 0x487B18u;
    SET_GPR_U32(ctx, 31, 0x487B20u);
    ctx->pc = 0x487B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487B18u;
    // 0x487b1c: 0x8fa40620  lw          $a0, 0x620($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485690u, 0x487B18u, 0x487B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487B20u;
label_487b20:
    // 0x487b20: 0x8fa50620  lw          $a1, 0x620($sp)
    ctx->pc = 0x487b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
label_487b24:
    // 0x487b24: 0xc1217ca  jal         func_485F28
label_487b28:
    if (ctx->pc == 0x487B28u) {
        ctx->pc = 0x487B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487B24u;
        // 0x487b28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487B2Cu;
        goto label_487b2c;
    }
    ctx->pc = 0x487B24u;
    SET_GPR_U32(ctx, 31, 0x487B2Cu);
    ctx->pc = 0x487B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487B24u;
    // 0x487b28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485F28u, 0x487B24u, 0x487B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487B2Cu;
label_487b2c:
    // 0x487b2c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_487b30:
    if (ctx->pc == 0x487B30u) {
        ctx->pc = 0x487B34u;
        goto label_487b34;
    }
    ctx->pc = 0x487B2Cu;
    {
        const bool branch_taken_0x487b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x487b2c) {
            ctx->pc = 0x487B4Cu;
            goto label_487b4c;
        }
    }
    ctx->pc = 0x487B34u;
label_487b34:
    // 0x487b34: 0xc121888  jal         func_486220
label_487b38:
    if (ctx->pc == 0x487B38u) {
        ctx->pc = 0x487B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487B34u;
        // 0x487b38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487B3Cu;
        goto label_487b3c;
    }
    ctx->pc = 0x487B34u;
    SET_GPR_U32(ctx, 31, 0x487B3Cu);
    ctx->pc = 0x487B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487B34u;
    // 0x487b38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486220u, 0x487B34u, 0x487B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487B3Cu;
label_487b3c:
    // 0x487b3c: 0xc12164a  jal         func_485928
label_487b40:
    if (ctx->pc == 0x487B40u) {
        ctx->pc = 0x487B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487B3Cu;
        // 0x487b40: 0x8fa40620  lw          $a0, 0x620($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487B44u;
        goto label_487b44;
    }
    ctx->pc = 0x487B3Cu;
    SET_GPR_U32(ctx, 31, 0x487B44u);
    ctx->pc = 0x487B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487B3Cu;
    // 0x487b40: 0x8fa40620  lw          $a0, 0x620($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485928u, 0x487B3Cu, 0x487B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487B44u;
label_487b44:
    // 0x487b44: 0x10000019  b           . + 4 + (0x19 << 2)
label_487b48:
    if (ctx->pc == 0x487B48u) {
        ctx->pc = 0x487B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487B44u;
        // 0x487b48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487B4Cu;
        goto label_487b4c;
    }
    ctx->pc = 0x487B44u;
    {
        const bool branch_taken_0x487b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x487B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487B44u;
        // 0x487b48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487b44) {
            ctx->pc = 0x487BACu;
            goto label_487bac;
        }
    }
    ctx->pc = 0x487B4Cu;
label_487b4c:
    // 0x487b4c: 0xc12164a  jal         func_485928
label_487b50:
    if (ctx->pc == 0x487B50u) {
        ctx->pc = 0x487B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487B4Cu;
        // 0x487b50: 0x8fa40620  lw          $a0, 0x620($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487B54u;
        goto label_487b54;
    }
    ctx->pc = 0x487B4Cu;
    SET_GPR_U32(ctx, 31, 0x487B54u);
    ctx->pc = 0x487B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487B4Cu;
    // 0x487b50: 0x8fa40620  lw          $a0, 0x620($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485928u, 0x487B4Cu, 0x487B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487B54u;
label_487b54:
    // 0x487b54: 0xc122342  jal         func_488D08
label_487b58:
    if (ctx->pc == 0x487B58u) {
        ctx->pc = 0x487B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487B54u;
        // 0x487b58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487B5Cu;
        goto label_487b5c;
    }
    ctx->pc = 0x487B54u;
    SET_GPR_U32(ctx, 31, 0x487B5Cu);
    ctx->pc = 0x487B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487B54u;
    // 0x487b58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488D08u, 0x487B54u, 0x487B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487B5Cu;
label_487b5c:
    // 0x487b5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x487b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_487b60:
    // 0x487b60: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_487b64:
    if (ctx->pc == 0x487B64u) {
        ctx->pc = 0x487B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487B60u;
        // 0x487b64: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487B68u;
        goto label_487b68;
    }
    ctx->pc = 0x487B60u;
    {
        const bool branch_taken_0x487b60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x487B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487B60u;
        // 0x487b64: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487b60) {
            ctx->pc = 0x487B78u;
            goto label_487b78;
        }
    }
    ctx->pc = 0x487B68u;
label_487b68:
    // 0x487b68: 0xc121888  jal         func_486220
label_487b6c:
    if (ctx->pc == 0x487B6Cu) {
        ctx->pc = 0x487B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487B68u;
        // 0x487b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487B70u;
        goto label_487b70;
    }
    ctx->pc = 0x487B68u;
    SET_GPR_U32(ctx, 31, 0x487B70u);
    ctx->pc = 0x487B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487B68u;
    // 0x487b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486220u, 0x487B68u, 0x487B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487B70u;
label_487b70:
    // 0x487b70: 0x1000000e  b           . + 4 + (0xE << 2)
label_487b74:
    if (ctx->pc == 0x487B74u) {
        ctx->pc = 0x487B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487B70u;
        // 0x487b74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487B78u;
        goto label_487b78;
    }
    ctx->pc = 0x487B70u;
    {
        const bool branch_taken_0x487b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x487B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487B70u;
        // 0x487b74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487b70) {
            ctx->pc = 0x487BACu;
            goto label_487bac;
        }
    }
    ctx->pc = 0x487B78u;
label_487b78:
    // 0x487b78: 0xc12228e  jal         func_488A38
label_487b7c:
    if (ctx->pc == 0x487B7Cu) {
        ctx->pc = 0x487B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487B78u;
        // 0x487b7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487B80u;
        goto label_487b80;
    }
    ctx->pc = 0x487B78u;
    SET_GPR_U32(ctx, 31, 0x487B80u);
    ctx->pc = 0x487B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487B78u;
    // 0x487b7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488A38u, 0x487B78u, 0x487B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487B80u;
label_487b80:
    // 0x487b80: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_487b84:
    if (ctx->pc == 0x487B84u) {
        ctx->pc = 0x487B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487B80u;
        // 0x487b84: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487B88u;
        goto label_487b88;
    }
    ctx->pc = 0x487B80u;
    {
        const bool branch_taken_0x487b80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x487B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487B80u;
        // 0x487b84: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487b80) {
            ctx->pc = 0x487B9Cu;
            goto label_487b9c;
        }
    }
    ctx->pc = 0x487B88u;
label_487b88:
    // 0x487b88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x487b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_487b8c:
    // 0x487b8c: 0xc1222b6  jal         func_488AD8
label_487b90:
    if (ctx->pc == 0x487B90u) {
        ctx->pc = 0x487B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487B8Cu;
        // 0x487b90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487B94u;
        goto label_487b94;
    }
    ctx->pc = 0x487B8Cu;
    SET_GPR_U32(ctx, 31, 0x487B94u);
    ctx->pc = 0x487B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487B8Cu;
    // 0x487b90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488AD8u, 0x487B8Cu, 0x487B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487B94u;
label_487b94:
    // 0x487b94: 0x10000005  b           . + 4 + (0x5 << 2)
label_487b98:
    if (ctx->pc == 0x487B98u) {
        ctx->pc = 0x487B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487B94u;
        // 0x487b98: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487B9Cu;
        goto label_487b9c;
    }
    ctx->pc = 0x487B94u;
    {
        const bool branch_taken_0x487b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x487B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487B94u;
        // 0x487b98: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487b94) {
            ctx->pc = 0x487BACu;
            goto label_487bac;
        }
    }
    ctx->pc = 0x487B9Cu;
label_487b9c:
    // 0x487b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x487b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_487ba0:
    // 0x487ba0: 0xc1222b6  jal         func_488AD8
label_487ba4:
    if (ctx->pc == 0x487BA4u) {
        ctx->pc = 0x487BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487BA0u;
        // 0x487ba4: 0x24a56d38  addiu       $a1, $a1, 0x6D38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487BA8u;
        goto label_487ba8;
    }
    ctx->pc = 0x487BA0u;
    SET_GPR_U32(ctx, 31, 0x487BA8u);
    ctx->pc = 0x487BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487BA0u;
    // 0x487ba4: 0x24a56d38  addiu       $a1, $a1, 0x6D38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488AD8u, 0x487BA0u, 0x487BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487BA8u;
label_487ba8:
    // 0x487ba8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x487ba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_487bac:
    // 0x487bac: 0x7bb00680  lq          $s0, 0x680($sp)
    ctx->pc = 0x487bacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1664)));
label_487bb0:
    // 0x487bb0: 0x7bb10670  lq          $s1, 0x670($sp)
    ctx->pc = 0x487bb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1648)));
label_487bb4:
    // 0x487bb4: 0x7bb20660  lq          $s2, 0x660($sp)
    ctx->pc = 0x487bb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1632)));
label_487bb8:
    // 0x487bb8: 0x7bb30650  lq          $s3, 0x650($sp)
    ctx->pc = 0x487bb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1616)));
label_487bbc:
    // 0x487bbc: 0x7bb40640  lq          $s4, 0x640($sp)
    ctx->pc = 0x487bbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1600)));
label_487bc0:
    // 0x487bc0: 0xdfbf0630  ld          $ra, 0x630($sp)
    ctx->pc = 0x487bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1584)));
label_487bc4:
    // 0x487bc4: 0x3e00008  jr          $ra
label_487bc8:
    if (ctx->pc == 0x487BC8u) {
        ctx->pc = 0x487BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487BC4u;
        // 0x487bc8: 0x27bd0690  addiu       $sp, $sp, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487BCCu;
        goto label_487bcc;
    }
    ctx->pc = 0x487BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x487BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487BC4u;
        // 0x487bc8: 0x27bd0690  addiu       $sp, $sp, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1680));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x487BCCu;
label_487bcc:
    // 0x487bcc: 0x0  nop
    ctx->pc = 0x487bccu;
    // NOP
    ctx->pc = 0x487bd0u;
}
