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

// Function: sub_00315928
// Address: 0x315928 - 0x315b70
void sub_00315928_0x315928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315928_0x315928");
#endif

    switch (ctx->pc) {
        case 0x315928u: goto label_315928;
        case 0x31592cu: goto label_31592c;
        case 0x315930u: goto label_315930;
        case 0x315934u: goto label_315934;
        case 0x315938u: goto label_315938;
        case 0x31593cu: goto label_31593c;
        case 0x315940u: goto label_315940;
        case 0x315944u: goto label_315944;
        case 0x315948u: goto label_315948;
        case 0x31594cu: goto label_31594c;
        case 0x315950u: goto label_315950;
        case 0x315954u: goto label_315954;
        case 0x315958u: goto label_315958;
        case 0x31595cu: goto label_31595c;
        case 0x315960u: goto label_315960;
        case 0x315964u: goto label_315964;
        case 0x315968u: goto label_315968;
        case 0x31596cu: goto label_31596c;
        case 0x315970u: goto label_315970;
        case 0x315974u: goto label_315974;
        case 0x315978u: goto label_315978;
        case 0x31597cu: goto label_31597c;
        case 0x315980u: goto label_315980;
        case 0x315984u: goto label_315984;
        case 0x315988u: goto label_315988;
        case 0x31598cu: goto label_31598c;
        case 0x315990u: goto label_315990;
        case 0x315994u: goto label_315994;
        case 0x315998u: goto label_315998;
        case 0x31599cu: goto label_31599c;
        case 0x3159a0u: goto label_3159a0;
        case 0x3159a4u: goto label_3159a4;
        case 0x3159a8u: goto label_3159a8;
        case 0x3159acu: goto label_3159ac;
        case 0x3159b0u: goto label_3159b0;
        case 0x3159b4u: goto label_3159b4;
        case 0x3159b8u: goto label_3159b8;
        case 0x3159bcu: goto label_3159bc;
        case 0x3159c0u: goto label_3159c0;
        case 0x3159c4u: goto label_3159c4;
        case 0x3159c8u: goto label_3159c8;
        case 0x3159ccu: goto label_3159cc;
        case 0x3159d0u: goto label_3159d0;
        case 0x3159d4u: goto label_3159d4;
        case 0x3159d8u: goto label_3159d8;
        case 0x3159dcu: goto label_3159dc;
        case 0x3159e0u: goto label_3159e0;
        case 0x3159e4u: goto label_3159e4;
        case 0x3159e8u: goto label_3159e8;
        case 0x3159ecu: goto label_3159ec;
        case 0x3159f0u: goto label_3159f0;
        case 0x3159f4u: goto label_3159f4;
        case 0x3159f8u: goto label_3159f8;
        case 0x3159fcu: goto label_3159fc;
        case 0x315a00u: goto label_315a00;
        case 0x315a04u: goto label_315a04;
        case 0x315a08u: goto label_315a08;
        case 0x315a0cu: goto label_315a0c;
        case 0x315a10u: goto label_315a10;
        case 0x315a14u: goto label_315a14;
        case 0x315a18u: goto label_315a18;
        case 0x315a1cu: goto label_315a1c;
        case 0x315a20u: goto label_315a20;
        case 0x315a24u: goto label_315a24;
        case 0x315a28u: goto label_315a28;
        case 0x315a2cu: goto label_315a2c;
        case 0x315a30u: goto label_315a30;
        case 0x315a34u: goto label_315a34;
        case 0x315a38u: goto label_315a38;
        case 0x315a3cu: goto label_315a3c;
        case 0x315a40u: goto label_315a40;
        case 0x315a44u: goto label_315a44;
        case 0x315a48u: goto label_315a48;
        case 0x315a4cu: goto label_315a4c;
        case 0x315a50u: goto label_315a50;
        case 0x315a54u: goto label_315a54;
        case 0x315a58u: goto label_315a58;
        case 0x315a5cu: goto label_315a5c;
        case 0x315a60u: goto label_315a60;
        case 0x315a64u: goto label_315a64;
        case 0x315a68u: goto label_315a68;
        case 0x315a6cu: goto label_315a6c;
        case 0x315a70u: goto label_315a70;
        case 0x315a74u: goto label_315a74;
        case 0x315a78u: goto label_315a78;
        case 0x315a7cu: goto label_315a7c;
        case 0x315a80u: goto label_315a80;
        case 0x315a84u: goto label_315a84;
        case 0x315a88u: goto label_315a88;
        case 0x315a8cu: goto label_315a8c;
        case 0x315a90u: goto label_315a90;
        case 0x315a94u: goto label_315a94;
        case 0x315a98u: goto label_315a98;
        case 0x315a9cu: goto label_315a9c;
        case 0x315aa0u: goto label_315aa0;
        case 0x315aa4u: goto label_315aa4;
        case 0x315aa8u: goto label_315aa8;
        case 0x315aacu: goto label_315aac;
        case 0x315ab0u: goto label_315ab0;
        case 0x315ab4u: goto label_315ab4;
        case 0x315ab8u: goto label_315ab8;
        case 0x315abcu: goto label_315abc;
        case 0x315ac0u: goto label_315ac0;
        case 0x315ac4u: goto label_315ac4;
        case 0x315ac8u: goto label_315ac8;
        case 0x315accu: goto label_315acc;
        case 0x315ad0u: goto label_315ad0;
        case 0x315ad4u: goto label_315ad4;
        case 0x315ad8u: goto label_315ad8;
        case 0x315adcu: goto label_315adc;
        case 0x315ae0u: goto label_315ae0;
        case 0x315ae4u: goto label_315ae4;
        case 0x315ae8u: goto label_315ae8;
        case 0x315aecu: goto label_315aec;
        case 0x315af0u: goto label_315af0;
        case 0x315af4u: goto label_315af4;
        case 0x315af8u: goto label_315af8;
        case 0x315afcu: goto label_315afc;
        case 0x315b00u: goto label_315b00;
        case 0x315b04u: goto label_315b04;
        case 0x315b08u: goto label_315b08;
        case 0x315b0cu: goto label_315b0c;
        case 0x315b10u: goto label_315b10;
        case 0x315b14u: goto label_315b14;
        case 0x315b18u: goto label_315b18;
        case 0x315b1cu: goto label_315b1c;
        case 0x315b20u: goto label_315b20;
        case 0x315b24u: goto label_315b24;
        case 0x315b28u: goto label_315b28;
        case 0x315b2cu: goto label_315b2c;
        case 0x315b30u: goto label_315b30;
        case 0x315b34u: goto label_315b34;
        case 0x315b38u: goto label_315b38;
        case 0x315b3cu: goto label_315b3c;
        case 0x315b40u: goto label_315b40;
        case 0x315b44u: goto label_315b44;
        case 0x315b48u: goto label_315b48;
        case 0x315b4cu: goto label_315b4c;
        case 0x315b50u: goto label_315b50;
        case 0x315b54u: goto label_315b54;
        case 0x315b58u: goto label_315b58;
        case 0x315b5cu: goto label_315b5c;
        case 0x315b60u: goto label_315b60;
        case 0x315b64u: goto label_315b64;
        case 0x315b68u: goto label_315b68;
        case 0x315b6cu: goto label_315b6c;
        default: break;
    }

    ctx->pc = 0x315928u;

label_315928:
    // 0x315928: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x315928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_31592c:
    // 0x31592c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x31592cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_315930:
    // 0x315930: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x315930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_315934:
    // 0x315934: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x315934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_315938:
    // 0x315938: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x315938u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31593c:
    // 0x31593c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x31593cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_315940:
    // 0x315940: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x315940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_315944:
    // 0x315944: 0xc05959e  jal         func_165678
label_315948:
    if (ctx->pc == 0x315948u) {
        ctx->pc = 0x315948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315944u;
        // 0x315948: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31594Cu;
        goto label_31594c;
    }
    ctx->pc = 0x315944u;
    SET_GPR_U32(ctx, 31, 0x31594Cu);
    ctx->pc = 0x315948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315944u;
    // 0x315948: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x315944u, 0x31594Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31594Cu;
label_31594c:
    // 0x31594c: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x31594cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_315950:
    // 0x315950: 0xc05959e  jal         func_165678
label_315954:
    if (ctx->pc == 0x315954u) {
        ctx->pc = 0x315954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315950u;
        // 0x315954: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315958u;
        goto label_315958;
    }
    ctx->pc = 0x315950u;
    SET_GPR_U32(ctx, 31, 0x315958u);
    ctx->pc = 0x315954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315950u;
    // 0x315954: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x315950u, 0x315958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315958u;
label_315958:
    // 0x315958: 0x1260007c  beqz        $s3, . + 4 + (0x7C << 2)
label_31595c:
    if (ctx->pc == 0x31595Cu) {
        ctx->pc = 0x31595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315958u;
        // 0x31595c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315960u;
        goto label_315960;
    }
    ctx->pc = 0x315958u;
    {
        const bool branch_taken_0x315958 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x31595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315958u;
        // 0x31595c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315958) {
            ctx->pc = 0x315B4Cu;
            goto label_315b4c;
        }
    }
    ctx->pc = 0x315960u;
label_315960:
    // 0x315960: 0x1220007b  beqz        $s1, . + 4 + (0x7B << 2)
label_315964:
    if (ctx->pc == 0x315964u) {
        ctx->pc = 0x315964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315960u;
        // 0x315964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315968u;
        goto label_315968;
    }
    ctx->pc = 0x315960u;
    {
        const bool branch_taken_0x315960 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x315964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315960u;
        // 0x315964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315960) {
            ctx->pc = 0x315B50u;
            goto label_315b50;
        }
    }
    ctx->pc = 0x315968u;
label_315968:
    // 0x315968: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x315968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_31596c:
    // 0x31596c: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x31596cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_315970:
    // 0x315970: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x315970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_315974:
    // 0x315974: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x315974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_315978:
    // 0x315978: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x315978u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31597c:
    // 0x31597c: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_315980:
    if (ctx->pc == 0x315980u) {
        ctx->pc = 0x315980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31597Cu;
        // 0x315980: 0x244303e8  addiu       $v1, $v0, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315984u;
        goto label_315984;
    }
    ctx->pc = 0x31597Cu;
    {
        const bool branch_taken_0x31597c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x315980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31597Cu;
        // 0x315980: 0x244303e8  addiu       $v1, $v0, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31597c) {
            ctx->pc = 0x315A20u;
            goto label_315a20;
        }
    }
    ctx->pc = 0x315984u;
label_315984:
    // 0x315984: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x315984u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
label_315988:
    // 0x315988: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x315988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_31598c:
    // 0x31598c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x31598cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_315990:
    // 0x315990: 0x86640092  lh          $a0, 0x92($s3)
    ctx->pc = 0x315990u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_315994:
    // 0x315994: 0x86250092  lh          $a1, 0x92($s1)
    ctx->pc = 0x315994u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_315998:
    // 0x315998: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x315998u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_31599c:
    // 0x31599c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x31599cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_3159a0:
    // 0x3159a0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3159a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3159a4:
    // 0x3159a4: 0xc0cdb38  jal         func_336CE0
label_3159a8:
    if (ctx->pc == 0x3159A8u) {
        ctx->pc = 0x3159A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159A4u;
        // 0x3159a8: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3159ACu;
        goto label_3159ac;
    }
    ctx->pc = 0x3159A4u;
    SET_GPR_U32(ctx, 31, 0x3159ACu);
    ctx->pc = 0x3159A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3159A4u;
    // 0x3159a8: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x3159A4u, 0x3159ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3159ACu;
label_3159ac:
    // 0x3159ac: 0xc641003c  lwc1        $f1, 0x3C($s2)
    ctx->pc = 0x3159acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3159b0:
    // 0x3159b0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3159b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_3159b4:
    // 0x3159b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3159b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3159b8:
    // 0x3159b8: 0x0  nop
    ctx->pc = 0x3159b8u;
    // NOP
label_3159bc:
    // 0x3159bc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_3159c0:
    if (ctx->pc == 0x3159C0u) {
        ctx->pc = 0x3159C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159BCu;
        // 0x3159c0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3159C4u;
        goto label_3159c4;
    }
    ctx->pc = 0x3159BCu;
    {
        const bool branch_taken_0x3159bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3159C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159BCu;
        // 0x3159c0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3159bc) {
            ctx->pc = 0x3159DCu;
            goto label_3159dc;
        }
    }
    ctx->pc = 0x3159C4u;
label_3159c4:
    // 0x3159c4: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x3159c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_3159c8:
    // 0x3159c8: 0x84640322  lh          $a0, 0x322($v1)
    ctx->pc = 0x3159c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 802)));
label_3159cc:
    // 0x3159cc: 0x18800014  blez        $a0, . + 4 + (0x14 << 2)
label_3159d0:
    if (ctx->pc == 0x3159D0u) {
        ctx->pc = 0x3159D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159CCu;
        // 0x3159d0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3159D4u;
        goto label_3159d4;
    }
    ctx->pc = 0x3159CCu;
    {
        const bool branch_taken_0x3159cc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x3159D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159CCu;
        // 0x3159d0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3159cc) {
            ctx->pc = 0x315A20u;
            goto label_315a20;
        }
    }
    ctx->pc = 0x3159D4u;
label_3159d4:
    // 0x3159d4: 0x1000005f  b           . + 4 + (0x5F << 2)
label_3159d8:
    if (ctx->pc == 0x3159D8u) {
        ctx->pc = 0x3159D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159D4u;
        // 0x3159d8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3159DCu;
        goto label_3159dc;
    }
    ctx->pc = 0x3159D4u;
    {
        const bool branch_taken_0x3159d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3159D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159D4u;
        // 0x3159d8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3159d4) {
            ctx->pc = 0x315B54u;
            goto label_315b54;
        }
    }
    ctx->pc = 0x3159DCu;
label_3159dc:
    // 0x3159dc: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x3159dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_3159e0:
    // 0x3159e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3159e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3159e4:
    // 0x3159e4: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_3159e8:
    if (ctx->pc == 0x3159E8u) {
        ctx->pc = 0x3159E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159E4u;
        // 0x3159e8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3159ECu;
        goto label_3159ec;
    }
    ctx->pc = 0x3159E4u;
    {
        const bool branch_taken_0x3159e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3159E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159E4u;
        // 0x3159e8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3159e4) {
            ctx->pc = 0x315A28u;
            goto label_315a28;
        }
    }
    ctx->pc = 0x3159ECu;
label_3159ec:
    // 0x3159ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3159ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3159f0:
    // 0x3159f0: 0xc087b0e  jal         func_21EC38
label_3159f4:
    if (ctx->pc == 0x3159F4u) {
        ctx->pc = 0x3159F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159F0u;
        // 0x3159f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3159F8u;
        goto label_3159f8;
    }
    ctx->pc = 0x3159F0u;
    SET_GPR_U32(ctx, 31, 0x3159F8u);
    ctx->pc = 0x3159F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3159F0u;
    // 0x3159f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x3159F0u, 0x3159F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3159F8u;
label_3159f8:
    // 0x3159f8: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x3159f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_3159fc:
    // 0x3159fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3159fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_315a00:
    // 0x315a00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x315a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_315a04:
    // 0x315a04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x315a04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_315a08:
    // 0x315a08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x315a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315a0c:
    // 0x315a0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x315a0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315a10:
    // 0x315a10: 0xc087900  jal         func_21E400
label_315a14:
    if (ctx->pc == 0x315A14u) {
        ctx->pc = 0x315A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A10u;
        // 0x315a14: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A18u;
        goto label_315a18;
    }
    ctx->pc = 0x315A10u;
    SET_GPR_U32(ctx, 31, 0x315A18u);
    ctx->pc = 0x315A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315A10u;
    // 0x315a14: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E400u, 0x315A10u, 0x315A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315A18u;
label_315a18:
    // 0x315a18: 0x10000028  b           . + 4 + (0x28 << 2)
label_315a1c:
    if (ctx->pc == 0x315A1Cu) {
        ctx->pc = 0x315A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A18u;
        // 0x315a1c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A20u;
        goto label_315a20;
    }
    ctx->pc = 0x315A18u;
    {
        const bool branch_taken_0x315a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A18u;
        // 0x315a1c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315a18) {
            ctx->pc = 0x315ABCu;
            goto label_315abc;
        }
    }
    ctx->pc = 0x315A20u;
label_315a20:
    // 0x315a20: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x315a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_315a24:
    // 0x315a24: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x315a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315a28:
    // 0x315a28: 0x1470001b  bne         $v1, $s0, . + 4 + (0x1B << 2)
label_315a2c:
    if (ctx->pc == 0x315A2Cu) {
        ctx->pc = 0x315A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A28u;
        // 0x315a2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A30u;
        goto label_315a30;
    }
    ctx->pc = 0x315A28u;
    {
        const bool branch_taken_0x315a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x315A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A28u;
        // 0x315a2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315a28) {
            ctx->pc = 0x315A98u;
            goto label_315a98;
        }
    }
    ctx->pc = 0x315A30u;
label_315a30:
    // 0x315a30: 0x8e220178  lw          $v0, 0x178($s1)
    ctx->pc = 0x315a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
label_315a34:
    // 0x315a34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x315a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_315a38:
    // 0x315a38: 0xc043d5e  jal         func_10F578
label_315a3c:
    if (ctx->pc == 0x315A3Cu) {
        ctx->pc = 0x315A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A38u;
        // 0x315a3c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A40u;
        goto label_315a40;
    }
    ctx->pc = 0x315A38u;
    SET_GPR_U32(ctx, 31, 0x315A40u);
    ctx->pc = 0x315A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315A38u;
    // 0x315a3c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x315A38u, 0x315A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315A40u;
label_315a40:
    // 0x315a40: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x315a40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_315a44:
    // 0x315a44: 0x10500042  beq         $v0, $s0, . + 4 + (0x42 << 2)
label_315a48:
    if (ctx->pc == 0x315A48u) {
        ctx->pc = 0x315A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A44u;
        // 0x315a48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A4Cu;
        goto label_315a4c;
    }
    ctx->pc = 0x315A44u;
    {
        const bool branch_taken_0x315a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x315A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A44u;
        // 0x315a48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315a44) {
            ctx->pc = 0x315B50u;
            goto label_315b50;
        }
    }
    ctx->pc = 0x315A4Cu;
label_315a4c:
    // 0x315a4c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x315a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_315a50:
    // 0x315a50: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x315a50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_315a54:
    // 0x315a54: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x315a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_315a58:
    // 0x315a58: 0x40f809  jalr        $v0
label_315a5c:
    if (ctx->pc == 0x315A5Cu) {
        ctx->pc = 0x315A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A58u;
        // 0x315a5c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A60u;
        goto label_315a60;
    }
    ctx->pc = 0x315A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x315A60u);
        ctx->pc = 0x315A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A58u;
        // 0x315a5c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315A58u, 0x315A60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315A60u;
label_315a60:
    // 0x315a60: 0x8e460028  lw          $a2, 0x28($s2)
    ctx->pc = 0x315a60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_315a64:
    // 0x315a64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x315a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_315a68:
    // 0x315a68: 0xc08e1a4  jal         func_238690
label_315a6c:
    if (ctx->pc == 0x315A6Cu) {
        ctx->pc = 0x315A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A68u;
        // 0x315a6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A70u;
        goto label_315a70;
    }
    ctx->pc = 0x315A68u;
    SET_GPR_U32(ctx, 31, 0x315A70u);
    ctx->pc = 0x315A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315A68u;
    // 0x315a6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x315A68u, 0x315A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315A70u;
label_315a70:
    // 0x315a70: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x315a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_315a74:
    // 0x315a74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x315a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_315a78:
    // 0x315a78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x315a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_315a7c:
    // 0x315a7c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x315a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_315a80:
    // 0x315a80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x315a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315a84:
    // 0x315a84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x315a84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315a88:
    // 0x315a88: 0xc087900  jal         func_21E400
label_315a8c:
    if (ctx->pc == 0x315A8Cu) {
        ctx->pc = 0x315A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A88u;
        // 0x315a8c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A90u;
        goto label_315a90;
    }
    ctx->pc = 0x315A88u;
    SET_GPR_U32(ctx, 31, 0x315A90u);
    ctx->pc = 0x315A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315A88u;
    // 0x315a8c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E400u, 0x315A88u, 0x315A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315A90u;
label_315a90:
    // 0x315a90: 0x1000000a  b           . + 4 + (0xA << 2)
label_315a94:
    if (ctx->pc == 0x315A94u) {
        ctx->pc = 0x315A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A90u;
        // 0x315a94: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A98u;
        goto label_315a98;
    }
    ctx->pc = 0x315A90u;
    {
        const bool branch_taken_0x315a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A90u;
        // 0x315a94: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315a90) {
            ctx->pc = 0x315ABCu;
            goto label_315abc;
        }
    }
    ctx->pc = 0x315A98u;
label_315a98:
    // 0x315a98: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_315a9c:
    if (ctx->pc == 0x315A9Cu) {
        ctx->pc = 0x315A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A98u;
        // 0x315a9c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315AA0u;
        goto label_315aa0;
    }
    ctx->pc = 0x315A98u;
    {
        const bool branch_taken_0x315a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x315A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A98u;
        // 0x315a9c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315a98) {
            ctx->pc = 0x315AC8u;
            goto label_315ac8;
        }
    }
    ctx->pc = 0x315AA0u;
label_315aa0:
    // 0x315aa0: 0x8e620178  lw          $v0, 0x178($s3)
    ctx->pc = 0x315aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 376)));
label_315aa4:
    // 0x315aa4: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x315aa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_315aa8:
    // 0x315aa8: 0xc043d5e  jal         func_10F578
label_315aac:
    if (ctx->pc == 0x315AACu) {
        ctx->pc = 0x315AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315AA8u;
        // 0x315aac: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315AB0u;
        goto label_315ab0;
    }
    ctx->pc = 0x315AA8u;
    SET_GPR_U32(ctx, 31, 0x315AB0u);
    ctx->pc = 0x315AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315AA8u;
    // 0x315aac: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x315AA8u, 0x315AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315AB0u;
label_315ab0:
    // 0x315ab0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x315ab0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_315ab4:
    // 0x315ab4: 0x10500025  beq         $v0, $s0, . + 4 + (0x25 << 2)
label_315ab8:
    if (ctx->pc == 0x315AB8u) {
        ctx->pc = 0x315AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315AB4u;
        // 0x315ab8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315ABCu;
        goto label_315abc;
    }
    ctx->pc = 0x315AB4u;
    {
        const bool branch_taken_0x315ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x315AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315AB4u;
        // 0x315ab8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315ab4) {
            ctx->pc = 0x315B4Cu;
            goto label_315b4c;
        }
    }
    ctx->pc = 0x315ABCu;
label_315abc:
    // 0x315abc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x315abcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315ac0:
    // 0x315ac0: 0x10000023  b           . + 4 + (0x23 << 2)
label_315ac4:
    if (ctx->pc == 0x315AC4u) {
        ctx->pc = 0x315AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315AC0u;
        // 0x315ac4: 0xae430040  sw          $v1, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315AC8u;
        goto label_315ac8;
    }
    ctx->pc = 0x315AC0u;
    {
        const bool branch_taken_0x315ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315AC0u;
        // 0x315ac4: 0xae430040  sw          $v1, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315ac0) {
            ctx->pc = 0x315B50u;
            goto label_315b50;
        }
    }
    ctx->pc = 0x315AC8u;
label_315ac8:
    // 0x315ac8: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
label_315acc:
    if (ctx->pc == 0x315ACCu) {
        ctx->pc = 0x315ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315AC8u;
        // 0x315acc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315AD0u;
        goto label_315ad0;
    }
    ctx->pc = 0x315AC8u;
    {
        const bool branch_taken_0x315ac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x315ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315AC8u;
        // 0x315acc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315ac8) {
            ctx->pc = 0x315B50u;
            goto label_315b50;
        }
    }
    ctx->pc = 0x315AD0u;
label_315ad0:
    // 0x315ad0: 0x8e620178  lw          $v0, 0x178($s3)
    ctx->pc = 0x315ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 376)));
label_315ad4:
    // 0x315ad4: 0x37a40008  ori         $a0, $sp, 0x8
    ctx->pc = 0x315ad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_315ad8:
    // 0x315ad8: 0xc043d5e  jal         func_10F578
label_315adc:
    if (ctx->pc == 0x315ADCu) {
        ctx->pc = 0x315ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315AD8u;
        // 0x315adc: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315AE0u;
        goto label_315ae0;
    }
    ctx->pc = 0x315AD8u;
    SET_GPR_U32(ctx, 31, 0x315AE0u);
    ctx->pc = 0x315ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315AD8u;
    // 0x315adc: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x315AD8u, 0x315AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315AE0u;
label_315ae0:
    // 0x315ae0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x315ae0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_315ae4:
    // 0x315ae4: 0x10500019  beq         $v0, $s0, . + 4 + (0x19 << 2)
label_315ae8:
    if (ctx->pc == 0x315AE8u) {
        ctx->pc = 0x315AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315AE4u;
        // 0x315ae8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315AECu;
        goto label_315aec;
    }
    ctx->pc = 0x315AE4u;
    {
        const bool branch_taken_0x315ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x315AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315AE4u;
        // 0x315ae8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315ae4) {
            ctx->pc = 0x315B4Cu;
            goto label_315b4c;
        }
    }
    ctx->pc = 0x315AECu;
label_315aec:
    // 0x315aec: 0xa27001b2  sb          $s0, 0x1B2($s3)
    ctx->pc = 0x315aecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 434), (uint8_t)GPR_U32(ctx, 16));
label_315af0:
    // 0x315af0: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x315af0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_315af4:
    // 0x315af4: 0x86110120  lh          $s1, 0x120($s0)
    ctx->pc = 0x315af4u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 288)));
label_315af8:
    // 0x315af8: 0x26100120  addiu       $s0, $s0, 0x120
    ctx->pc = 0x315af8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_315afc:
    // 0x315afc: 0xc067b9c  jal         func_19EE70
label_315b00:
    if (ctx->pc == 0x315B00u) {
        ctx->pc = 0x315B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315AFCu;
        // 0x315b00: 0x2718821  addu        $s1, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315B04u;
        goto label_315b04;
    }
    ctx->pc = 0x315AFCu;
    SET_GPR_U32(ctx, 31, 0x315B04u);
    ctx->pc = 0x315B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315AFCu;
    // 0x315b00: 0x2718821  addu        $s1, $s3, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x315AFCu, 0x315B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315B04u;
label_315b04:
    // 0x315b04: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x315b04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_315b08:
    // 0x315b08: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x315b08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_315b0c:
    // 0x315b0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x315b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_315b10:
    // 0x315b10: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x315b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_315b14:
    // 0x315b14: 0x100f809  jalr        $t0
label_315b18:
    if (ctx->pc == 0x315B18u) {
        ctx->pc = 0x315B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B14u;
        // 0x315b18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315B1Cu;
        goto label_315b1c;
    }
    ctx->pc = 0x315B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x315B1Cu);
        ctx->pc = 0x315B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B14u;
        // 0x315b18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315B14u, 0x315B1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315B1Cu;
label_315b1c:
    // 0x315b1c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x315b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_315b20:
    // 0x315b20: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x315b20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_315b24:
    // 0x315b24: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x315b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_315b28:
    // 0x315b28: 0x40f809  jalr        $v0
label_315b2c:
    if (ctx->pc == 0x315B2Cu) {
        ctx->pc = 0x315B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B28u;
        // 0x315b2c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315B30u;
        goto label_315b30;
    }
    ctx->pc = 0x315B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x315B30u);
        ctx->pc = 0x315B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B28u;
        // 0x315b2c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315B28u, 0x315B30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315B30u;
label_315b30:
    // 0x315b30: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x315b30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_315b34:
    // 0x315b34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x315b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_315b38:
    // 0x315b38: 0xc08e1a4  jal         func_238690
label_315b3c:
    if (ctx->pc == 0x315B3Cu) {
        ctx->pc = 0x315B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B38u;
        // 0x315b3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315B40u;
        goto label_315b40;
    }
    ctx->pc = 0x315B38u;
    SET_GPR_U32(ctx, 31, 0x315B40u);
    ctx->pc = 0x315B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315B38u;
    // 0x315b3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x315B38u, 0x315B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315B40u;
label_315b40:
    // 0x315b40: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x315b40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
label_315b44:
    // 0x315b44: 0x10000002  b           . + 4 + (0x2 << 2)
label_315b48:
    if (ctx->pc == 0x315B48u) {
        ctx->pc = 0x315B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B44u;
        // 0x315b48: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315B4Cu;
        goto label_315b4c;
    }
    ctx->pc = 0x315B44u;
    {
        const bool branch_taken_0x315b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B44u;
        // 0x315b48: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315b44) {
            ctx->pc = 0x315B50u;
            goto label_315b50;
        }
    }
    ctx->pc = 0x315B4Cu;
label_315b4c:
    // 0x315b4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x315b4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_315b50:
    // 0x315b50: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x315b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_315b54:
    // 0x315b54: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x315b54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_315b58:
    // 0x315b58: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x315b58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_315b5c:
    // 0x315b5c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x315b5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_315b60:
    // 0x315b60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x315b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_315b64:
    // 0x315b64: 0x3e00008  jr          $ra
label_315b68:
    if (ctx->pc == 0x315B68u) {
        ctx->pc = 0x315B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B64u;
        // 0x315b68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315B6Cu;
        goto label_315b6c;
    }
    ctx->pc = 0x315B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B64u;
        // 0x315b68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315B6Cu;
label_315b6c:
    // 0x315b6c: 0x0  nop
    ctx->pc = 0x315b6cu;
    // NOP
    ctx->pc = 0x315b70u;
}
